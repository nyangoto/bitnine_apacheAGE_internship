# Question 2

Implement the following piecewise recurrence relation in the 3 different ways.
▪ Explain the differences (advantages, disadvantages) between the 3.
▪ Must be written in C
The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2.
Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to
write the function(s).

## Implementation Details

The program provides three different implementations to solve the problem above:

[**Recursive Approach:**](./recursive_approach.c)

- **Advantages:** Simple and straightforward implementation.

- **Disadvantages:** Inefficient for large values of n due to repeated recursive calls, high stack usage for deep recursion levels which can result in stack overflow issues, time complexity is exponential - O(2^n)

[**Dynamic Programming Approach:**](./dynamic_approach.c)

- **Advantages:** offers a time complexity of O(n), meaning that the computation time grows linearly with the input size. It only needs to calculate each Fibonacci-like term once, resulting in efficient performance.

- **Disadvantages:** Requires additional space to store the dynamic programming table, extra overhead for initialization and maintenance.

[**Iterative Approach:**](./iterative_approach.c)

- **Advantages:** Efficient and space-optimized i.e approximately linear time complexity - O(n), simple implementation.
- **Disadvantages:** Limited to calculating a single value of F(n).

## Usage

The program can be compiled and executed using a C compiler. The main function provides an example usage for each of the three approaches.

To compile and run the program, follow these steps:

1. Save the C code in a file, e.g., `fibonacci_sequence.c`.
2. Open a terminal or command prompt and navigate to the directory containing the code file.
3. Use a C compiler to compile the code. For example:

   ```bash
   gcc -o fibonacci_sequence fibonacci_sequence.c
   ```

4. Run the compiled program. For example:

   ```bash
   ./fibonacci_sequence
   ```

This will execute the program and demonstrate the usage of the three different approaches to calculate the Fibonacci-like sequence based on the given recurrence relation.
