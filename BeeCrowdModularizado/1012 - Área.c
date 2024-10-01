#include <stdio.h>
#define PI 3.14159

void calculoGeral(double A, double B, double C);

int main() {
 
    double A = 0, B = 0, C = 0;
    
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    
    calculoGeral(A,B,C);
 
    return 0;
}

void calculoGeral(double A, double B, double C){
    double triangulo_retangulo = (A * C) / 2;
    double area_do_circulo = (PI * (C*C));
    double area_do_trapezio = ((A+B) * C) / 2;
    double area_do_quadrado = (B * B);
    double area_do_retangulo = (A * B);
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo_retangulo,area_do_circulo,area_do_trapezio,area_do_quadrado,area_do_retangulo);
    
}