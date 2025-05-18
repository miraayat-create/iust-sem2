#include<stdio.h>
int main()
{
    int a=10,b=5;
    // Bitwise Operators
    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b); // AND
    printf("a | b = %d\n", a | b); // OR
    printf("a ^ b = %d\n", a ^ b); // XOR
    printf("~a = %d\n", ~a);       // complement
    printf("a << 1 = %d\n", a << 1); //Left Shift
    printf("a >> 1 = %d\n\n", a >> 1); //Right Shift
}