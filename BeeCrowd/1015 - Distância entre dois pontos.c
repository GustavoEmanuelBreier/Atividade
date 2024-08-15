#include <stdio.h>
#include <math.h>

int main() {
 
    //declara 5 variaveis de ponto flutuante
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double distancia = 0.0;
    
    //lê os valores de x1,y1,x2,y2
    scanf("%lf\n%lf\n%lf\n%lf", &x1, &y1, &x2, &y2);
    
    //Calcula a distancia entre os dois pontos
    distancia = sqrt(pow((x2-x1),2) + pow((y2 - y1),2));
 
    //Imprime a distancia entre os dois pontos
    printf("%.4lf\n", distancia);
 
    return 0;
}