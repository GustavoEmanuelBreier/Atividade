#include <stdio.h>

int Soma(int a, int b); 

int main() {
    
    int a = 0, b = 0, x = 0;
    
    scanf("%d\n%d",&a,&b);
 
    x = Soma(a,b);
    
    printf("X = %d\n",x);
 
    return 0;
}

int Soma(int a, int b){
    int soma;
    soma = a + b;
    return (soma);
}