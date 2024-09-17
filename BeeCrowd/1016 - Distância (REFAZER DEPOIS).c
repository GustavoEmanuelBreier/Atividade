#include <stdio.h>
 
int main() {
    
    //declara duas variáveis inteiras 
    int km = 0, minutos = 0;
    
    //lê o valor de "km"
    scanf("%d", &km);
    
    //calcula o tempo (em minutos) que leva para x se distanciar de y
    minutos = (km / (90-60)) * 60;
    
    //Imprime o valor de minutos
    printf("%d minutos\n", minutos);
 
    return 0;
}