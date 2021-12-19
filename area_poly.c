#include <stdio.h>
float circle(float r)
{
    return 3.14 * r * r;
}
float rectangle(float l, float b)
{
    return l * b;
}
float square(float a)
{
    return a * a;
}
float triangle(float h, float ba)
{
    return 0.5 * h * ba;
}
int main()
{
    float r, l, b, a, h, ba;
    printf("Enter the radius of the CIRCLE = ");
    scanf("%f", &r);
    printf("Enter the length and breadth of the RECTANGLE = \n");
    scanf("%f%f", &l, &b);
    printf("Enter the side of the SQUARE = ");
    scanf("%f", &a);
    printf("Enter the height and base of the TRIANGLE = ");
    scanf("%f%f", &h, &ba);
    printf("\nAREA OF :- \n");
    printf("Circle = %f\n", circle(r));
    printf("Rectangle = %f\n", rectangle(l, b));
    printf("Square = %f\n", square(a));
    printf("Triangle = %f\n", triangle(h, ba));
    return 0;
}