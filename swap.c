#include <stdio.h>
int swapNumber(int *a, int *b);
int main()
{
    int no1 = 10;
    int no21 = 20;
    swapNumber(&no1,&no21);

    printf("%d \n",no1);
    printf("%d \n",no21);
    return 0;
}

int swapNumber(int *a, int *b){
    int t = *a;
    *a = *b ;
    *b = t;
};