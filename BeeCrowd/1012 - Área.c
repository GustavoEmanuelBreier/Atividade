#include <stdio.h>
 
#define PI 3.14159

int main() {
    
    //declara três variaveis de ponto flutuante (dupla precisão)
    double A = 0.0;
    double B = 0.0;
    double C = 0.0;
    
    //declara cinco variaveis de ponto flutuante (dupla precisão)
    double triangulo_retangulo = 0; 
    double area_do_circulo = 0;
    double area_do_trapezio = 0;
    double area_do_quadrado = 0;
    double area_do_retangulo = 0;
    
    //lê os valores A, B e C
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    
    //Calculo de cada variavel declara
    triangulo_retangulo = (A * C) / 2;
    area_do_circulo = (PI * (C*C));
    area_do_trapezio = ((A+B) * C) / 2;
    area_do_quadrado = (B * B);
    area_do_retangulo = (A * B);
    
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangulo_retangulo,area_do_circulo,area_do_trapezio,area_do_quadrado,area_do_retangulo);
    
    return 0;
}