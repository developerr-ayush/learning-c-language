#include <stdio.h>
int main()
{
    char a= 'a';
    // scanf("%d", &a);

    // if(a > 17){
    //     printf("You Can Drive A car and You can vote in election");
    // }else{

    //     printf("You Cannot Drive A car and You cannot vote in election");
    // };
    // if(a < 13){

    //     printf("child");
    // }else if (a<20){

    //     printf("Teenager");
    // }else{

    //     printf("adult");
    // }
    // (a < 18) ? printf("below 18") : printf("above 18");
    switch (a)
    {
    case 'l':
        printf("loggedin");
        /* code */
        break;
    default:
        printf("not loggedin");
        break;
    }
    return 0;
}