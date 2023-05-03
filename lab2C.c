#include <stdio.h>
#include <conio.h>

int main()
{
    int a, c;
    scanf("%d", &a);
    c = a;
    printf("c=%d\n", c);
    c += a;
    printf("c+=%d\n", c);
    c -= a;
    printf("c-=%d\n", c);
    c *= a;
    printf("c*=%d\n", c);
    c /= a;
    printf("c/=%d\n", c);
    c %= a;
    printf("c%=%d\n", c);
    return 0;
}