#include <stdio.h>
#include <stdlib.h>
 
int main() {
    
    //declara cinco valores inteiros
    int A = 0;
    int B = 0;
    int C = 0;
    int maior = 0;
    int maiorTodos = 0;
    
    //lê os valores A, B e C
    scanf("%d\n%d\n%d", &A, &B, &C);
    
    //Calculo para chegar ao resultado do maior número entre ABC
    maior = (A + B + abs(A - B)) / 2;
    maiorTodos = (maior + C + abs(maior - C)) / 2;
    
    //Imprime o valor da variavel maior
    printf("%d eh o maior\n", maiorTodos);
 
    return 0;
}