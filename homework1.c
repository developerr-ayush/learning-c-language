#include <stdio.h>

int main()
{
    // finding perimeter of rectangle
    printf("Enter Side 1 of triangle : ");
    int side1;
    int side2;
    scanf("%d", &side1);
    printf("Enter Side 2 of triangle : ");
    scanf("%d", &side2);
    printf("perimeter of rectangle is %d \n", side1 + side1 + side2 + side2);

    // finding cube of object
    printf("Now Enter length of cube : ");
    int cube;
    scanf("%d", &cube);
    printf("cube of %d is %d", cube, cube * cube * cube);
    return 0;
}