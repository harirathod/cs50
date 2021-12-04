#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//void sum(int i, int a, int b, int c)
//{
//int sum = i + a + b + c;
//printf("%d\n", sum);
//}

int main()
{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);

    int cents = round(change * 100);

    int i = 0;

    while (cents >= 25)
    {
        cents = cents - 25;
        i ++;
    }

    while (cents >= 10)
    {
        cents = cents - 10;
        i ++;
    }

    while (cents >= 05)
    {
        cents = cents - 05;
        i ++;
    }

    while (cents > 0)
    {
        cents = cents - 01;
        i ++;
    }
    //Print number of coins
    printf("%d\n", i);

    //sum(i, a, b, c);
}
