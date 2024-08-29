#include <stdio.h>

// Escopo/Protótipo das funções de operações matemáticas
double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
void Divisao(double a, double b);
double Potenciacao(double a, int b);
double RaizQuadrada(double a);
int Fatorial(int a);
int MDC(int a, int b);
int MMC(int a, int b);
int EquacaoDeSegundoGrau(double a, double b, double c);

int main(){
	
	int Input = 0;//  Input do Usuário
	double A = 0, B = 0, C = 0; //  Variaveis para as funções
	int AInteiro = 0, BInteiro = 0; // Variável para as funções Fatorial, MDC, MMC e Equacao de segundo grau
		
	do { // Laço de repetição que repete o código enquanto "Input != 0" seja verdadeira
		
		// Imprime o Menu do Usuário e lê o valor de Input
		printf("Escolha a operacao: \n");
		printf("0. Sair\n");
		printf("1. Soma\n");
		printf("2. Subtracao\n");
		printf("3. Multiplicacao\n");
		printf("4. Divisao\n");
		printf("5. Potenciacao\n");
		printf("6. Raiz Quadrada\n");
		printf("7. Fatorial\n");
		printf("8. MDC\n");
		printf("9. MMC\n");
		printf("10. Equacao de Segundo Grau\n");
		printf("Digite a sua escolha: ");
		scanf("%d", &Input);
			
		switch(Input){ // Verifica o valor do Input e executa o código de acordo com o valor recebido
			case 1: 
				printf("Digite o primeiro numero: ");
				scanf("%lf", &A);
				printf("Digite o segundo numero: ");
				scanf("%lf", &B);
				printf("Resultado: %.0lf + %.0lf = %.5lf\n", A, B, Soma(A,B));
				break;
			case 2:
				printf("Digite o primeiro numero: ");
				scanf("%lf", &A);
				printf("Digite o segundo numero: ");
				scanf("%lf", &B);
				printf("Resultado: %.0lf - %.0lf = %.5lf\n", A, B, Subtracao(A,B));
				break;
			case 3:
				printf("Digite o primeiro numero: ");
				scanf("%lf", &A);
				printf("Digite o segundo numero: ");
				scanf("%lf", &B);
				printf("Resultado: %.0lf * %.0lf = %.5lf\n", A, B, Multiplicacao(A,B));
				break;
			case 4:
				printf("Digite o primeiro numero: ");
				scanf("%lf", &A);
				printf("Digite o segundo numero: ");
				scanf("%lf", &B);
				Divisao(A,B);
				break;
			case 5:
				printf("Digite a base: ");
				scanf("%lf", &A);
				printf("Digite o expoente: ");
				scanf("%lf", &B);
				printf("Resultado: %.0lf ^ %.0lf = %.5lf\n", A, B, Potenciacao(A,B));
				break;
			case 6:
				printf("Digite o numero para calcular raiz: ");
				scanf("%lf", &A);
				if (A < 0) { // Verifica se a raiz quadrada é menor que zero (negativa)
					printf("Raiz Quadrada de numeros negativos nao existe.\n");
				} else {
					printf("Resultado: Raiz quadrada de %.0lf = %.5lf\n", A, RaizQuadrada(A));	
				}
				break;
			case 7:
				printf("Digite o numero para calcular fatorial: ");
				scanf("%d", &AInteiro);
				printf("Resultado: Fatorial de %d = %d\n", AInteiro, Fatorial(AInteiro));
				break;
			case 8:
				printf("Digite o primeiro numero: ");
				scanf("%d", &AInteiro);
				printf("Digite o segundo numero: ");
				scanf("%d", &BInteiro);
				printf("Resultado: MDC entre %d e %d = %d\n", AInteiro, BInteiro, MDC(AInteiro,BInteiro));
				break;
			case 9:
				printf("Digite o primeiro numero: ");
				scanf("%d", &AInteiro);
				printf("Digite o segundo numero: ");
				scanf("%d", &BInteiro);
				printf("Resultado: MMC entre %d e %d = %d\n", AInteiro, BInteiro, MMC(AInteiro,BInteiro));
				break;
			case 10:
				printf("Digite o primeiro numero: ");
				scanf("%lf", &A);
				printf("Digite o segundo numero: ");
				scanf("%lf", &B);
				printf("Digite o terceiro numero: ");
				scanf("%lf", &C);
				EquacaoDeSegundoGrau(A,B,C);
		}
			
	} while (Input != 0);
	
	return 0;
}

//Funções matemáticas

// SOMA: Soma (Adição) adição entre dois números
double Soma(double a, double b){
	double Soma;	
	
	Soma = (a + b);
	
	return (Soma);
}
// SUBTRAÇÃO: Subtração entre dois números
double Subtracao(double a, double b){
	double Subtracao;
	
	Subtracao = (a - b);
	
	return (Subtracao);
}
// MULTIPLICACAO: Multiplicação entre dois números
double Multiplicacao(double a, double b){
	double Multiplicacao;
	
	Multiplicacao = (a * b);
	
	return (Multiplicacao);
}
// DIVISÃO: Divisão entre dois números
void Divisao(double a, double b){
	double Divisao;
	
	if (b != 0){
		printf("Resultado: %.0lf / %.0lf = %.5lf\n", a, b, Divisao = (a / b));
	} else {
		printf("Nao e possivel dividir por 0\n");
	}
	
}
// POTENCIAÇÃO: (exponenciação) de um número por outro
double Potenciacao(double a, int b){
	double Potenciacao;
	double R = 1;
	
	for (int i = 0; i < b; i++){
		R = (R * a);
	}
	
	return (R);
}
// RAIZ QUADRADA: Raiz Quadrada de um número
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
// FATORIAL: Fatorial de um número
int Fatorial(int a){
	int Fatorial;
	int fatorial = 1;
	
	for (int i = 1; i <= a; i++){
		fatorial *= i;
		Fatorial = fatorial;
	}
	
	return (Fatorial);
}

// MDC: Maior Divisor Comum entre dois números.
int MDC(int a, int b){
	int MDC;
	int resto = 1;
	int resultado;
	
	if (a > b){
		while (resto != 0){
			resto = (a % b);
			a = b; 
			b = resto; 
		}
		MDC = a;
	} else if (a < b){
		while (resto != 0){
			resto = (b % a); 
			b = a;
			a = resto; 
		}
		MDC = b;
	}
	
	return (MDC);
}

// MMC: Menor Multiplicador Comum entre dois números.
int MMC(int a, int b){
	int MMC;
	
	MMC = (a * b) / MDC(a, b);
	
	return (MMC);
}

// Equação de segundo grau
int EquacaoDeSegundoGrau(double a, double b, double c){
	double delta;
	double x1, x2;
	
	if (a != 0){
		delta = (b * b) - 4 * a * c;
	
		if (delta >= 0){
			x1 = ((-b) + RaizQuadrada(delta)) / (2 * a);
			x2 = ((-b) - RaizQuadrada(delta)) / (2 * a);
			printf("Esta e uma equacao de segundo grau\n");
			printf("Resultado: As raizes dessa equacao sao, X1: %.5lf, X2: %.5lf\n", x1, x2);
		} else if (delta < 0) {
			printf("Nao existe raiz quadrada de numero negativo\n");
		}	
	} else {
		
		delta = (b * b) - 4 * a * c;
	
		x1 = ((-b) + RaizQuadrada(delta)) / (2 * a);
		x2 = ((-b) - RaizQuadrada(delta)) / (2 * a);
		
		printf("Esta nao e uma equacao de segundo grau\n");
	}
}