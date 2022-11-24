#include <stdio.h>

int main()
{

    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j =3;j<10-i;j++)
    //     {
    //
    //         printf("%d ",j);
    //     }

    //     printf("\n");

    // }

    //    for (int i = 0; i < 5; i++)//i=0
    //    {

    //     for (int j = 0; j < 5-i; j++)
    //     {
    //         printf(" ");
    //     }

    //     for (int k = 0; k <=i; k++)
    //     {
    //         printf("* ");
    //     }

    //     printf("\n");

    //    }

    // for(int i=0;i<3;i++){//i=2

    //     for(int j=0;j<=3-i;j++){//j=0,j<=5
    //         printf(" ",j);
    //     }

    // for(int k=0; k<=i ;k++){
    //     printf("* ");
    // }

    //     printf("\n");
    // }

    // for(;;){
    //     printf("%d\n",i);

    // }

    // int i=1;

    // while(i--){ // i=0

    //    printf("hello\n");

    // }

    // int a;
    // printf("Enter your number: ");

    // scanf("%d", &a);

    // while (a != 0)
    // {
    //     printf("Hello Bangladesh\n");
    //     printf("Enter your number: ");
    //     scanf("%d", &a);
    // }

    // printf("The loop is breaked");

    int i = 1;

    // do{

    //     printf("Hello");

    // }while(0);

    int a = 10, row, col;

    for (row = a - 1; row >= 1; row--)
    {
        for (col = 3; col <= row; col++)
        {

            printf("%d ", col);
        }
        
        printf("\n");
    }

    // if (1)printf("Hello\n");

    return 0;
}
