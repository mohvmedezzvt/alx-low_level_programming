# 0x00-hello_world
This is a collection of C programs that serves as an introduction to the basics of the C programming language. Each program demonstrates a fundamental concept of C and is intended to be run from the command line.

## Getting Started
To get started with these programs, you will need a C compiler such as gcc installed on your system. If you don't already have a C compiler, you can download gcc by running the following command:

```
sudo apt-get install build-essential 
```

Once you have gcc installed, you can compile any of the programs in this repository by running the following command:

```
gcc -Wall -Werror -Wextra -pedantic <program_name.c> -o <output_name> 
```

Replace `<program_name.c>` with the name of the program you want to compile and `<output_name>` with the desired name of the compiled executable.

## Programs
Here's a list of the programs included in this repository:

- 0-preprocessor: Demonstrates how the C preprocessor works.
- 1-compiler: Demonstrates how the C compiler works.
- 2-assembler: Demonstrates how the C assembler works.
- 3-name: Prints the name of the executable file.
- 4-puts.c: Prints a string to the standard output.
- 5-printf.c: Prints a formatted string to the standard output.
- 6-size.c: Prints the size of various C data types on the system.
## Usage
To run any of the programs in this repository, simply compile the program and then run the resulting executable. For example, to run the 0-preprocessor program, you would do the following:
```
gcc -Wall -Werror -Wextra -pedantic 0-preprocessor.c -o 0-preprocessor
./0-preprocessor
```
## Author
These programs were written by [Mohamed Ezzat](https://github.com/mohvmedezzvt) as part of the ALX Software Engineering program.
