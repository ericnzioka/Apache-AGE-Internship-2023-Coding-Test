C Source Code README
This README file provides information about the development environment and instructions on how to compile and run the given C source code.

Development Environment
To compile and run the provided C source code, you need a C compiler installed on your system. The code has been tested and developed using the C programming language. Commonly used C compilers include:

GCC (GNU Compiler Collection): Available on Linux and other Unix-based systems.
MinGW: For Windows users who want to use GCC on their system.
Xcode: For macOS users.
Make sure you have one of these C compilers installed on your system before proceeding.

Compilation and Execution
Follow the steps below to compile and execute the C source code:

Open a text editor or an integrated development environment (IDE) on your computer.

Copy the entire C source code provided in this file and paste it into a new file in your text editor or IDE.

Save the file with an appropriate name, e.g., fib.c.

Open a terminal or command prompt on your computer.

Navigate to the directory where you saved the fib.c file using the cd command (e.g., cd /path/to/directory).

Compile the C source code using the C compiler. If you have GCC installed, use the following command: gcc -o fib fib.c

This command will create an executable file named main in the same directory.

Run the compiled program using the following command: ./fib

After running the program, you should see the output on the terminal, which will display the results of the calculations performed by the code.

Once the program finishes execution, it will free the allocated memory and terminate.

Code Explanation
This C source code defines several functions and a data structure to perform arithmetic operations and calculate Fibonacci numbers.

Data Structure
struct Node: A structure representing a linked list node with an integer value and a name. The program uses this structure to store the results of arithmetic operations and Fibonacci numbers.

Functions
void calc(struct Node *result): A function that prints the name and value of a given Node structure.

Arithmetic Functions:

struct Node *sum(int a, int b): Calculates the sum of two integers a and b and returns a Node structure with the result.
struct Node *minus(int a, int b): Calculates the subtraction of integer b from a and returns a Node structure with the result.
struct Node *cross(int a, int b): Calculates the product of two integers a and b and returns a Node structure with the result.
struct Node *fibonacci(int a, int p): Calculates the Fibonacci number of a (positive or negative) and returns a Node structure with the result.

struct Node *createNode(): Allocates memory for a new Node structure and returns a pointer to it.

void main(): The main function of the program, which performs the following tasks:

Calls the arithmetic and Fibonacci functions with specific arguments.
Prints the results using the calc function.
Frees the allocated memory to avoid memory leaks.

Enumeration
An enumeration template is used to define named constants representing different arithmetic operations:

ADD: Represents addition.
SUB: Represents subtraction.
MUL: Represents multiplication.
FIB: Represents the Fibonacci operation.

This program was writen by: Eric Muia 
