#include <stdio.h>

int main()
{
    
    long long int T = 0;
    long long int Fibonnaci[60];
    int i = 0;
    int j = 0;
    
    Fibonnaci[0] = 0;
    Fibonnaci[1] = 1;
    
    for (int i = 0; i <= 60; i++){
        if (i > 1){
            Fibonnaci[i] = (Fibonnaci[i-1] + Fibonnaci[i-2]);
        }
    }
    
    scanf("%lld", &T);
    
    while (i < T){
        scanf("%d", &j);
        printf("Fib(%d) = %lld\n", j, Fibonnaci[j]);
        i++;
    }
    
    return 0;
}