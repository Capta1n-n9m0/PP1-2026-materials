# CSCI 1101 Programming Principles I - Fall 2026 - course materials

ADA University. Instructor: Abbas Aliyev (ashaliyev@ada.edu.az).

The materials of this section of CSCI 1101, an introduction to programming
in C for first-year students with no programming background: the syllabus,
the slides with their notes, every program shown in class, the practice
tests with their answers, and the project briefs.

The files are copies of the course's working files, updated after each
class. If you find a mistake (a typo on a slide, a program that does not
compile, a wrong answer in a practice test), open an issue.

License: TODO (the instructor decides).

## Where things are

| Folder | What is in it |
|---|---|
| [`syllabus/`](syllabus/) | the syllabus (md, pdf, docx): schedule, grading, policies |
| [`slides/`](slides/) | every class deck, pdf and pptx; the pptx has the student notes in its notes pane |
| [`student-notes/`](student-notes/) | the same notes as readable pages, one per class, slide by slide |
| [`code/`](code/) | every program shown in class (`class-NN/` plus `Class_NN_code.zip`). Each file starts with what it does, how to run it, and a *Try* list of changes |
| [`practice-tests/`](practice-tests/) | drills by topic, with the answers and the feedback |
| [`projects/`](projects/) | the brief of each project |

## Class by class

| # | Date | Class | Slides | Student notes | Code |
|---|---|---|---|---|---|
| 1 | 08 September | Course intro and first C program | [Week_01_Programming_Principles_I_C.pdf](slides/Week_01_Programming_Principles_I_C.pdf) | [notes](student-notes/01-course-intro-and-first-c-program.md) | - |
| 2 | 11 September | printf, scanf and math | [Week_01_Programming_Principles_I_C.pdf](slides/Week_01_Programming_Principles_I_C.pdf) | [notes](student-notes/02-printf-scanf-and-math.md) | - |
| 3 | 15 September | Data types, comparisons and if | [Week_02_Programming_Principles_I_C.pdf](slides/Week_02_Programming_Principles_I_C.pdf) | [notes](student-notes/03-data-types-comparisons-and-if.md) | - |
| 4 | 18 September | Quiz 1, else-if, switch and worked examples | [Week_02_Programming_Principles_I_C.pdf](slides/Week_02_Programming_Principles_I_C.pdf) | [notes](student-notes/04-quiz-1-else-if-switch-and-worked-examples.md) | - |
| 5 | 22 September | Loops, while and for | [Class_05_Loops_while_and_for.pdf](slides/Class_05_Loops_while_and_for.pdf) | [notes](student-notes/05-loops-while-and-for.md) | [class-05](code/class-05/) |
| 6 | 25 September | Loop patterns, tracing and practice | [Class_06_Loop_patterns_and_practice.pdf](slides/Class_06_Loop_patterns_and_practice.pdf) | [notes](student-notes/06-loop-patterns-tracing-and-practice.md) | [class-06](code/class-06/) |
| 7 | 29 September | Functions | [Class_07_Functions.pdf](slides/Class_07_Functions.pdf) | [notes](student-notes/07-functions.md) | [class-07](code/class-07/) |
| 8 | 02 October | Scope, call-by-value and recursion | [Class_08_Scope_call_by_value_recursion.pdf](slides/Class_08_Scope_call_by_value_recursion.pdf) | [notes](student-notes/08-scope-call-by-value-and-recursion.md) | [class-08](code/class-08/) |
| 9 | 06 October | Linear arrays | [Class_09_Linear_arrays.pdf](slides/Class_09_Linear_arrays.pdf) | [notes](student-notes/09-linear-arrays.md) | [class-09](code/class-09/) |
| 10 | 09 October | Search, min-max and bubble sort | [Class_10_Search_min_max_bubble_sort.pdf](slides/Class_10_Search_min_max_bubble_sort.pdf) | [notes](student-notes/10-search-min-max-and-bubble-sort.md) | [class-10](code/class-10/) |
| 11 | 13 October | Characters and strings | [Class_11_Characters_and_strings.pdf](slides/Class_11_Characters_and_strings.pdf) | [notes](student-notes/11-characters-and-strings.md) | [class-11](code/class-11/) |
| 12 | 16 October | String manipulation and conversions | [Class_12_String_manipulation_and_conversions.pdf](slides/Class_12_String_manipulation_and_conversions.pdf) | [notes](student-notes/12-string-manipulation-and-conversions.md) | [class-12](code/class-12/) |
| 13 | 20 October | Multidimensional arrays | [Class_13_Multidimensional_arrays.pdf](slides/Class_13_Multidimensional_arrays.pdf) | [notes](student-notes/13-multidimensional-arrays.md) | [class-13](code/class-13/) |
| 14 | 23 October | Tables and matrices | [Class_14_Tables_and_matrices.pdf](slides/Class_14_Tables_and_matrices.pdf) | [notes](student-notes/14-tables-and-matrices.md) | [class-14](code/class-14/) |

Weeks 1 and 2 use one deck per week, shared by two classes; from class 5
there is one deck per class. The full schedule, with the classes still to
come, is in the syllabus.

## Practice tests

Each file is a bank of questions on one topic, exactly as it was put on
Blackboard:

- `## ...` starts a question; the lines under it are the question text and
  any code.
- `- ...` is a wrong option, `* ...` the right one.
- `> ...` is the feedback shown after answering.
- `(mc)` is multiple choice and `(fib)` a typed answer; `L1`, `L2`, `L3` is
  the level, easy to hard.

The pdf beside each file is the same bank as a readable page, with the
right answer and the feedback written out.

| Practice test | Topic |
|---|---|
| [`01-terminal.md`](practice-tests/01-terminal.md) | Terminal |
| [`02-program-shape.md`](practice-tests/02-program-shape.md) | Program shape |
| [`03-variables.md`](practice-tests/03-variables.md) | Variables |
| [`04-printf.md`](practice-tests/04-printf.md) | printf |
| [`05-scanf.md`](practice-tests/05-scanf.md) | scanf |
| [`06-arithmetic.md`](practice-tests/06-arithmetic.md) | Arithmetic |
| [`07-math-functions.md`](practice-tests/07-math-functions.md) | Math functions |
| [`08-whole-programs.md`](practice-tests/08-whole-programs.md) | Whole programs |
| [`09-data-types-and-conversion.md`](practice-tests/09-data-types-and-conversion.md) | Data types and conversion |
| [`10-comparisons-and-logic.md`](practice-tests/10-comparisons-and-logic.md) | Comparisons and logic |
| [`11-if-and-else.md`](practice-tests/11-if-and-else.md) | if and else |
| [`12-switch.md`](practice-tests/12-switch.md) | switch |
| [`13-whole-programs-2.md`](practice-tests/13-whole-programs-2.md) | Whole programs 2 |
| [`14-while-loops.md`](practice-tests/14-while-loops.md) | while loops |
| [`15-for-loops.md`](practice-tests/15-for-loops.md) | for loops |
| [`16-increment-and-compound-assignment.md`](practice-tests/16-increment-and-compound-assignment.md) | ++, -- and += |
| [`17-loop-patterns.md`](practice-tests/17-loop-patterns.md) | Loop patterns |
| [`18-whole-programs-3.md`](practice-tests/18-whole-programs-3.md) | Whole programs 3 |
| [`19-functions.md`](practice-tests/19-functions.md) | Functions |
| [`20-scope-and-call-by-value.md`](practice-tests/20-scope-and-call-by-value.md) | Scope and call-by-value |
| [`21-recursion.md`](practice-tests/21-recursion.md) | Recursion |
| [`22-whole-programs-4.md`](practice-tests/22-whole-programs-4.md) | Whole programs 4 |
| [`23-arrays.md`](practice-tests/23-arrays.md) | Arrays |
| [`24-array-loops.md`](practice-tests/24-array-loops.md) | Array loops |
| [`25-search-and-min-max.md`](practice-tests/25-search-and-min-max.md) | Search and min-max |
| [`26-bubble-sort.md`](practice-tests/26-bubble-sort.md) | Bubble sort |
| [`27-characters.md`](practice-tests/27-characters.md) | Characters |
| [`28-strings.md`](practice-tests/28-strings.md) | Strings |
| [`29-string-functions.md`](practice-tests/29-string-functions.md) | String functions |
| [`30-number-string-conversions.md`](practice-tests/30-number-string-conversions.md) | Number-string conversions |
| [`31-whole-programs-5.md`](practice-tests/31-whole-programs-5.md) | Whole programs 5 |
| [`32-two-dimensional-arrays.md`](practice-tests/32-two-dimensional-arrays.md) | Two-dimensional arrays |
| [`33-table-loops.md`](practice-tests/33-table-loops.md) | Table loops |
| [`34-grids-in-functions-and-matrices.md`](practice-tests/34-grids-in-functions-and-matrices.md) | Grids in functions and matrices |
| [`35-tables-and-neighbours.md`](practice-tests/35-tables-and-neighbours.md) | Tables and neighbours |
| [`36-whole-programs-6.md`](practice-tests/36-whole-programs-6.md) | Whole programs 6 |

## Projects

| Project | Brief |
|---|---|
| Project 1: Simplified Blackjack | [`project-01.md`](projects/01/project-01.md), [`project-01.pdf`](projects/01/project-01.pdf) |

## Running the code

Use GCC (MinGW-w64 on Windows), Clang on macOS, or GCC on Linux. In the
terminal, in the folder of the file:

```
gcc -Wall 09_largest.c -o largest
./largest          (Windows PowerShell: .\largest)
```

A few programs contain a bug on purpose; their header says so and says
what the compiler reports.
