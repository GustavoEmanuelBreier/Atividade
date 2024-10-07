#include <stdio.h>

int main()
{
    double N = 0;
    
    // NOTAS
    int notasDe100 = 0, notasDe50 = 0, notasDe20 = 0;
    int notasDe10 = 0, notasDe5 = 0, notasDe2 = 0;
    
    // MOEDAS
    int moedasDe1 = 0.0, moedasDe050 = 0.0, moedasDe025 = 0.0;
    int moedasDe010 = 0.0, moedasDe005 = 0.0, moedasDe001 = 0.0;
    
    scanf("%lf", &N);
    
    notasDe100 = (N / 100);
    N = N - (notasDe100 * 100);
    notasDe50 = (N / 50);
    N = N - (notasDe50 * 50);
    notasDe20 = (N / 20);
    N = N - (notasDe20 * 20);
    notasDe10 = (N / 10);
    N = N - (notasDe10 * 10);
    notasDe5 = (N / 5);
    N = N - (notasDe5 * 5);
    notasDe2 = (N / 2);
    N = N - (notasDe2 * 2);
    
    moedasDe1 = (N);
    N = N - (moedasDe1 * 1);
    moedasDe050 = (N / 0.5);
    N = N - (moedasDe050 * 0.5);
    moedasDe025 = (N / 0.25);
    N = N - (moedasDe025 * 0.25);
    moedasDe010 = (N / 0.10);
    N = N - (moedasDe010 * 0.10);
    moedasDe005 = (N / 0.05);
    N = N - (moedasDe005 * 0.05);
    moedasDe001 = (N / 0.01);
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notasDe100);
    printf("%d nota(s) de R$ 50.00\n", notasDe50);
    printf("%d nota(s) de R$ 20.00\n", notasDe20);
    printf("%d nota(s) de R$ 10.00\n", notasDe10);
    printf("%d nota(s) de R$ 5.00\n", notasDe5);
    printf("%d nota(s) de R$ 2.00\n", notasDe2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moedasDe1);
    printf("%d moeda(s) de R$ 0.50\n", moedasDe050);
    printf("%d moeda(s) de R$ 0.25\n", moedasDe025);
    printf("%d moeda(s) de R$ 0.10\n", moedasDe010);
    printf("%d moeda(s) de R$ 0.05\n", moedasDe005);
    printf("%d moeda(s) de R$ 0.01\n", moedasDe001);
    
    
    return 0;
}