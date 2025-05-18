#include<stdio.h>
int main(void)
{
    int a =10 , b=5;
    //sizeof operator
    printf("sizeof operator:\n");
    printf("Size of int: %d bytes\n",sizeof(int));
    printf("size of float: %f bytes\n",sizeof(float));
    printf("size of char: %c bytes\n",sizeof(char));
    printf("size of int: %d bytes\n\n",sizeof('a'));
}