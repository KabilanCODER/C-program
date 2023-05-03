#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("post inc/dec\n");

    printf("a++=%d\n", a++);
    printf("b--=%d\n", b--);
    printf("c++=%f\n", c++);
    printf("d--=%f\n", d--);

    printf("pre inc/dec\n");
    printf("++a=%d\n", ++a);
    printf("--b=%d\n", --b);
    printf("++c=%f\n", ++c);
    printf("--d=%f\n", --d);
    return 0;
}