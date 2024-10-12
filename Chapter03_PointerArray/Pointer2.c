#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    // Output the memory address with explicit cast to (void*)
    printf("Memory address of x: %p\n",
           (void *)p); // Cast to void* before printing // THIS IS RECOMMENDED BY THE C STANDARD :)
    // Some older or more strict compilers might warn if you pass a pointer type other than void* to %p.
    // Casting to (void*) as done here makes the code more portable across different compilers,
    // and ensures compliance with the C standard.

    // Plus, casting to (void*) can make it explicit that you’re treating the pointer as a generic memory address (void*),
    // rather than a typed pointer (e.g., int*, float*).

    return 0; //Program terminated successfully. Some older compilers might allow void or other return types.
    // It breaks the standard C convention, so it's not recommended. Most modern compilers (especially those
    // adhering to newer C standards) will issue warnings or errors if void main() is used.
    // Operating systems expect an integer return value from main to indicate the exit status of the program.
}
