#include <stdio.h>
#include <math.h>

int main()
{
    int m[30], i, j, k, a, b, c, n, x = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &m[i]);
    {
        for (i = 0; i < n; i++)
        {
            a = m[i];
            for (j = 0; j < n; j++)
            {
                b = m[j];
                for (k = 0; k < n; k++)
                {
                    c = m[k];
                    if (((a * a) == (b * b) + (c * c)) || ((b * b) == (a * a) + (c * c)) || ((c * c) == (a * a) + (b * b)))
                    {
                        x = 1;
                        printf("(%d,%d,%d)", a, b, c);
                        break;
                    }
                }
            }
        }
    }
    if (x == 1)
        printf("true");
    else
        printf("false");
    printf("%d", x);
    return 0;
}