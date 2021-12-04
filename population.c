#include <cs50.h>
#include <stdio.h>

int main()
{
    //Prompt for start size
    int a;
    do
    {
        a = get_int("Start size: ");
    }
    while (a < 9);

    //Prompt for end size
    int e;
    do
    {
        e = get_int("End Size: ");
    }
    while (e < a);
    //It's the same RATE every year, not the same amount increase.

    //Number of years until we reach end size.
    int n = 0;
    //Assign i as a, condition that i is less than e, update the variable every cycle.
    for (int i = a; i < e; i = i + (i / 3) - (i / 4))
    {
        //Count the number of years (n)
        n ++;
    }
    printf("Years: %i\n", n);
}
