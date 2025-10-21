# Hash Tables Project

This project implements a hash table data structure in C.

## Data Structures

### hash_node_t
```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key (string)
 * @value: The value corresponding to the key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;
