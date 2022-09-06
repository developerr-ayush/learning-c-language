#include <stdio.h>
int main() {
    int age;
    scanf("%d", &age);
    const int newAge = 22;
    float pi = 3.14;
    char star = '*';

    printf("%d \n",newAge);
    printf("age is %d \npi is %f \nchar is %c ",age, pi, star);
   
    return 0;
}