#include <stdio.h>
 
int main() {
 
    //declara três valores inteiros
    int A = 0; // A
    int B = 0; // B
    int X = 0; // X = A + B

    //lê o valor A, B 
    scanf("%d\n%d", &A, &B);
    
    //calcula dois valores inteiros "A" e "B", e atribuiu ao valor "X"
    X = A + B;

    //Imprime o valor X
    printf("X = %d\n", X);
 
    return 0;
}