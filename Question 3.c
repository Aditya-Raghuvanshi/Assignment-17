//Write a program to count vowels in a given string
#include<stdio.h>

int main()
{
    char a[25];
    int i,count=0;
    printf("enter the string ");
    fgets(a,20,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count++;
        }
    }
    printf("number of vowels in given string is %d ",count);
    return 0;
}
