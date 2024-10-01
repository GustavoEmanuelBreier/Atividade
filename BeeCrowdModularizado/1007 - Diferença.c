#include <stdio.h>

int calcularDiferenca(int a, int b, int c, int d);

int main() {
 
    int A = 0, B = 0, C = 0, D = 0, DIFERENCA;
    
    scanf("%d\n%d\n%d\n%d", &A, &B, &C, &D);
 
    DIFERENCA = calcularDiferenca(A,B,C,D);
    
    printf("DIFERENCA = %d\n", DIFERENCA);
 
    return 0;
}

int calcularDiferenca(int a, int b, int c, int d){
    int DIFERENCA;
    DIFERENCA = (a * b - c * d);
    return (DIFERENCA);
}