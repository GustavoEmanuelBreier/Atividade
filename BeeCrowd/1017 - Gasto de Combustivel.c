#include <stdio.h>
 
int main() {
 
 
    double tempo_gasto = 0;  //tempo gasto na viagem (em horas)
    double vel_media = 0; // velocidade media (em km/h)
    double gasto = 0; // quantidade de litros de combustivel gasto na viagem
    
    scanf("%lf", &tempo_gasto);
    scanf("%lf", &vel_media);
 
    gasto = (tempo_gasto * vel_media) / 12;
    
    printf("%.3lf\n", gasto);
 
    return 0;
}