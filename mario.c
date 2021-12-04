#include <cs50.h>
#include <stdio.h>

int main()
{
    //Prompt for a pyramid height.
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 1; i <= height; i ++)
    {
        //Add the decreasing number of spaces in front of the bricks.
        for (int j = height - i; j >= 1; j--)
        {
            printf(" ");
        }
        //Add the increasing number of bricks.
        for (int n = 1; n <= i; n ++)
        {
            printf("#");
        }
        //Add the left aligned pyramid.
        printf("  ");

        for (int k = 1; k <= i; k ++)
        {
            printf("#");
        }

        printf("\n");

    }

}
