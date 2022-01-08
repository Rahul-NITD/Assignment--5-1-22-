#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter 3 numbers : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max;

    if ( a > b && a > c )
        max = a;
    else if ( b > a && b > c )
        max = b;
    else if ( c > a && c > b )
        max = c;
    printf("The largest number is %d.\n", max);
}
