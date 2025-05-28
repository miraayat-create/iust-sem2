#include  <stdio.h>
int main (void)
{
    int x,y,z;
    printf("enter the two numbers to swap:\n");
    scanf("%d %d", &x,&y);

    z=x;
    x=y;
    y=z;

    printf("the numbers swappd are \n %d\n %d\n",x,y);
    return 0;
}