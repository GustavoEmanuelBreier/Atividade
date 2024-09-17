#include <stdio.h>
 
int main() {

    int valores[5];
    int i = 0;
    int pares = 0;
    
    while (i < 5){
        
        scanf("%d", &valores[i]);
        
        i++;
    }
    
    for (int i = 0; i < 5; i++){
        if (valores[i] % 2 == 0) {
            pares++; 
        }
    }
 
    printf("%d valores pares\n", pares);
 
    return 0;
}