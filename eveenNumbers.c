#include <stdio.h>

int main()
{
    int number = 2;
    do
    {
        if (number % 2 == 0)
        {

            printf("%d \n", number);
        }

        number++;
        /* code */
    } while (number <= 100);

    return 0;
}