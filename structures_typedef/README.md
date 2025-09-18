# Structures and Typedef

This project contains C programs that demonstrate the use of structures and type definitions.

## Files

### dog.h
Header file containing the definition of a `struct dog` with the following members:
- `char *name`: Name of the dog
- `float age`: Age of the dog  
- `char *owner`: Owner of the dog

## Usage

To use the `struct dog` in your code:

```c
#include "dog.h"

int main(void)
{
    struct dog my_dog;
    
    my_dog.name = "Buddy";
    my_dog.age = 3.5;
    my_dog.owner = "John";
    
    return (0);
}
