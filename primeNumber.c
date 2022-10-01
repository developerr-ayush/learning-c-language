#include <stdio.h>
int main()
{
    // getting data from user 
    int n ;
    printf("Enter the number to check prime:");
    scanf("%d", &n);
    
    //  11
    
    int flag = 0;
        //                 5
    for (int i = 2; i <= (n/2); i++)
    {
     
        printf("%d \n", n % i);
        if (n % i == 0)
        {

            printf("Number is not prime");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Number is prime");
    return 0;
}