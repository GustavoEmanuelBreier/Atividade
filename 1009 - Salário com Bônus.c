#include <stdio.h>
 
int main() {
    
    char nome[50]; //nome do vendedor
    double salario_fixo = 0;
    double vendas_efetuadas = 0; // total de vendas efetuadas
    double total = 0;
    
    //lê o nome, salario fixo e vendas efetuadas do vendedor
    scanf("%s\n%lf\n%lf", &nome, &salario_fixo, &vendas_efetuadas);
 
    //Calcula o total que o funcionário ira receber no final do mês
    total = salario_fixo + (vendas_efetuadas * 0.15);
    
    //Imprime o total que o funcionario ira receber no final do mês
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}