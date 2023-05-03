#include <stdio.h>
#include <math.h>

void main()
{
    float side;
    float area;
    printf("Enter size of cube");
    scanf("%f", &side);
    area = 6 * side * side;
    printf("Area of cube is %.3f", area);
}
