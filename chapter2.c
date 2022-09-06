#include <stdio.h>
int main() {
    int a = 100;
    printf("%d", !(a > 17)); //one must be true
    // printf("%d", a >9 && a < 100); //both must be true
    return 0;
}

/*
    a         b        a && b
--------------------------------
    T         T          T  
    T         F          F  
    F         T          F  
    F         F          F  
*/
/*
    a         b        a || b
--------------------------------
    T         T          T  
    T         F          T  
    F         T          T  
    F         F          F  
*/