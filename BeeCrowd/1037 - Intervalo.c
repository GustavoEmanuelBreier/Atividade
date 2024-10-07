#include <stdio.h>

int main()
{
    double numero = 0.0;
    
    scanf("%lf", &numero);
    
    if (numero > 75.00 && numero <= 100.00) {
        printf("Intervalo (75,100]\n");
    } else if (numero > 50.00 && numero <= 75.00) {
        printf("Intervalo (50,75]\n");    
    } else if (numero > 25.00 && numero <= 50.00) {
        printf("Intervalo (25,50]\n");    
    } else if (numero >= 0.00 && numero <= 25.00) {
        printf("Intervalo [0,25]\n");    
    } else {
        printf("Fora de intervalo\n");
    }
    
    return 0;
}
