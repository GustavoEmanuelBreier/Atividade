#include <stdio.h>
 
int main() {

    //declara três valores inteiros 
    int A = 0; 
    int B = 0; 
    int SOMA = 0;
    
    //lê o valor "A" e "B"
    scanf("%d\n%d", &A, &B);

    //Calcula os valores de "A" e "B", e atribui a variavel "SOMA"
    SOMA = A + B;

    //Imprime o valor da variavel "SOMA"
    printf("SOMA = %d\n", SOMA);
 
    return 0;
}