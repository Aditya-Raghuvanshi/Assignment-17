//Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>

int main()
{
    char a[20]={"aditya"};
    int i;
    for(i=0;a[i]!=0;i++);
    printf("Given string is of length %d ",i);
    return 0;
}
