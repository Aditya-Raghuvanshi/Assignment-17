//Write a program in C to copy one string to another string.
#include<stdio.h>

int main()
{
    char a[20],b[20];
    int i;
    printf("enter the string ");
    fgets(a,20,stdin);
    printf("copied string b is : ");
    for(i=0;a[i]!='\0';i++)
    {
        b[i]=a[i];
        printf("%c",b[i]);
    }

    return 0;
}
