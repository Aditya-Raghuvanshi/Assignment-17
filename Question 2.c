//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>

int main()
{
    char a[10]={"institute"},x;
    int i,count=0;
    printf("enter the character of which you want to count the occurrence ");
    scanf("%c",&x);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==x)
        {
            count++;
        }
    }
    printf("%c occurs %d times ",x,count);
    return 0;
}
