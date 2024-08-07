#include <stdio.h>

int main() {
    
    int number = 0; //número do funcionario
    int hours = 0; //número de horas trabalhadas
    double salary = 0.0; //salário por hora
    
    // lê o número, horas trabalhadas e o salário.
    scanf("%d\n%d\n%lf", &number, &hours, &salary);
    
    // Calcula o salário atualizando seu valor
    salary = (hours * salary);
    
    // Imprime o número e o salário do funcionário
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

    return 0;
}