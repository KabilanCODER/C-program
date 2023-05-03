#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    float a, b, c;
    float s, area;
    printf("enter size of each sides of triangle");
    scanf("%f%f%f", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area of triangle is: %.3f", area);
}