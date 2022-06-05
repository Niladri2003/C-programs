#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year to check wheather it Leap year or not: ");
    scanf("%d", &yr);
    if (yr % 400 == 0 || yr % 4 == 0)
        printf("Leap year");
    else
        printf("Not leap year");

    return 0;
}