#include <stdio.h>
 
int main() {
    
    //declara três valores inteiros
    int A = 0;  
    int B = 0;
    int PROD = 0;

    //lê o valor de "A" e "B"
    scanf("%d\n%d", &A, &B);

    //Calcula os valores "A" e "B" e atribui a variavel "PROD"
    PROD = A * B;

    //Imprime o valor da variavel "PROD"
    printf("PROD = %d\n", PROD);
 
    return 0;
}