#include <stdio.h>
 
double calcularValorTotal(double pecas1, double valor_peca1, double pecas2, double valor_peca2);
 
int main() {
 
    int codigo1 = 0, codigo2 = 0;
    int pecas1 = 0, pecas2 = 0;
    double valor_peca1 = 0, valor_peca2 = 0, total = 0;
 
    scanf("%d\n%d\n%lf\n%d\n%d\n%lf", &codigo1, &pecas1, &valor_peca1, &codigo2, &pecas2, &valor_peca2);
    
    total = calcularValorTotal(pecas1,valor_peca1,pecas2,valor_peca2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}

double calcularValorTotal(double pecas1, double valor_peca1, double pecas2, double valor_peca2){
    double total = 0;
    
    total = ((pecas1*valor_peca1) + (pecas2*valor_peca2));
    
    return (total);
}