#include <stdio.h>

int main()
{
    // getting values from user 
    int a;
    int b;
    printf("Enter First Side of Rectangle");
    scanf("%d",&a);
    printf("Enter Second Side of Rectangle");
    scanf("%d",&b);

    // printing perimeter 
    printf("Perimeter of Rectangle is %d", 2*(a+b));

    return 0;
}
