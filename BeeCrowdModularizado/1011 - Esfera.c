#include <stdio.h>
#define PI 3.14159

double calcularVolume(double raio);

int main() {
 
    double raio = 0, volume;
    
    scanf("%lf", &raio);
    
    volume = calcularVolume(raio);
    
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}

double calcularVolume(double raio){
    double volume;
    
    volume = (4.0/3) * PI * (raio*raio*raio);
    
    return (volume);
}