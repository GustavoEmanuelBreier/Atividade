#include <stdio.h>
 
int main() {
 
    double salario = 0;
    
    scanf("%lf", &salario);
    
    if (salario <= 2000.00){
        printf("Isento\n");
    } else if (salario <= 3000.00) {
        salario = (salario - 2000.00) * 0.08;
        printf("R$ %.2lf\n", salario);
    } else if (salario <= 4500.00){
        salario = (1000.00 * 0.08) + ((salario - 3000.00) * 0.18);
        printf("R$ %.2lf\n", salario);
    } else {
        salario = (1000.00 * 0.08) + (1500.00 * 0.18) + ((salario - 4500.00) * 0.28);
        printf("R$ %.2lf\n", salario);
    }
 
    return 0;
}