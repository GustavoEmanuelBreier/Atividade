#include <stdio.h>

double calcularMedia(double a, double b);

int main() {
 
    double A = 0.0, B = 0.0, MEDIA = 0.0;
    
    scanf("%lf\n%lf", &A, &B);
    
    MEDIA = calcularMedia(A,B);
    
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}

double calcularMedia(double a, double b){
    double MEDIA = 0;
    MEDIA = ((a*3.5) + (b*7.5)) / 11;
    return (MEDIA);
}