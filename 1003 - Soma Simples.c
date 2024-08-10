#include <stdio.h>
 
int main() {

    //declara três variaveis inteiras 
    int A = 0; 
    int B = 0; 
    int SOMA = 0;
    
    //lê o valor de A e B
    scanf("%d\n%d", &A, &B);

    //Calcula o valor da soma
    SOMA = A + B;

    //Imprime o valor da soma
    printf("SOMA = %d\n", SOMA);
 
    return 0;
}