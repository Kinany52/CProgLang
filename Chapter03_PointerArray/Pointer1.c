#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    // Output the memory address without casting to (void*)
    printf("Memory address of x: %p\n", p); // Prints the address of x.

    // Output the value of x without dereferencing the pointer
    // Possinle to print the memory address directly without casting to (void*) in most cases.
    // BUT not recommended!

    // While most compilers allow you to pass any pointer type to %
    // p without casting, casting to(void *) ensures that the pointer is correctly interpreted
    // as a generic pointer, which is what % p expects, according to C standard.

    return 0;
}
