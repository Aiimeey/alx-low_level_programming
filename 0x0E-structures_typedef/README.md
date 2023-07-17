#### C - Structures, typedef

This repository contains solutions to the tasks related to structures and typedef in the C programming language. Structures provide a way to group related data elements together, while typedef allows us to create new names for existing types.
Objectives

The main objectives of this project are to understand and demonstrate the following concepts:

    Creating and using structures to organize data in C.
    Defining custom types using typedef to enhance code readability and maintainability.

Project Structure

The project is organized into multiple files, each focusing on a specific task. The tasks and their corresponding files are as follows:

    Poppy: dog.h
        Definition of a new structure type struct dog with members name, age, and owner.

    A dog is the only thing on earth that loves you more than you love yourself: 1-init_dog.c
        Initialization of a variable of type struct dog using the init_dog function.

    Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read: 2-print_dog.c
        Printing the details of a dog using the print_dog function.

    A door is what a dog is perpetually on the wrong side of: dog.h
        Defining a new type dog_t as a new name for the type struct dog.

    How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg: 4-new_dog.c, 5-free_dog.c
        Creating a new dog using the new_dog function and freeing the memory allocated for a dog using the free_dog function.
