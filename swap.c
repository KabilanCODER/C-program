#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}