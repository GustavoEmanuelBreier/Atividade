#include <stdio.h>

double Mod(double y);

int main() {
    
    double a = 0.0, b = 0.0, c = 0.0;
    double ab, ac, bc;
    double perimetro = 0.0, area = 0.0;
    
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    
    if ((b + c) > a && (a + c) > b && (a + b) > c){
        
        ab = (a - b);
        ac = (a - c);
        bc = (b - c);
        
        if (Mod(bc) < a  && Mod(ac) < b  && Mod(ab) < c){
            perimetro = (a+b+c);
            printf("Perimetro = %.1lf\n", perimetro);
        }   
    } else {
        area = ((a+b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }
 
    return 0;
}

double Mod(double y){
    double x = 0.0;
    
    if (y < 0){
        x = y * (-1);
    } else {
        x = y;
    }
    
    return (x);
}