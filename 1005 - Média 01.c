#include <stdio.h>
 
int main() {
 
    //declara três variaveis de precisão
    double A = 0.0; 
    double B = 0.0; 
    double MEDIA = 0.0;
    
    //lê o valor das variaveis A e B
    scanf("%lf\n%lf", &A, &B);
    
    //Calcula A e B e atribui a variavel MEDIA
    MEDIA = ((A*3.5) + (B*7.5)) / 11;
 
    //Imprime o valor de MEDIA
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}