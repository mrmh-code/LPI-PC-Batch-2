#include <stdio.h>

int main()
{

    // nested for loop

    for (int row = 1; row <= 5; row++) //row = 2
    {

        for (int col = 1; col <= row; col++)// col <= 2
        {
            printf("* ");
        }

        printf("\n");

    }



    return 0;
}
