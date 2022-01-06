#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter your number : ");
    int num;
    scanf("%d", &num);

    printf((num % 2 == 0) ? "The number is even.\n" : "The number is odd.\n");
}
