#include <stdio.h>
int main() {
    // for (int i = 0; i < 10; i++){
    //     printf("Hello World \n");
    // }
    // // printing 0 - 10 
    // for (int i = 0; i <= 10; i++){
    //     printf("for loop 0 - 100 %d \n", i);
    // }
    // // printing 10 - 0 
    // for (int i = 10; i >= 0; i--){
    //     printf("for loop 10 - 0 %d \n", i);
    // }

    // while loop 
    printf("enter number between 1 - 100 \n");
    int ini;
    scanf("%d", &ini);

    int i = 0;
    // while (i <= ini)
    // {
    //     /* code */
    //     printf("while loop %d \n",i);
    //     i++;
    // }
    do
    {
        printf("while loop %d \n",i);
        i++;
        /* code */
    } while (i <= ini);
    
    // for loop nesting 
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    for (int i = 0,j=n; i < n; i++,j--)
    {
        /* code */
        printf("%d", j);
    }
    
    
    return 0;
}