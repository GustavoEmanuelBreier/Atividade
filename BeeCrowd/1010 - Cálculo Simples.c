#include <stdio.h>
 
int main() {
 
    int codigo1 = 0, codigo2 = 0; //código das peças 1 e 2
    int pecas1 = 0, pecas2 = 0; //número de peças das peças 1 e 2
    
    //valor unítario de cada peça das peças 1 e 2
    double valor_da_peca1 = 0, valor_da_peca2 = 0;
    
    double total = 0;
    
    //Lê os valores dos códigos, número total e valor de cada peça de peça 1 e 2
    scanf("%d\n%d\n%lf\n%d\n%d\n%lf", &codigo1, &pecas1, &valor_da_peca1, &codigo2, &pecas2, &valor_da_peca2);
    
    //Calcula o valor total a pagar das peças
    total = ((pecas1*valor_da_peca1) + (pecas2*valor_da_peca2));

    //Imprime o valor total a pagar 
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}