#include <stdio.h>
#include <string.h>

int main (void)
{
    char s[100]; int i = 0;
    printf("enter a string:");
    fgets(s,sizeof(s),stdin);
    s[strcspn(s,"\n")] = 0;
    while (s[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}