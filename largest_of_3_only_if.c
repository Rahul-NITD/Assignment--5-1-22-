#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter the three numbers : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max;

    if ( a > b && a > c )
        max = a;
    if ( b > a && b > c )
        max = b;
    if ( c > a && c > b )
        max = c;
    printf("The largest number is %d.\n", max);
}
