#include <stdio.h>
#include <math.h>
#include <conio.h>

void main()
{
    float m1, m2, m3, m4, m5, m6, total;
    float avg;
    printf("Enter your language mark");
    scanf("%f", &m1);
    printf("Enter your english mark");
    scanf("%f", &m2);
    printf("Enter your maths mark");
    scanf("%f", &m3);
    printf("Enter your biology mark");
    scanf("%f", &m4);
    printf("Enter your chemistry mark");
    scanf("%f", &m5);
    printf("Enter your physics mark");
    scanf("%f", &m6);
    total = m1 + m2 + m3 + m4 + m5 + m6;
    avg = (total / 6);
    printf("\n\nthe total is %.2f", total);
    printf("\n\nthe avg is %.2f", avg);
}