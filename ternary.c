#include<stdio.h>
int main(void)
{
    int a=10, b=5;
    // Conditional (Ternary) Operator
    printf("Conditional Operator:\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b: %d\n\n", max);
}