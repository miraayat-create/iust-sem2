//Find factorial of a number entered by the user.

#include <stdio.h>

int main(void)
{

    int i,n,fac;

    printf("Enter n\n");
    scanf("%d",&n);

    fac= 1 ;
    for (i=n; i>=1; i--)
    {
        fac=fac*i;
    }

    printf("%d",fac);

    return 0;
}