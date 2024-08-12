#include <stdio.h>
 
int main() {

    //declara três valores de dupla precisão     
    double PI = 3.14159; 
    double raio = 0; 
    double area = 0;

    //lê o valor "raio"
    scanf("%lf\n", &raio);

    //Calcula os valores de "raio" e "pi", e atribui a variavel "area"
    area = PI * (raio * raio);

    //Imprime o valor da variavel "área"
    printf("A=%.4lf\n", area);
 
    return 0;
}