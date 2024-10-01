#include <stdio.h>
#include <stdlib.h>

int maiorNumeroABC(int maiorAB, int C);

int main() {
 
    int A = 0, B = 0, C = 0, maior, maiorTodos;
    
    scanf("%d\n%d\n%d", &A, &B, &C);
    
    maior = (A + B + abs(A - B)) / 2;
    maiorTodos = maiorNumeroABC(maior, C);
    
    printf("%d eh o maior\n", maiorTodos);
    
    return 0;
}

int maiorNumeroABC(int maiorAB, int C){
    double maiorTodos;
    
    maiorTodos = (maiorAB + C + abs(maiorAB - C)) / 2;
    
    return (maiorTodos);
}