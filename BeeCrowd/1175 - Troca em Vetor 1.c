#include <stdio.h>
 
int main() {
 
    int N[20];
    int Ninverso[20];
    int I = 19;
    
    for (int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }
    
    for (int i = 0; i < 20; i++){
        Ninverso[i] = N[I];
        I--;
        printf("N[%d] = %d\n", i, Ninverso[i]);
    }
 
    return 0;
}