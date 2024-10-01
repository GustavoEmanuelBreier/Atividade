#include <stdio.h>

double calculaSalario(int horas, double salario);
 
int main() {
 
    int numero = 0, horas = 0;
    double salario = 0.0;
    
    scanf("%d\n%d\n%lf", &numero, &horas, &salario);
    
    salario = calculaSalario(horas,salario);
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salario);
 
    return 0;
}

double calculaSalario(int horas, double salario){
    double salarioFinalDoMes;
    salarioFinalDoMes = (horas * salario);
    return (salarioFinalDoMes);
}