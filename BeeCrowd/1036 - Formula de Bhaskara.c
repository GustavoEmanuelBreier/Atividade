#include <stdio.h>

double RaizQuadrada(double a);

int main() {
 
    double A = 0.0, B = 0.0, C = 0.0;
    double R1 = 0.0, R2 = 0.0;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    double discriminante = (B * B) - (4 * A * C);
    
    if (discriminante < 0 || A == 0) {
        printf("Impossivel calcular\n");
    } else {
        double raizQuadradaBaskara = RaizQuadrada(discriminante);
        R1 = (-B + raizQuadradaBaskara) / (2 * A);
        R2 = (-B - raizQuadradaBaskara) / (2 * A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    
 
    return 0;
}

double RaizQuadrada(double a){
	double raizQuadrada;
	double chute = 0.0;
	int passos = 100;
	
	if (a == 0){
		return(0.0);
	} else {
		chute = 0.5*(a+(a/a));
		for (int i = 0; i < passos; i++){
			chute = 0.5*(chute+(a/chute));
			raizQuadrada = chute;
		}
	}	
	
	return (raizQuadrada);
}