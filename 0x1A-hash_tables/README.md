## Hash Tables in C

This project is an implementation of hash tables in C, designed to help you understand the fundamental concepts of hash tables and their operations. Hash tables are essential data structures used for efficient data storage and retrieval.

### Overview

Hash tables, also known as hash maps, are data structures that store key-value pairs. They provide quick access to values based on their associated keys. This project includes the following components:

    Hash Table Creation: A function that creates a new hash table of a specified size.

    Hash Function (djb2): A hash function implementation using the djb2 algorithm. This function calculates a unique hash value for a given string key.

    Key Indexing: A function that determines the index at which a key should be stored in the hash table based on its hash value.

    Adding Elements: A function to add key-value pairs to the hash table. In case of collisions, new nodes are added to the beginning of a linked list.

    Retrieving Values: A function to retrieve the value associated with a given key from the hash table.

    Printing the Hash Table: Functions to print the hash table and its key-value pairs in both forward and reverse order, using a sorted linked list.

    Deleting the Hash Table: A function to free the memory allocated for the hash table and its components.