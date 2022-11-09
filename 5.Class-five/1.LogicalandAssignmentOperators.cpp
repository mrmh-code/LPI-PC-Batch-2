#include <stdio.h>

int main()
{
    // Logical Operators
    // logical AND - &&
    // logical OR- ||
    // logical NOT - !

    //----------------------logical AND  &&-------------------------------------------

    //   int minimumAge=20;

    //   int hridoy=22;
    //   int ajoy=20;

    // Hirody && Ajoy
    // 0    &&    1 =false
    //  1   &&   0 =false
    //  0   &&  0 =false
    //  1   &&  1 =true

    // printf("case 1: %d\n",(minimumAge<=hridoy && minimumAge<=ajoy));
    // please try other case

    //----------------------logical OR  ||-------------------------------------------
    int minimumAge = 20;

    int hrdioy = 20, ajoy = 19;

    // example and theory
    // hrdioy  || ajoy
    //  1   ||  0 =true;
    //  0   ||  0 =false;
    //   0 ||  1 =true;
    //  1 ||  1 =true

    //      printf("%d", (minimumAge<=hrdioy || minimumAge<=ajoy));
    // vowel A || E ||  I || O || U

    // vowel checker
    //  char ch;
    //  printf("check  vowel: \n");
    //  scanf("%c",&ch);
    //  printf("%d",(ch=='A' || ch=='E' || ch=='I' || ch=='O'|| ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'));

    //----------------------logical NOT  ! -------------------------------------------
    // 0-false;
    // 1-true
    // 0 zero chara baki sob kichu true
    //! 0 dile seta true karon zero false ! dewar jonno true. bad baki sob number true ago ! use korle seta false.
    //      if(-0){
    //       printf("test ...\n");
    //      }

    // Assignment Operators

    // Assignment =
    //  Increment and Assignment ++ (post & pre fix)
    //  Decrement and Assignment –
    //  Add and assign +=
    //  Subtract and assign -=
    //  Multiply and assign *=
    //  Divide and assign /=
    //  Modulus and assign %=

    //----------------------Assignment = -------------------------------------------
    // int a = 50;

    //----------------------Increment and Assignment ++ -------------------------------------------
    // int a=10;
    // a=a+1;
    //    a++; //most use way
    // printf("%d\n",a);

    //----------------------Increment postfix x++ -------------------------------------------
    // increment postFix
    // int x=10;
    //   printf("postfix : %d \n", x++);//10
    // printf("after postfix: %d\n", x);//11

    //----------------------Increment prefix ++x -------------------------------------------
    // printf("Prefix : %d\n", ++x);//12
    // printf("after prefix : %d\n", x);//12

    //----------------------Decrement and Assignment -- -------------------------------------------
    // int a=10;
    // a=a-1;
    //    a--; //most use way
    // printf("%d\n",a);

    //----------------------Decrement postfix x-- -------------------------------------------
    // int x=10;
    //   printf("postfix : %d \n", x--);
    // printf("after postfix : %d\n", x);

    //----------------------Decrement prefix --a  -------------------------------------------
    // int x=10;
    //   printf("prefix : %d \n", --x);
    // printf("after prefix : %d\n", x);

    //----------------------Add and assign += -------------------------------------------

    //   int a=5;
    //   // a=a+100;
    //     a+=100;//most use way;
    //   printf("%d\n",a);

    //----------------------Subtract and assign -= -------------------------------------------
    //    int a=100;
    //   // a=a-10;
    //     a-=100;//most use way;
    //   printf("%d\n",a);

    //----------------------Multiply and assign *= -------------------------------------------

    //    int a=100;
    //   // a=a*10;
    //     a*=10;//most use way;
    //   printf("%d\n",a);

    //----------------------Divide and assign /= -------------------------------------------

    //    int a=100;
    //   // a=a/10;
    //     a/=10;//most use way;
    //   printf("%d\n",a);

    //---------------------- Modulus and assign %= -------------------------------------------
    //     int a=100;
    //   // a=a%10;
    //     a%=10;//most use way;
    //   printf("%d\n",a);
}