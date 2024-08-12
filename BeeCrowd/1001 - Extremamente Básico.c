#include <stdio.h>
 
int main() {
 
    //declara três valores inteiros
    int A = 0; 
    int B = 0; 
    int X = 0; 

    //lê o valor "A" e "B"
    scanf("%d\n%d", &A, &B);
    
    //calcula dois valores inteiros "A" e "B", e atribuiu a variavel "X"
    X = A + B;

    //Imprime o valor da variavel "X"
    printf("X = %d\n", X);
 
    return 0;
}