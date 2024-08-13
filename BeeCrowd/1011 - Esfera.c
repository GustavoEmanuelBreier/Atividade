#include <stdio.h>

//declara uma constante chamada PI
#define PI 3.14159

int main() {
    
    //declara duas váriaveis de ponto flutuante (dupla precisao)
    double raio = 0; //valor do raio da esfera
    double volume = 0; //volume da esfera
    
    // lê a variavel raio 
    scanf("%lf", &raio);
    
    //Calcula o volume da esfera
    volume = (4.0/3) * PI * (raio*raio*raio);
    
    //Imprime o valor da esfera
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}