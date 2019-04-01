#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int x;
    int num;

    printf("Enter the year:\n");
    num = get_int();

    if (num <= 0)
    {
        printf("Please enter a year greater than 0.\n");
        num = get_int();
    }

    if (num % 4 != 0)
    {
        printf("The year is not a leap year.\n");
        return 0;
    }
    else
    {
        if (num % 400 != 0 && num % 100 == 0)
        {
            printf("The year is not a leap year.\n");
        }
        else
        {
            printf("The year is a leap year!\n");
        }
    }

}