#include<stdio.h>
int main(void)
{
    int a=10,b=5,c;
    // Assignment Operators
    printf("Assignment Operators:\n");
    c = a;
    c += b;
    printf("c += b: %d\n", c);
    c -= b;
    printf("c -= b: %d\n", c);
    c *= b;
    printf("c *= b: %d\n", c);
    c /= b;
    printf("c /= b: %d\n", c);
    c %= b;
    printf("c %%= b: %d\n\n", c);
}