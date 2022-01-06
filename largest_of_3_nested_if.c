#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter the three numbers : ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max;

    if (a >= b)
    {
        if (a >= c)
        {
            max = a;
        }
        if (a < c)
        {
            max = c;
        }
    }
    if (a < b)
    {
        if (b >= c)
        {
            max = b;
        }
        if (b < c)
        {
            max = c;
        }
    }
    printf("The largest number is %d.\n", max);
}
