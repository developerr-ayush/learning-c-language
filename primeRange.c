#include <stdio.h>

int main() {
    int a = 2,b = 50;
    //       2      2<50    2++ 
    for (int i = a; i < b; i++)
    {
        int flag=0;
        //       2      2 < 2   
        for (int j = 2; j < i/2; j++)
        {
            /* code */
            if(j % a==0){
                printf("not a prime number %d \n", i );
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("a prime number %d \n", i );

        }
        /* code */
    }
    
    return 0;
}