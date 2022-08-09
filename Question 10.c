//10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,temp=1,L;
    printf("enter the size of the array ");
    scanf("%d",&n);
    getchar();
    char a[n];
    printf("enter the string ");
    fgets(a,n,stdin);
    L=strlen(a);
    for(i=0;i<=L-2;i++)
    {
        if(a[i]!=0)
        {
            temp=1;
            for(j=i+1;j<=L-2;j++)
            {
               if(a[i]==a[j])
               {
                 temp++;
                 a[j]=0;
               }
            }
             printf("frequency of %c is %d \n",a[i],temp);
        }

    }
    return 0;
}
