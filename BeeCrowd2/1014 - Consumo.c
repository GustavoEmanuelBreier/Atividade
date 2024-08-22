#include <stdio.h>

double consumoMedio(int distancia_percorrida, double combustivel_gasto);

int main() {
 
    int distancia_percorrida = 0;
    double combustivel_gasto = 0, consumo_medio = 0;
    
    scanf("%d\n%lf", &distancia_percorrida, &combustivel_gasto);
    
    consumo_medio = consumoMedio(distancia_percorrida,combustivel_gasto);
 
    printf("%.3lf km/l\n", consumo_medio);
 
    return 0;
}

double consumoMedio(int distancia_percorrida, double combustivel_gasto){
    double consumo_medio;
    
    consumo_medio = (distancia_percorrida / combustivel_gasto);
    
    return (consumo_medio);
}