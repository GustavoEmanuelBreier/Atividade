#include <stdio.h>
 
int main() {
 
    int V = 0;
    int vetor[10];
    
    scanf("%d", &V);
    
    for (int i = 0; i < 10; i++){
        vetor[0] = V;
        if (i > 0){
            vetor[i] = vetor[i-1]*2;
        }
        printf("N[%d] = %d\n", i, vetor[i]);
    }
 
    return 0;
}