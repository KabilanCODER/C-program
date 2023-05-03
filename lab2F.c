#include <stdio.h>
#include <conio.h>

int main()
{
    int n, rev = 0, dig;
    printf("enter the no for which the digits are to be reversed:");
    scanf("%d", &n);

    while (n > 0)
    {
        dig = n % 10;
        rev = rev * 10 + dig;
        n = n / 10;
    }
    printf("The reversed number is %d", rev);

    return 0;
}