#include <stdio.h>

// Escopo/Protótipo das funções de operações matemáticas
double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
double Divisao(double a, double b);
double Potenciacao(double a, double b);

int main(){
	
	int Input = 0;//  Input do Usuário
	double A = 0, B = 0; //  Variaveis para as funções
		
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
				printf("Resultado: %.0lf / %.0lf = %.5lf\n", A, B, Divisao(A,B));	
				break;
			case 5:
				printf("Digite o primeiro numero: ");
				scanf("%lf", &A);
				printf("Digite o segundo numero: ");
				scanf("%lf", &B);
				printf("Resultado: %.0lf ^ %.0lf = %.5lf\n", A, B, Potenciacao(A,B));
				break;
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
double Divisao(double a, double b){
	double Divisao;
	
	Divisao = (a / b);
	
	return (Divisao);
}
// POTENCIAÇÃO: (exponenciação) de um número por outro
double Potenciacao(double a, double b){
	double Potenciacao;
	
	
	
	return (Potenciacao);
}