#include <stdio.h>
int main()
{
    float len, bre, rad, peri, pi = 3.14;
    printf("Enter lenght & breadth of rectangle:");
    scanf("%f%f", &len, &bre);
    printf("Enter Radius of circle:");
    scanf("%f", &rad);
    peri = 2 * (len + bre);
    printf("\n\nPerimeter of Rectangle is= %.2f\n", peri);
    printf("Area of Rectangle is= %.2f\n", len * bre);
    printf("Circumference of circle= %.2f\n", 2 * pi * rad);
    printf("area of circle= %.2f\n", (pi * rad * rad));

    return 0;
}