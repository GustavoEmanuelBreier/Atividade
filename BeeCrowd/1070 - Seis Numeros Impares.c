#include <stdio.h>
 
int main() {
    
    int x = 0;
    int impar = 0;
    
    scanf("%d", &x);
    
    while (impar < 6){
       
        if (x % 2 != 0){
            impar++;
            printf("%d\n", x);
        }
         x++;
    }
 
    return 0;
}