# Practice · Terminal

## (mc) L1 · Which command shows the folder you are in
You are in the terminal and you do not know which folder you are in. Which command tells you?
* `pwd`
- `ls`
- `cd`
- `mkdir`
> `pwd` prints the folder you are standing in. `ls` shows what is inside it, `cd` moves you, `mkdir` makes a new folder.

## (mc) L1 · Which command lists the files in the folder
Which command shows the files in the folder you are in?
- `pwd`
- `cd`
* `ls` (on Windows also `dir`)
- `gcc`
> `ls` lists what is in the folder. On Windows PowerShell `dir` does the same. `pwd` only prints the folder's name, not its contents.

## (mc) L1 · Which command makes a new folder
Which command creates a new folder?
- `cd`
- `ls`
- `new`
* `mkdir`
> `mkdir` means "make directory". A directory is a folder. `new` is not a command.

## (mc) L2 · Going into a folder
You are in your home folder and it contains a folder called `c_week1`. Which command takes you into `c_week1`?
- `cd`
* `cd c_week1`
- `mkdir c_week1`
- `ls c_week1`
> `cd` followed by the folder's name goes into that folder. `cd` alone goes home. `mkdir c_week1` would try to make it again. `ls c_week1` only shows what is inside it without moving you.

## (mc) L2 · Going back up
You are inside `c_week1` and want to go back to the folder that contains it. Which command does that?
- `cd back`
- `cd /`
* `cd ..`
- `pwd ..`
> `cd ..` means "go up one level". The two dots stand for "the folder above this one". `cd /` goes to the very top of the disk, which is not where you want to be.

## (mc) L2 · gcc cannot find the file
You type `gcc hello.c -o hello` and see `gcc: error: hello.c: No such file or directory`. What is the most likely reason?
- The program has a missing semicolon.
- gcc is not installed.
* You are in the wrong folder, so gcc cannot see `hello.c`.
- The file must be called `hello.exe`.
> "No such file" means gcc looked in the folder you are in and did not find `hello.c`. Run `pwd` and `ls` to see where you are and what is there, then `cd` into the right folder. A missing semicolon gives a different message, with a line number.

## (fib) L3 · Make a folder called practice
Write the command that creates a folder named `practice`. Type it exactly, with one space: [mkdir practice]
> `mkdir practice`. The command first, then a space, then the name of the new folder.

## (fib) L3 · Go into that folder
You just created the folder `practice`. Write the command that goes into it: [cd practice]
> `cd practice`. `cd` means "change directory", and the name after it is where you go.

## (fib) L3 · Compile and run
Complete the two commands. To compile `hello.c` into a program called `hello`, with all warnings on: `gcc -Wall hello.c` [-o hello]. Then, to run it on Linux or macOS: [./hello]
> The compile command is `gcc -Wall hello.c -o hello`. `-o hello` means "put the output in a file called hello". To run it you type `./hello` (on Windows PowerShell `.\hello`). The `./` means "the one in this folder".
