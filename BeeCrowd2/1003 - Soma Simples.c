#include <stdio.h>

int Somar(int a, int b);

int main() {
 
    int A = 0, B = 0, SOMA = 0;
 
    scanf("%d\n%d", &A, &B);
 
    SOMA = Somar(A,B);
 
    printf("SOMA = %d\n", SOMA);
 
    return 0;
}

int Somar(int a, int b){
    int SOMA = 0;
    SOMA = (a + b);
    return (SOMA);
}