#include <stdio.h>

int main() {
    printf("Enter Number: ");
    int number ;
    scanf("%d",&number);
    for (int i = 1; i <= 10; i++)
    {
        /* code */
        printf("%d x %d =  %d \n",number,i, number * i);
    }
    
    return 0;
}