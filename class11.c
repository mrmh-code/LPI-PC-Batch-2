#include <stdio.h>

int main()
{

    // question1

    // int n;
    // printf("Enter your number:");
    // scanf("%d",&n);
    // // n=432

    // while(n>0){
    //     int r = n%10; //r = 4
    //     printf("%d",r);
    //     n = n/10; // n =
    // }

    // int a,temp,r,sum =0;
    // printf("Inter the number:");
    // scanf("%d",&a);

    // temp = a;
    // while(temp!=0)// temp =4
    // {
    // r=temp % 10;// r=4
    // sum =sum * 10 + r;// sum=234
    // temp =temp / 10;// temp=0

    // }

    // printf("Reverse of number=%d\n",sum);

    // Question 2

    // int n;
    // printf("Enter your number: ");
    // scanf("%d", &n);

    // for(int i=1;i<=n;i++){
    //     if(n%i==0){ // n=12,i=6
    //         printf("%d ",i);
    //     }
    // }

    int n = 12;
    int m = 23;

    // int sum = n + m;

    // printf("%d",sum);

    // int arr[10] = {23, 18, 19, 23, 22, 20, 12, 13, 23, 22};

    // for(int i=0;i<10;i++){ //i=10
    //     printf("%d\n",arr[i]);// arr[9]=22
    // }

    // printf("%d",arr[9]);

    // int ans = arr[0+1] + arr[1];

    // printf("%d",ans);

    float hello[5]={12.4,23.5,5.3,12.45,6.43};

    // printf("%f",hello[2]);





    int brr[10] = {23, 18, 19, 23, 22, 20, 12, 13, 23, 22};//9

    // printf("%d",brr[20]);

    int sum = 0;

    for(int i=0;i<10;i++){
        sum= sum + brr[i];
    }

    // printf("%d",sum);

    int a;

    

    int array[6];

    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }


    for(int i=0;i<5;i++){
        printf("%d\n",array[i]);
    }



    return 0;
}
