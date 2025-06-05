#include<stdio.h>
#include<string.h>

// finding the length of the string using string library
int main(void)
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s",name);

    int size = strlen(name);
    printf("%d",size);
}