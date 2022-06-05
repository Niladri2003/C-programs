#include <stdio.h>
void main()
{
    int num;
    printf("Enter any number to check it Even or Odd:\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("It is Even");
    else
        printf("it is Odd");
}