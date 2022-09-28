#include <stdio.h>
int power(int a, int b);

int main()
{
    printf("%d",power(2,4));
    return 0;
}

int power(int a, int b){
    int x = a;
    for (int i = 0; i < b; i++)
    {
         x *= a;
        /* code */
    }
    return x;    
};
