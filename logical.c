#include<stdio.h>
int main(void)
{
    int a = 12, b=6;
    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0));
    printf("!(a == b): %d\n\n", !(a == b));
}