#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, i, result, n;
    printf("enter the no of terms");
    scanf("%d", &n);
    a = 0;
    b = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        result = a + b;
        a = b;
        b = result;
    }
}