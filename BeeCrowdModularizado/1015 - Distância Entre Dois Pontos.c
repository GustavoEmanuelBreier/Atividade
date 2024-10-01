#include <stdio.h>
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2);

int main() {
 
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, distancia;
    
    scanf("%lf\n%lf\n%lf\n%lf", &x1, &y1, &x2, &y2);
    
    distancia = calcularDistancia(x1,y1,x2,y2);
    
    printf("%.4lf\n", distancia);
    
    return 0;
}

double calcularDistancia(double x1, double y1, double x2, double y2){
    double distancia;
    
    distancia = sqrt(pow((x2-x1),2) + pow((y2 - y1),2));
    
    return (distancia);
}