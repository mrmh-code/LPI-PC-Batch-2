#include <stdio.h>
#include <string.h>

int main()
{

    // int arr[5] = {12, 13, 14, 15, 16};

    // float fl[3] = {12.34, 23.67, 112.90};

    // // printf("%d",arr[1]);

    // int a = 12;

    // int b = arr[4];

    // char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};

    // char name[5] = "Shafi";

    // printf("%c",name[2]);

    char str[30];

    // scanf("%s",&str);

    // gets(str);

    // printf("The string is = %s", str);


    // char str1[]="Bangladesh";

    // int i=0;

    // while(str1[i] != '\0'){
    //     printf("%c",str1[i]);
    //     i++;
    // }


    char nation[]="Bangladeshaljadljs hello";

    // int sz = strlen(nation);



    // printf("%d\n",sz);

    // char source[]="Bangladesh";

    // char target[5];

    // strcpy(target,source);


    // printf("%s",target);


    char st[]="Bangladesh";

    // strrev(st);

    // printf("%s",st);


    char c[]="robiul hridoy";

//    strupr(c);

    // printf("%s",c);


    char g[]="BANGLADESH";

 //   strlwr(g);

//    printf("%s",g);


    // char a[]="Country ";
    // char b[]="Bangladesh";

    // strcat(a,b);

    // printf("%s",a);


        int num[100], n,i;

    printf("Enter numbe ");
    scanf("%d",&n);

    for(i=0; i<n; i++)

    {
        scanf("%d",&num[i]);
    }

    int max=num[0];// num[0]=1

    for(i=1; i<n; i++)
    {
        if(max=num[i])
        max=num[i];
    }
    printf("Maximum Number is %d",num[i]);



    return 0;
}