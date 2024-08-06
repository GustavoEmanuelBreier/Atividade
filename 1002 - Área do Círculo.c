#include <stdio.h>
 
int main() {
    
    double PI = 3.14159, raio = 0, area = 0;
    scanf("%lf\n", &raio);
    area = PI * (raio * raio);
    printf("A=%.4lf\n", area);
 
    return 0;
}