#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf(" %d + %d = %d\n", a, b, a + b);
    printf(" %d - %d = %d\n", a, b, a - b);
    printf(" %d * %d = %d\n", a, b, a * b);
    printf(" %d / %d = %d\n", a, b, a / b);
    printf(" %d %c %d = %d\n", a, 37, b, a % b);

    return 0;
}