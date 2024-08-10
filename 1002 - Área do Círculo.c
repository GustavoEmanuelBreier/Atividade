#include <stdio.h>
 
int main() {

    //declara três variaveis de precisão     
    double PI = 3.14159; 
    double raio = 0; 
    double area = 0;

    //lê o valor raio
    scanf("%lf\n", &raio);

    //faz o cálculo para pegar a área
    area = PI * (raio * raio);

    //Imprime o valor da área
    printf("A=%.4lf\n", area);
 
    return 0;
}