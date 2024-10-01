#include <stdio.h>
 
int calcularProduto(int a, int b);
 
int main() {
 
    int A = 0, B = 0, PROD = 0;
    
    scanf("%d\n%d", &A, &B);
    
    PROD = calcularProduto(A,B);
    
    printf("PROD = %d\n", PROD);
 
    return 0;
}

int calcularProduto(int a, int b){
    int PROD = 0;
    PROD = (a * b);
    return (PROD);
}