//Write a program to convert a given string into lowercase
#include<stdio.h>

int main()
{
    char a[20];
    int i;
    printf("enter the string ");
    fgets(a,20,stdin);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]>=65&&a[i]<=91)
        {
            a[i]=a[i]+32;
        }
        printf("%c",a[i]);

    }

}
