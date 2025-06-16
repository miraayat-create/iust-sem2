#include <stdio.h>
#include <string.h>

int main (void)
{
    char s1[] = "Hello";
    char s2[50];
    printf("Enter a string: ");
    fgets(s2,sizeof(s2),stdin);
    // to coy s1 in s2
    strcpy(s1,s2);
    printf("%s\n",s1);
}