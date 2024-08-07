#include <stdio.h>
 
int main() {
 
    double A = 0.0, B = 0.0, C = 0.0, MEDIA = 0.0;
    
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    
    MEDIA = ((A*2.0) + (B*3.0) + (C*5.0)) / 10;
 
    printf("MEDIA = %.1lf\n", MEDIA);
 
    return 0;
}