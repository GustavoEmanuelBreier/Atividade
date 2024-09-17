#include <stdio.h>
 
int main() {
 
    int valores[5];
    int i = 0;
    int par = 0;
    int impar = 0;
    int negativo = 0;
    int positivo = 0;
    
    while (i < 5){
        scanf("%d", &valores[i]);
        i++;
    }
 
    i = 0;
 
    for (i = 0; i < 5; i++){
        if (valores[i] % 2 == 0){
            par++;
        } else if (valores[i] % 2 != 0){
            impar++;
        }
        if (valores[i] > 0){
            positivo++;
        } else if (valores[i] < 0){
            negativo++;
        }
    }
 
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
 
    return 0;
}