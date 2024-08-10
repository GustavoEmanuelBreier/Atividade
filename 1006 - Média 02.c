#include <stdio.h>
 
int main() {
 
    //declara quatro variaveis de dupla precisão
    double A = 0.0; 
    double B = 0.0;
    double C = 0.0;
    double MEDIA = 0.0;
    
    //lê o valor de "A", "B" e "C"
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    
    //Calcula os valores "A" "B" e "C", e atribui a variavel "MEDIA"
    MEDIA = ((A*2.0) + (B*3.0) + (C*5.0)) / 10;
 
    //Imprime o valor da variavel "MEDIA"
    printf("MEDIA = %.1lf\n", MEDIA);
 
    return 0;
}