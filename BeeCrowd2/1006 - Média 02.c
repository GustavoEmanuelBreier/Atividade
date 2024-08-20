#include <stdio.h>

double calcularMedia(double a, double b, double c);
 
int main() {
 
    double A = 0.0, B = 0.0, C = 0.0, MEDIA = 0.0;
    
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    
    MEDIA = calcularMedia(A,B,C);
    
    printf("MEDIA = %.1lf\n", MEDIA);
    
    return 0;
}

double calcularMedia(double a, double b, double c){
    double MEDIA;
    MEDIA = ((a*2.0) + (b*3.0) + (c*5.0)) / 10;
    return (MEDIA);
}