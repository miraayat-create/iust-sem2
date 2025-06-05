#include<stdio.h>
#include<string.h>

// changing lowercase letters to uppercase without using ctype library
int main(void)
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s",name);

    for(int i = 0, n = strlen(name); i<n; i++)
    {
        if(name[i] >= 'a' && name[i] <= 'z')
        {
            // to change to uppercase
            printf("%c",name[i]-32);
        }
        else
        {
            printf("%c",name[i]);
        }
    }

}