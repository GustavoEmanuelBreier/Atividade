#include <stdio.h>

double calcularSalarioTotal(double salario_fixo, double vendas);

int main() {
 
    char nome[50];
    double salario_fixo = 0, vendas = 0, total = 0;
    
    scanf("%s\n%lf\n%lf", &nome, &salario_fixo, &vendas);
    
    total = calcularSalarioTotal(salario_fixo, vendas);
    
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}

double calcularSalarioTotal(double salario_fixo, double vendas){
    double total;
    total = salario_fixo + (vendas * 0.15);
    return (total);
}