// Program-1. Odd-Even using if-else
#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter your number : ");
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
}
