#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    int target;
    printf("Enter any three value");
    scanf("%d%d%d", &a, &b, &c);
    target = a + b + c;
    printf("the addition of three number is %d", target);
}