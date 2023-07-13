C - More malloc, free

This repository contains C programs that demonstrate the use of dynamic memory allocation in C using malloc, free, calloc, and realloc. These functions are used to allocate and deallocate memory at runtime, allowing flexible memory management.
Description

The repository includes the following programs:

    0-malloc_checked.c: This program demonstrates the use of malloc to allocate memory and checks if the allocation was successful. If malloc fails, it terminates the program with an exit status of 98.

    1-string_nconcat.c: This program concatenates two strings and returns a newly allocated memory block containing the concatenated string. It handles cases where the strings are NULL or when the number of characters to concatenate is greater than the length of the second string.

    2-calloc.c: This program demonstrates the use of calloc to allocate memory for an array and initializes the allocated memory with zeroes. It handles cases where the number of elements or the size of each element is 0.

    3-array_range.c: This program creates an array of integers with values ranging from min to max, inclusive. It returns a pointer to the newly created array. It handles cases where min is greater than max.

    100-realloc.c: This program demonstrates the use of realloc to reallocate memory for a previously allocated block. It copies the contents from the old block to the new block, up to the minimum of the old and new sizes. It handles cases where ptr is NULL, new_size is zero, or when the reallocation fails.

    101-mul.c: This program multiplies two positive numbers passed as command-line arguments and prints the result. It performs error handling for incorrect number of arguments and non-digit input.

The header file main.h contains the function prototypes for each program.
