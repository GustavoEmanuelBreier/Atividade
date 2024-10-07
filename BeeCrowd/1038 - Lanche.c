#include <stdio.h>
 
int main() {
    
    int codigo = 0, quantidade = 0;
    double preco = 0.0;
    
    scanf("%d %d", &codigo, &quantidade);
    
    if (codigo == 1){
        preco = 4.00;
        printf("Total: R$ %.2lf\n", preco*quantidade);
    } else if (codigo == 2){
        preco = 4.50;
        printf("Total: R$ %.2lf\n", preco*quantidade);
    } else if (codigo == 3){
        preco = 5.00;
        printf("Total: R$ %.2lf\n", preco*quantidade);
    } else if (codigo == 4){
        preco = 2.00;
        printf("Total: R$ %.2lf\n", preco*quantidade);
    } else if (codigo == 5){
        preco = 1.50;
        printf("Total: R$ %.2lf\n", preco*quantidade);
    }
 
    return 0;
}