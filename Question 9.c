//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    int i,l,j;
    printf("enter the string ");
    fgets(a,20,stdin);
    l=strlen(a);
    for(i=3;i<=l;i++)
    {
        for(j=0;j<=l-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array in ascending oder is ");
    for(i=0;a[i]!=0;i++)
        printf("%c",a[i]);
    return 0;
}
