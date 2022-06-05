#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three number to find maximum one:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Maximum among three is %d", a);
        }
        else
        {
            printf("Maximum among three is %d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Maximum among three is %d", b);
        }
        else
        {
            printf("Maximum among three is %d", c);
        }
    }
}