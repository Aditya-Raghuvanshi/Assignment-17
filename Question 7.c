/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/
#include<stdio.h>

int main()
{
    char a[20];
    int i,alpha=0,digit=0,special=0;
    printf("enter the string ");
    fgets(a,20,stdin);
    for(i=0;a[i]!=0;i++)
    {
        if(a[i]>=65&&a[i]<=91||a[i]>=97&&a[i]<=122)
              alpha++;
        else if(a[i]>=48&&a[i]<=57)
               digit++;
        else
            special++;
    }
    printf("total no. of alphabets are : %d\n",alpha);
    printf("total no. of digits are : %d\n",digit);
    printf("total no. of special characters are : %d\n",special);
    return 0;
}
