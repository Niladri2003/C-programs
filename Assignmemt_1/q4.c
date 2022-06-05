#include <stdio.h>
void main()
{
    int a, b, temp = 0;
    printf("Enter two numbers to swap:");
    scanf("%d%d", &a, &b);
    printf("-----Before Swap-------\n A=%d & B=%d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("-----After  Swap-------\n A=%d & B=%d\n", a, b);
    b = a + b; // a=10 b=20  b=30
    a = b - a; // a=30-10=20
    b = b - a;
    printf("-----Swaping without 3rd variable-------\n A=%d & B=%d\n", a, b);
}