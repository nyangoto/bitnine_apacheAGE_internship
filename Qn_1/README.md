# Question 2

Node is defined as follows

typedef struct Node
{
TypeTag type;
} Node;
typedef enum TypeTag {
...
}

Using this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations (+, -, *, /) and conditions.

The fibonacci function should be implemented using Dynamic Programming.

## Development Environment

- Programming Language: C
- [header file](./fib2.h) contains the relevant library inclusions, tydef structures and function prototypes.
- Compiler: GCC (GNU Compiler Collection)
- Operating System: Linux(Debian) or Windows with [WSL2](https://learn.microsoft.com/en-us/windows/wsl/install) installed.

## Prerequisites

To compile and run the source code, make sure you have the following installed on your system:

- GCC: [Installation instructions](https://gcc.gnu.org/install/index.html)
- Windows Subsystem for Linux 2: [Installation instructions](https://learn.microsoft.com/en-us/windows/wsl/install)

## Compilation

Follow the steps below to compile the source code:

1. Clone the repository or download the source code files.

2. Open a terminal or command prompt and navigate to the project directory.

3. Run the following command to compile the code:

   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o program_name fib2.c

If the compilation is successful, an executable file will be generated in the project directory.

## Usage

Follow the steps below to run the compiled program:

1. Open a terminal or command prompt and navigate to the project directory.

2. Run the following command to execute the program:

   ```bash
   ./program_name

3. Replace program_name with the name specified during compilation.

The program will now run and display the output on the terminal.
