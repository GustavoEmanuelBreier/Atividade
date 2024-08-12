#include <stdio.h>

int main() {
    
    int numero = 0; //número do funcionario
    int horas = 0; //número de horas trabalhadas
    double salario = 0.0; //salário por hora
    
    // lê o número, horas trabalhadas e o salário.
    scanf("%d\n%d\n%lf", &numero, &horas, &salario);
    
    // Calcula o salário atualizando seu valor
    salario = (horas * salario);
    
    // Imprime o número e o salário do funcionário
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salario);

    return 0;
}