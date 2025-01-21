#include <stdio.h>
int main() {
    signed char c = 127; // Maximum value for signed char
    c = c + 1; // Overflow occurs
    printf("Value of c: %c\n", c);
    return 0;
}

