# Variadic Functions

This project contains C programs that demonstrate the use of variadic functions - functions that can accept a variable number of arguments.

## Files

### 0-sum_them_all.c
Function that returns the sum of all its parameters:
- Prototype: `int sum_them_all(const unsigned int n, ...)`
- Returns the sum of all parameters
- If `n == 0`, returns `0`

### Header File (variadic_functions.h)
Common header file containing all function prototypes.

## What are Variadic Functions?

Variadic functions are functions that can take a variable number of arguments. In C, they are implemented using the `stdarg.h` header which provides:

- `va_list` - type for iterating arguments
- `va_start` - starts iteration
- `va_arg` - retrieves next argument
- `va_end` - ends iteration

## Usage Example

```c
#include "variadic_functions.h"

int main(void)
{
    int sum;
    
    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);  /* Output: 1122 */
    
    sum = sum_them_all(4, 1, 2, 3, 4);
    printf("%d\n", sum);  /* Output: 10 */
    
    return (0);
}
