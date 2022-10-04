#include <stdio.h>

int main()
{
    int a = 10;
    int *b = &a;
    int **c = &b;
    printf("value of a %d \n",a);
    printf("address of a %d \n",&a);
    printf("address of b %d \n",&b);
    printf("value of b %d \n",b);
    printf("ponter of b %d \n",*b);
    printf("ponter of c %d \n",**c);
    

    return 0;
}


//  2000      2001     2002
//   1        2000       
//   a         b