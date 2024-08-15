#include <stdio.h>
 
int main() {
    
    //declara uma variavel inteira e uma decimal
    int distancia_percorrida = 0;
    double combustivel_gasto = 0;
    double consumo_medio = 0;
    
    //lê os valores da distancia percorrida e combustivel gasto
    scanf("%d\n%lf", &distancia_percorrida, &combustivel_gasto);
 
    //Calcula o consumo médio do automóvel
    consumo_medio = (distancia_percorrida / combustivel_gasto);
 
    //Imprime o valor do consumo médio do automóvel
    printf("%.3lf km/l\n", consumo_medio);
 
    return 0;
}