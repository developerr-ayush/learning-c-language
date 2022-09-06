#include <stdio.h>
#include <math.h>
// from internet
// C program to check whether the given number is Armstrong or not

int main()
{
    int number, temp, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    // scanf("%d", &number);
    number = 153;
    temp = number;

    // Finding the number of digits

    while (temp != 0)
    {
        temp /= 10;
        //153-> 15.3
        //15.3-> 15
        //1.5-> 1
        //0.1-> 0

        ++n;
        //1+n
    }
    // n = 3
    temp = number;
    // Checking if the number is armstrong

    while (temp != 0)
    {
        remainder = temp % 10;
        // 153 -> 3
        result += pow(remainder, n);
        // 3*3*3
        temp /= 10;
        // 15
        printf("%d \n", temp);
    }

    if (result == number)
        printf("% d is an Armstrong number\n", number);
    else
        printf("% d is not an Armstrong number\n", number);

    return 0;
}
