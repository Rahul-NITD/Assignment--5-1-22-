#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    printf("Enter the number : ");
    int num;
    scanf("%d", &num);

    int i = 2;
    while (i <= (int)sqrt(num))
    {
        if (num % i == 0)
        {
            printf("The given number is not a prime number.\n");
            return 0;
        }
        i++;
    }
    printf("The given number is a prime number.\n");
}
