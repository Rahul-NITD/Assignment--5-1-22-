#include <stdio.h>
#include <conio.h>

int main()
{
    printf("Enter the angles  of the triangle : ");
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if ( a+b+c == 180 )
    {
        printf("The triangle is possible.\n");
        return 0;
    }
    printf("Triangle is not possible since sum of angles does not equate to 180.\n");
}
