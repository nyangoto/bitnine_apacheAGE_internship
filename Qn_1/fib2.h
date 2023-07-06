#ifndef _FIB2_H
#define _FIB2_H

/* Library Inclusions */
#include <stdio.h>
#include <stdlib.h>


/* Struct definitions */

/**
    * TypeTag - Enumeration for types of Fibonacci operations.
    * Description: This enumeration defines the possible types of operations used in the
    * Fibonacci sequence. It includes CONSTANT, ADD, SUBTRACT, MULTIPLY, and DIVIDE.
    * These constants are used to represent different operations in the Fibonacci calculation.
*/
typedef enum TypeTag {
    CONSTANT,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} TypeTag;

/**
    * Node - Structure representing a node in the Fibonacci sequence.
    * @type: TypeTag representing the type of the node.
    * @left: Pointer to the left child node.
    * @right: Pointer to the right child node.
    * Description: This structure represents a node in the Fibonacci sequence. It has three members:
    * the type of the node (TypeTag), and pointers to the left and right child nodes.
    * The type determines whether the node represents a constant or an operation (ADD, SUBTRACT, MULTIPLY, DIVIDE).
*/
typedef struct Node
{
    TypeTag type;
    struct Node* left;
    struct Node* right;
} Node;

/* Function Prototypes */
Node* fibonacci(int n);
void printFibonacci(Node* node);

#endif /* _FIB2_H */