#### Variadic Functions Project

This repository contains the solutions to the tasks of the "Variadic Functions" project for the ALX Low-Level Programming course.
Table of Contents

    Description
    Learning Objectives
    Requirements
    Tasks

Description

The "Variadic Functions" project aims to familiarize you with variadic functions in C. Variadic functions are functions that can accept a variable number of arguments. In this project, you will learn how to use the stdarg.h header and the macros va_start, va_arg, and va_end to handle functions with a variable number of arguments. Additionally, you will learn about the use of the const type qualifier in C.

The project consists of four tasks, each focusing on different aspects of variadic functions. The tasks are as follows:

    Beauty is variable, ugliness is constant: Write a function that returns the sum of all its parameters. The function should be able to handle a variable number of arguments.

    To be is to be the value of a variable: Write a function that prints numbers, followed by a new line. The function should accept a variable number of integers as arguments and print them with a specified separator.

    One woman's constant is another woman's variable: Write a function that prints strings, followed by a new line. The function should accept a variable number of strings as arguments and print them with a specified separator. If a string is NULL, it should print "(nil)" instead.

    To be is a to be the value of a variable: Write a function that prints anything based on the given format. The function should accept a format string and a variable number of arguments. It should be able to handle characters (c), integers (i), floats (f), and strings (s). Any other character in the format should be ignored.

Learning Objectives

By completing this project, you are expected to achieve the following learning objectives:

    Understand variadic functions in C and their purpose.
    Learn how to use the stdarg.h header to handle functions with a variable number of arguments.
    Master the use of macros va_start, va_arg, and va_end.
    Understand the concept of the const type qualifier and its usage in C.

Requirements

    Allowed editors: vi, vim, emacs
    All files will be compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
    All files should end with a new line.
    A README.md file, at the root of the folder of the project, is mandatory.
    Code must adhere to the Betty style (checked using betty-style.pl and betty-doc.pl).
    No more than 5 functions per file.
    The only C standard library functions allowed are malloc, free, and exit. Functions like printf, puts, calloc, realloc, etc., are forbidden.
    Allowed macros: va_start, va_arg, va_end.
    The function _putchar is provided and can be used.
    The prototypes of all functions and the _putchar function should be included in the variadic_functions.h header file, which should be pushed to the repository.
    All header files should be include guarded to prevent double inclusion.

Tasks

The project contains the following tasks:

    Beauty is variable, ugliness is constant: Write a function sum_them_all that returns the sum of all its parameters. If no arguments are passed, the function should return 0.

    To be is to be the value of a variable: Write a function print_numbers that prints numbers, followed by a new line. The function should accept a variable number of integers as arguments and print them with a specified separator. If the separator is NULL, it should not be printed.

    One woman's constant is another woman's variable: Write a function print_strings that prints strings, followed by a new line. The function should accept a variable number of strings as arguments and print them with a specified separator. If a string is NULL, it should print "(nil)" instead.

    To be is a to be the value of a variable: Write a function print_all that prints anything based on the given format. The function should accept a format string and a variable number of arguments. It should be able to handle characters (c), integers (i), floats (f), and strings (s). Any other character in the format should be ignored.
