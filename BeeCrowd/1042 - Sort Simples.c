#include <stdio.h>
#include <limits.h>

int main() {
 
    int A = 0, B = 0, C = 0;
    int maior = INT_MIN;
    int menor = INT_MAX;
    int meio = 0;
    
    scanf("%d\n%d\n%d", &A, &B, &C);
    
    if (menor > A){
        menor = A;
    }
 
    if (menor > B){
        menor = B;
    }
 
    if (menor > C){
        menor = C;
    }
    
    if (maior < A){
        maior = A;
    }
 
    if (maior < B){
        maior = B;
    }
 
    if (maior < C){
        maior = C;
    }
    
    meio = (A + B + C) - (maior + menor);
 
    printf("%d\n%d\n%d\n\n", menor, meio, maior);
    printf("%d\n%d\n%d\n", A, B, C);
 
    return 0;
}