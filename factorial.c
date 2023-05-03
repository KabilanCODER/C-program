#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,fact;
    printf("enter the number for which you need factorial");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of the given number is %d",fact);
}