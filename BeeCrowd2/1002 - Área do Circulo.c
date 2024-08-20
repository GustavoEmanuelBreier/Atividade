#include <stdio.h>
#define PI 3.14159

double calcularArea(double pi, double raio);

int main() {
 
    double raio = 0;
 
    calcularArea(PI,raio);
 
    return 0;
}

double calcularArea(double pi, double raio){
    double area = 0;
    scanf("%lf\n", &raio);
    area = PI * (raio * raio);
    printf("A=%.4lf\n", area);
}