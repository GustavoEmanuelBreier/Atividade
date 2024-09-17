#include <stdio.h>
 
int main() {
    
    int valores[6];
    int positivos = 0;
    int i = 0;
    
    while (i < 6){
        
        scanf("%d", &valores[i]);
        
        i++;
    }
    
    for (int i = 0; i < 6; i++){
        if (valores[i] > 0) {
            positivos++;        
        }
    }
 
    printf("%d valores positivos\n",positivos);
 
    return 0;
}