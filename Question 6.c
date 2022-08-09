//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],b[20];
    int i,l,j;
    printf("enter the string ");
    fgets(a,20,stdin);
    l=strlen(a);       //string length l also includes the null character.
    printf("Reversed string is : ");
    for(i=l-2,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
        printf("%c",b[j]);
    }
    return 0;
}
