#include <stdio.h>
#include <string.h>

int main(void)
{
        char s1[] = "Hello ";
    char s2[50];
    printf("Enter you name: ");
    fgets(s2,sizeof(s2),stdin);

    // to concatenate strings
    strcat(s1,s2);
    printf("%s",s1);
}