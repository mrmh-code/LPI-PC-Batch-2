#include <stdio.h>

void display();

void addTwonumber(int num1, int num2);





void addThreeNum(int num1, int num2, int num3)
{
    printf("The sum is = %d\n", num1 + num2 + num3);
}

void multiplyThreeNum(int num1, int num2, int num3)
{
    printf("The Multiplication is = %d\n", num1 * num2 * num3);
}

int sumTwoNum(int a, int b)
{

    printf("The sum is = %d", a + b);

    return a+b;
}


float areaOfTriangle(int length,int height){
    float area = 0.5 * length*height;

    return area;

}




int main()
{

    // addTwonumber(10,20);

    // addTwonumber(30,50);

    // addThreeNum(10,20,30);

    // multiplyThreeNum(10, 10, 10);

    // printf("The sum is = %d",sumTwoNum(50,60));

    // int sum = sumTwoNum(100, 200);

    //  int sum = sumTwoNum();

    // printf("The sum is %d", sum);

    // sumTwoNum(250,250);


    // display();


    float area = areaOfTriangle(10,25);


    printf("The area is = %.2f",area);



    return 0;
}



void display()
{
    printf("My name shafi\n");
    printf("Student of department of Computer\n");
    printf("Age 19\n");
}


void addTwonumber(int num1, int num2)
{
    printf("The sum is = %d\n", num1 + num2);
}
