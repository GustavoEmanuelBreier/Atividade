#include <stdio.h>
 
int main() {
    
    //declara 5 variáveis inteiras
    int A = 0;
    int B = 0; 
    int C = 0; 
    int D = 0; 
    int DIFERENCA = 0;
    
    //Lê o valor de "A" "B" "C" e "D"
    scanf("%d\n%d\n%d\n%d", &A,&B,&C,&D);
    
    //Calcula os valores de "A" "B" "C" e "D", e atribui a variavel DIFERENCA
    DIFERENCA = (A * B - C * D);

    //Imprime o valor da variavel DIFERENCA
    printf("DIFERENCA = %d\n", DIFERENCA);
    
    return 0;
}