#include <stdio.h>

int main()
{
    int a = 2;
    int b = 50;
    int flag = 0;
    for (int i = a; i < b; i++)
    {
        flag = 0;
        for (int j = 2; j <= i / 2; j++)
        {
            /* code */
            if (i % j == 0)
            {
                printf("not a prime number %d \n", i);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("a prime number %d \n", i);
        }
        /* code */
    }

    return 0;
}