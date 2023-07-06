#include "fib2.h"

/**
    * fibonacci - Calculate the Fibonacci sequence up to the nth term.
    * @n: The index of the desired Fibonacci number.
    * 
    * Description: This function dynamically allocates memory for an array of Node structs to store
    * the Fibonacci numbers. It sets the base cases (0 and 1) and calculates the
    * Fibonacci sequence using addition operations. Each Node struct represents an
    * addition operation and stores pointers to the previous two Fibonacci numbers.
    *
    * Return: A pointer to the nth Fibonacci number.
*/
Node* fibonacci(int n)
{
    Node* fibTable = (Node*)malloc((n+1) * sizeof(Node));

    // Base cases
    fibTable[0].type = CONSTANT;
    fibTable[1].type = CONSTANT;

    // Calculate Fibonacci sequence
    for (int i = 2; i <= n; i++) {
        fibTable[i].type = ADD;

        // Add previous two Fibonacci numbers
        fibTable[i].left = &fibTable[i-1];
        fibTable[i].right = &fibTable[i-2];
    }

    return &fibTable[n];
}

/**
    * printFibonacci - Print the Fibonacci sequence represented by a given Node.
    * @node: Pointer to the Node representing a Fibonacci number or operation.
    * 
    * Description: This function recursively traverses the Fibonacci sequence represented by the
    * given Node and prints it in a human-readable format. It handles different types
    * of operations (ADD, SUBTRACT, MULTIPLY, DIVIDE) and recursively calls itself
    * to print the left and right children of the current Node.
    * 
    * Return: None (void)
*/
void printFibonacci(Node* node) {
    if (node->type == CONSTANT) {
        printf("1");
    } else if (node->type == ADD) {
        printf("(");
        printFibonacci(node->left);
        printf(" + ");
        printFibonacci(node->right);
        printf(")");
    } else if (node->type == SUBTRACT) {
        printf("(");
        printFibonacci(node->left);
        printf(" - ");
        printFibonacci(node->right);
        printf(")");
    } else if (node->type == MULTIPLY) {
        printf("(");
        printFibonacci(node->left);
        printf(" * ");
        printFibonacci(node->right);
        printf(")");
    } else if (node->type == DIVIDE) {
        printf("(");
        printFibonacci(node->left);
        printf(" / ");
        printFibonacci(node->right);
        printf(")");
    }
}



int main() {
    int n = 3;  // Change this value to generate Fibonacci sequence up to a different number

    Node* fibonacciSequence = fibonacci(n);

    printf("Fibonacci sequence up to %d: ", n);
    printFibonacci(fibonacciSequence);
    printf("\n");

    // Clean up
    //freeFibonacci(fibonacciSequence);

    return 0;
}
