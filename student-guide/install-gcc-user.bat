@echo off
set "SCRIPT_NAME=%~nx0"

rem ============================================================
rem Select an installation mode based on available privileges
rem ============================================================

fltmc >nul 2>&1

if errorlevel 1 (
    goto StandardUserMode
)

set "INSTALL_SCOPE=Machine"
set "PATH_TARGET=system"
set "MSYS_ROOT=C:\msys64"
goto InstallModeReady

:StandardUserMode

set "INSTALL_SCOPE=User"
set "PATH_TARGET=user"
set "MSYS_ROOT=%LOCALAPPDATA%\msys64"

:InstallModeReady

set "MSYS_ROOT_QT=%MSYS_ROOT:\=/%"
set "MSYS_BASH=%MSYS_ROOT%\usr\bin\bash.exe"
set "GCC_PATH=%MSYS_ROOT%\ucrt64\bin"
set "MSYS_INSTALLER=%TEMP%\msys2-x86_64-installer.exe"
set "MSYS_CHECKSUM=%TEMP%\msys2-x86_64-installer.sha256"

echo.
if /i "%INSTALL_SCOPE%"=="Machine" (
    echo Administrator access detected.
    echo GCC will be installed for all users.
) else (
    echo Running without Administrator access.
    echo GCC will be installed only for the current user.
)
echo Installation folder:
echo     %MSYS_ROOT%

rem ============================================================
rem Check Windows architecture
rem ============================================================

if /i "%PROCESSOR_ARCHITECTURE%"=="AMD64" goto ArchitectureOK
if /i "%PROCESSOR_ARCHITEW6432%"=="AMD64" goto ArchitectureOK

echo.
echo ERROR: This script currently supports only x64 Windows.
echo.
exit /b 1

:ArchitectureOK

rem ============================================================
rem Find and test PowerShell
rem ============================================================

echo.
echo Checking PowerShell...

call :FindPowerShell

if defined POWERSHELL_EXE (
    echo PowerShell is working:
    echo     %POWERSHELL_EXE%
    goto PowerShellReady
)

echo.
echo PowerShell was not found or could not execute commands.
echo PowerShell is needed to repair WinGet and update PATH.
echo.

choice /C YN /N /M "Download and install PowerShell 7 now? [Y/N]: "

if errorlevel 2 (
    echo.
    echo Installation cancelled by the user.
    exit /b 1
)

call :InstallPowerShell

if errorlevel 1 (
    echo.
    echo ERROR: PowerShell installation failed.
    exit /b 1
)

call :FindPowerShell

if not defined POWERSHELL_EXE (
    echo.
    echo ERROR: PowerShell was installed but still cannot be executed.
    echo Restart Windows and run this script again.
    exit /b 1
)

:PowerShellReady

rem A standard user does not need WinGet. The official MSYS2 installer can
rem install directly into the user's local application-data directory.
if /i "%INSTALL_SCOPE%"=="User" goto MSYS2Start

rem ============================================================
rem Find and test WinGet
rem ============================================================

echo.
echo Checking WinGet...

call :FindWinGet

if defined WINGET_EXE (
    echo WinGet is working:
    "%WINGET_EXE%" --version
    goto WinGetReady
)

echo.
echo WinGet was not found or failed its execution test.
echo.

choice /C YN /N /M "Attempt to install or repair WinGet now? [Y/N]: "

if errorlevel 2 (
    echo.
    echo WinGet repair cancelled by the user.
    exit /b 1
)

call :RepairWinGet

if errorlevel 1 (
    echo.
    echo ERROR: WinGet repair failed.
    exit /b 1
)

call :FindWinGet

if not defined WINGET_EXE (
    echo.
    echo ERROR: WinGet was repaired but still cannot be executed.
    echo Restart Windows and run this script again.
    exit /b 1
)

:WinGetReady

rem ============================================================
rem Verify that the WinGet community source actually works
rem ============================================================

echo.
echo Checking the WinGet community package source...

call :EnsureWinGetSource

if not errorlevel 1 goto WinGetSourceReady

echo.
echo The WinGet executable works, but its package source is broken.
echo The script already attempted to reset and update the source.
echo.

choice /C YN /N /M "Attempt a complete WinGet repair now? [Y/N]: "

if errorlevel 2 (
    echo.
    echo WinGet repair cancelled by the user.
    exit /b 1
)

call :RepairWinGet

if errorlevel 1 (
    echo.
    echo ERROR: WinGet repair failed.
    exit /b 1
)

rem Locate WinGet again in case the repair changed its executable.
call :FindWinGet

if not defined WINGET_EXE (
    echo.
    echo ERROR: WinGet cannot be found after repair.
    exit /b 1
)

rem Reset and test the package source again.
call :EnsureWinGetSource

if errorlevel 1 (
    echo.
    echo ERROR: The WinGet community source is still unavailable.
    echo.
    echo Diagnostic information:
    "%WINGET_EXE%" source list
    echo.
    echo Try restarting Windows and running this script again.
    exit /b 1
)

:WinGetSourceReady

echo WinGet community source query succeeded.

:MSYS2Start

rem ============================================================
rem Install MSYS2
rem ============================================================

echo.
echo Checking MSYS2...

if exist "%MSYS_BASH%" (
    echo MSYS2 is already installed.
    goto MSYS2Ready
)

if /i "%INSTALL_SCOPE%"=="User" (
    echo Installing MSYS2 directly without Administrator privileges...

    call :InstallMSYS2Direct

    if errorlevel 1 (
        echo.
        echo ERROR: Per-user MSYS2 installation failed.
        exit /b 1
    )

    goto MSYS2Ready
)

echo Installing MSYS2...

"%WINGET_EXE%" install ^
    --exact ^
    --id MSYS2.MSYS2 ^
    --source winget ^
    --silent ^
    --disable-interactivity ^
    --accept-package-agreements ^
    --accept-source-agreements

if errorlevel 1 (
    echo.
    echo WinGet could not install MSYS2.
    echo Resetting its sources and retrying once...

    "%WINGET_EXE%" source reset --force
    "%WINGET_EXE%" source update --name winget

    "%WINGET_EXE%" install ^
        --exact ^
        --id MSYS2.MSYS2 ^
        --source winget ^
        --silent ^
        --disable-interactivity ^
        --accept-package-agreements ^
        --accept-source-agreements
)

if not exist "%MSYS_BASH%" (
    echo.
    echo The source reset did not restore WinGet.
    echo Attempting a complete WinGet package-manager repair...

    call :RepairWinGet

    if not errorlevel 1 (
        call :FindWinGet

        if defined WINGET_EXE (
            "%WINGET_EXE%" source reset --force
            "%WINGET_EXE%" source update --name winget

            "%WINGET_EXE%" install ^
                --exact ^
                --id MSYS2.MSYS2 ^
                --source winget ^
                --silent ^
                --disable-interactivity ^
                --accept-package-agreements ^
                --accept-source-agreements
        )
    )
)

if not exist "%MSYS_BASH%" (
    echo.
    echo WinGet remains unable to install MSYS2.
    echo Switching to the official direct MSYS2 installer...

    call :InstallMSYS2Direct

    if errorlevel 1 (
        echo.
        echo ERROR: Direct MSYS2 installation failed.
        exit /b 1
    )
)

:MSYS2Ready

if not exist "%MSYS_BASH%" (
    echo.
    echo ERROR: MSYS2 Bash was not found:
    echo     %MSYS_BASH%
    exit /b 1
)

rem ============================================================
rem Update MSYS2
rem ============================================================

echo.
echo Updating MSYS2 packages...

"%MSYS_BASH%" -lc "pacman -Syu --noconfirm"

if errorlevel 1 (
    echo.
    echo ERROR: MSYS2 package update failed.
    exit /b 1
)

rem ============================================================
rem Install GCC
rem ============================================================

echo.
echo Installing the UCRT64 GCC toolchain...

"%MSYS_BASH%" -lc "pacman -S --needed --noconfirm mingw-w64-ucrt-x86_64-gcc"

if errorlevel 1 (
    echo.
    echo ERROR: GCC installation failed.
    exit /b 1
)

if not exist "%GCC_PATH%\gcc.exe" (
    echo.
    echo ERROR: GCC was installed, but gcc.exe was not found:
    echo     %GCC_PATH%\gcc.exe
    exit /b 1
)

rem ============================================================
rem Persist GCC in the appropriate PATH
rem ============================================================

echo.
echo Adding GCC to the %PATH_TARGET% PATH...

if /i "%INSTALL_SCOPE%"=="Machine" (
    call :AddGccToMachinePath
) else (
    call :AddGccToUserPath
)

if errorlevel 1 (
    echo.
    echo ERROR: Could not update the %PATH_TARGET% PATH.
    exit /b 1
)

rem Make GCC immediately available inside this CMD process.
echo ;%PATH%; | find /i ";%GCC_PATH%;" >nul

if errorlevel 1 (
    set "PATH=%GCC_PATH%;%PATH%"
)

rem ============================================================
rem Final compiler test
rem ============================================================

echo.
echo Testing GCC with a real Hello World program...

"%GCC_PATH%\gcc.exe" --version

if errorlevel 1 (
    echo.
    echo ERROR: GCC was installed but failed its execution test.
    exit /b 1
)

set "GCC_TEST_DIR=%TEMP%\gcc-install-test-%RANDOM%-%RANDOM%"
mkdir "%GCC_TEST_DIR%" >nul 2>&1

if errorlevel 1 (
    echo.
    echo ERROR: Could not create the temporary compiler-test folder.
    exit /b 1
)

(
    echo #include ^<stdio.h^>
    echo int main^(void^) {
    echo     puts^("Hello from GCC!"^);
    echo     return 0;
    echo }
) > "%GCC_TEST_DIR%\hello.c"

"%GCC_PATH%\gcc.exe" "%GCC_TEST_DIR%\hello.c" -o "%GCC_TEST_DIR%\hello.exe"

if errorlevel 1 (
    echo.
    echo ERROR: GCC could not compile the Hello World test.
    echo Test files were kept here:
    echo     %GCC_TEST_DIR%
    exit /b 1
)

"%GCC_TEST_DIR%\hello.exe"

if errorlevel 1 (
    echo.
    echo ERROR: The compiled Hello World program could not run.
    echo Test files were kept here:
    echo     %GCC_TEST_DIR%
    exit /b 1
)

rmdir /s /q "%GCC_TEST_DIR%"

echo.
echo ============================================================
echo GCC installation completed successfully.
echo ============================================================
echo.
echo Compiler:
echo     %GCC_PATH%\gcc.exe
echo Installation scope:
echo     %INSTALL_SCOPE%
echo Hello World compilation test:
echo     Passed
echo.
echo Test it with:
echo     gcc --version
echo     g++ --version
echo.

exit /b 0

rem ============================================================
rem Add GCC to the machine PATH and remove a duplicate user entry
rem ============================================================

:AddGccToMachinePath

"%POWERSHELL_EXE%" ^
    -NoLogo ^
    -NoProfile ^
    -NonInteractive ^
    -ExecutionPolicy Bypass ^
    -Command ^
    "$ErrorActionPreference='Stop';" ^
    "$gccPath='%GCC_PATH%';" ^
    "$normalizedGcc=$gccPath.TrimEnd('\');" ^
    "$machinePath=[Environment]::GetEnvironmentVariable('Path','Machine');" ^
    "$machineEntries=@($machinePath -split ';' | Where-Object { $_ });" ^
    "$machineHasGcc=@($machineEntries | Where-Object { $_.Trim().TrimEnd('\') -ieq $normalizedGcc }).Count -gt 0;" ^
    "if (-not $machineHasGcc) { [Environment]::SetEnvironmentVariable('Path',(($machineEntries+$gccPath)-join ';'),'Machine') };" ^
    "$userPath=[Environment]::GetEnvironmentVariable('Path','User');" ^
    "$userEntries=@($userPath -split ';' | Where-Object { $_ });" ^
    "$cleanUserEntries=@($userEntries | Where-Object { $_.Trim().TrimEnd('\') -ine $normalizedGcc });" ^
    "if ($cleanUserEntries.Count -ne $userEntries.Count) { [Environment]::SetEnvironmentVariable('Path',($cleanUserEntries -join ';'),'User') }"

exit /b %ERRORLEVEL%

rem ============================================================
rem Add GCC to the current user's PATH without elevation
rem ============================================================

:AddGccToUserPath

"%POWERSHELL_EXE%" ^
    -NoLogo ^
    -NoProfile ^
    -NonInteractive ^
    -ExecutionPolicy Bypass ^
    -Command ^
    "$ErrorActionPreference='Stop';" ^
    "$gccPath='%GCC_PATH%';" ^
    "$normalizedGcc=$gccPath.TrimEnd('\');" ^
    "$userPath=[Environment]::GetEnvironmentVariable('Path','User');" ^
    "$userEntries=@($userPath -split ';' | Where-Object { $_ });" ^
    "$userHasGcc=@($userEntries | Where-Object { $_.Trim().TrimEnd('\') -ieq $normalizedGcc }).Count -gt 0;" ^
    "if (-not $userHasGcc) { [Environment]::SetEnvironmentVariable('Path',(($userEntries+$gccPath)-join ';'),'User') }"

exit /b %ERRORLEVEL%

rem ============================================================
rem Download and run the official MSYS2 installer directly
rem ============================================================

:InstallMSYS2Direct

del "%MSYS_INSTALLER%" >nul 2>&1
del "%MSYS_CHECKSUM%" >nul 2>&1

echo Finding the latest stable MSYS2 installer...

"%POWERSHELL_EXE%" ^
    -NoLogo ^
    -NoProfile ^
    -NonInteractive ^
    -ExecutionPolicy Bypass ^
    -Command ^
    "$ErrorActionPreference='Stop';" ^
    "[Net.ServicePointManager]::SecurityProtocol=[Net.SecurityProtocolType]::Tls12;" ^
    "$headers=@{'User-Agent'='install-gcc.bat'};" ^
    "$releases=Invoke-RestMethod -Uri 'https://api.github.com/repos/msys2/msys2-installer/releases?per_page=30' -Headers $headers;" ^
    "$release=$releases | Where-Object { -not $_.draft -and -not $_.prerelease -and $_.tag_name -match '^[0-9]{4}-[0-9]{2}-[0-9]{2}$' } | Sort-Object published_at -Descending | Select-Object -First 1;" ^
    "if (-not $release) { throw 'No stable date-tagged MSYS2 release was found.' };" ^
    "$installer=$release.assets | Where-Object { $_.name -match '^msys2-x86_64-[0-9]{8}\.exe$' } | Select-Object -First 1;" ^
    "if (-not $installer) { throw 'The release has no x64 MSYS2 installer.' };" ^
    "Write-Host ('Selected stable MSYS2 release '+$release.tag_name+'.');" ^
    "Write-Host ('Downloading '+$installer.name+'...');" ^
    "Invoke-WebRequest -Uri $installer.browser_download_url -Headers $headers -OutFile '%MSYS_INSTALLER%';" ^
    "$expected=$null;" ^
    "if ($installer.digest -match '^sha256:([a-fA-F0-9]{64})$') { $expected=$Matches[1].ToLowerInvariant() };" ^
    "if (-not $expected) {" ^
    "    $checksum=$release.assets | Where-Object { $_.name -eq ($installer.name+'.sha256') } | Select-Object -First 1;" ^
    "    $checksumUrl=if ($checksum) { $checksum.browser_download_url } else { $installer.browser_download_url+'.sha256' };" ^
    "    Invoke-WebRequest -Uri $checksumUrl -Headers $headers -OutFile '%MSYS_CHECKSUM%';" ^
    "    $expected=((Get-Content -LiteralPath '%MSYS_CHECKSUM%' -Raw).Trim() -split '\s+')[0].ToLowerInvariant();" ^
    "};" ^
    "if ($expected -notmatch '^[a-f0-9]{64}$') { throw 'The published SHA-256 checksum is invalid.' };" ^
    "$actual=(Get-FileHash -LiteralPath '%MSYS_INSTALLER%' -Algorithm SHA256).Hash.ToLowerInvariant();" ^
    "if ($actual -ne $expected) { throw ('MSYS2 checksum mismatch. Expected '+$expected+', received '+$actual+'.') };" ^
    "Write-Host 'MSYS2 installer checksum verified.'"

if errorlevel 1 (
    echo ERROR: Could not securely download the official MSYS2 installer.
    del "%MSYS_INSTALLER%" >nul 2>&1
    del "%MSYS_CHECKSUM%" >nul 2>&1
    exit /b 1
)

echo Installing MSYS2 directly to %MSYS_ROOT%...

start "" /wait "%MSYS_INSTALLER%" in ^
    --confirm-command ^
    --accept-messages ^
    --root "%MSYS_ROOT_QT%"

set "MSYS_INSTALL_RESULT=%ERRORLEVEL%"

del "%MSYS_INSTALLER%" >nul 2>&1
del "%MSYS_CHECKSUM%" >nul 2>&1

if not "%MSYS_INSTALL_RESULT%"=="0" (
    echo ERROR: The MSYS2 installer returned exit code %MSYS_INSTALL_RESULT%.
    exit /b 1
)

if not exist "%MSYS_BASH%" (
    echo ERROR: The direct installer completed, but MSYS2 Bash was not found.
    exit /b 1
)

exit /b 0

rem ============================================================
rem Find a functional PowerShell installation
rem ============================================================

:FindPowerShell

set "POWERSHELL_EXE="

call :TestPowerShell "%SystemRoot%\System32\WindowsPowerShell\v1.0\powershell.exe"
if defined POWERSHELL_EXE exit /b 0

call :TestPowerShell "%ProgramFiles%\PowerShell\7\pwsh.exe"
if defined POWERSHELL_EXE exit /b 0

for /f "delims=" %%P in ('where pwsh.exe 2^>nul') do (
    if not defined POWERSHELL_EXE call :TestPowerShell "%%P"
)

exit /b 0

:TestPowerShell

if not exist "%~1" exit /b 1

"%~1" ^
    -NoLogo ^
    -NoProfile ^
    -NonInteractive ^
    -Command "exit 0" >nul 2>&1

if not errorlevel 1 (
    set "POWERSHELL_EXE=%~1"
    exit /b 0
)

exit /b 1

rem ============================================================
rem Install latest stable PowerShell 7 through official GitHub
rem ============================================================

:InstallPowerShell

where curl.exe >nul 2>&1

if errorlevel 1 (
    echo.
    echo ERROR: curl.exe is unavailable, so PowerShell cannot be
    echo downloaded automatically.
    echo.
    echo Opening Microsoft's PowerShell installation page...
    start "" "https://learn.microsoft.com/powershell/scripting/install/install-powershell-on-windows"
    exit /b 1
)

set "PS_RELEASE_JSON=%TEMP%\powershell-latest-release.json"
set "PS_INSTALLER=%TEMP%\PowerShell-win-x64.msi"
set "PS_DOWNLOAD_URL="

echo.
echo Finding the latest stable PowerShell 7 release...

curl.exe ^
    --fail ^
    --location ^
    --silent ^
    --show-error ^
    --retry 3 ^
    --output "%PS_RELEASE_JSON%" ^
    "https://api.github.com/repos/PowerShell/PowerShell/releases/latest"

if errorlevel 1 (
    echo ERROR: Could not retrieve PowerShell release information.
    exit /b 1
)

for /f tokens^=4^ delims^=^" %%U in (
    'findstr /i "browser_download_url" "%PS_RELEASE_JSON%" ^| findstr /i "win-x64.msi"'
) do (
    if not defined PS_DOWNLOAD_URL set "PS_DOWNLOAD_URL=%%U"
)

if not defined PS_DOWNLOAD_URL (
    echo ERROR: Could not find the PowerShell x64 MSI download.
    exit /b 1
)

echo Downloading PowerShell 7...

curl.exe ^
    --fail ^
    --location ^
    --silent ^
    --show-error ^
    --retry 3 ^
    --output "%PS_INSTALLER%" ^
    "%PS_DOWNLOAD_URL%"

if errorlevel 1 (
    echo ERROR: PowerShell download failed.
    exit /b 1
)

echo Installing PowerShell 7 silently...

msiexec.exe /i "%PS_INSTALLER%" ^
    /quiet ^
    /norestart ^
    ADD_PATH=1 ^
    USE_MU=1 ^
    ENABLE_MU=1

if errorlevel 1 (
    echo ERROR: The PowerShell MSI installer failed.
    exit /b 1
)

del "%PS_RELEASE_JSON%" >nul 2>&1
del "%PS_INSTALLER%" >nul 2>&1

exit /b 0

rem ============================================================
rem Find a functional WinGet installation
rem ============================================================

:FindWinGet

set "WINGET_EXE="

call :TestWinGet "winget.exe"
if defined WINGET_EXE exit /b 0

call :TestWinGet "%LOCALAPPDATA%\Microsoft\WindowsApps\winget.exe"
if defined WINGET_EXE exit /b 0

exit /b 0

:TestWinGet

"%~1" --version >nul 2>&1

if not errorlevel 1 (
    set "WINGET_EXE=%~1"
    exit /b 0
)

exit /b 1

rem ============================================================
rem Install or repair WinGet
rem ============================================================

rem ============================================================
rem Test, reset, and update the WinGet community source
rem ============================================================

:EnsureWinGetSource

rem A version check is insufficient. Query the exact package we need.
"%WINGET_EXE%" show ^
    --exact ^
    --id MSYS2.MSYS2 ^
    --source winget ^
    --accept-source-agreements ^
    --disable-interactivity >nul 2>&1

if not errorlevel 1 (
    exit /b 0
)

echo.
echo The WinGet community source failed its package query.
echo Resetting the default WinGet sources...

"%WINGET_EXE%" source reset --force

if errorlevel 1 (
    echo WARNING: WinGet source reset reported an error.
)

echo Updating the WinGet community source...

"%WINGET_EXE%" source update --name winget

if errorlevel 1 (
    echo WARNING: WinGet source update reported an error.
)

echo Testing the WinGet community source again...

"%WINGET_EXE%" show ^
    --exact ^
    --id MSYS2.MSYS2 ^
    --source winget ^
    --accept-source-agreements ^
    --disable-interactivity >nul 2>&1

if errorlevel 1 (
    exit /b 1
)

exit /b 0

:RepairWinGet

echo.
echo Installing the Microsoft WinGet repair module...

"%POWERSHELL_EXE%" ^
    -NoLogo ^
    -NoProfile ^
    -NonInteractive ^
    -ExecutionPolicy Bypass ^
    -Command ^
    "$ErrorActionPreference='Stop';" ^
    "[Net.ServicePointManager]::SecurityProtocol=[Net.SecurityProtocolType]::Tls12;" ^
    "Install-PackageProvider -Name NuGet -MinimumVersion 2.8.5.201 -Force -Scope AllUsers | Out-Null;" ^
    "Install-Module -Name Microsoft.WinGet.Client -Repository PSGallery -Scope AllUsers -Force -AllowClobber -Confirm:$false;" ^
    "Import-Module Microsoft.WinGet.Client -Force;" ^
    "Repair-WinGetPackageManager -AllUsers -Force"

if errorlevel 1 (
    echo.
    echo ERROR: The Microsoft WinGet repair command failed.
    exit /b 1
)

echo WinGet repair completed.

exit /b 0
