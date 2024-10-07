#include <stdio.h>

int main()
{
    int N = 0;
    int notasDe100 = 0, notasDe50 = 0, notasDe20 = 0;
    int notasDe10 = 0, notasDe5 = 0, notasDe2 = 0;
    int notasDe1 = 0;
    
    scanf("%d", &N);
    
    printf("%d\n", N);
    
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
    notasDe1 = (N);
    
    printf("%d nota(s) de R$ 100,00\n", notasDe100);
    printf("%d nota(s) de R$ 50,00\n", notasDe50);
    printf("%d nota(s) de R$ 20,00\n", notasDe20);
    printf("%d nota(s) de R$ 10,00\n", notasDe10);
    printf("%d nota(s) de R$ 5,00\n", notasDe5);
    printf("%d nota(s) de R$ 2,00\n", notasDe2);
    printf("%d nota(s) de R$ 1,00\n", notasDe1);

    return 0;
}