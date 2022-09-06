#include <stdio.h>

int main() {
  
  for (int i = 0; i < 100; i++)
  {
    /* code */
    if(i == 6){
        continue;// skip current
        
    }
    /* code */
    if(i >= 40){
        break;// skip current
        
    }

    printf("%d \n", i);
  }
  
    return 0;
}