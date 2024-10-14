#include <stdio.h>

// Escopo/Protótipo das funções
void numerosPares(int *vetor);
void numerosImpares(int *vetor);
void somaDosPares(int *vetor);
void somaDosImpares(int *vetor);
int numeroPrimo(int numero);
void numerosPrimos(int *vetor);
void vetorOrdenado(int *vetor);

int main(){
	
	//vetor usado no exercicio
	int vetor[10];
	
	for (int i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	numerosPares(vetor);
	numerosImpares(vetor);
	somaDosPares(vetor);
	somaDosImpares(vetor);
	numerosPrimos(vetor);
	vetorOrdenado(vetor);
	
	return 0;
}

void numerosPares(int *vetor){
	int i = 0;
	int pares[10];
	
	printf("Pares: ");
	
	for (int i = 0; i < 10; i++){
		if (vetor[i] % 2 == 0){
			pares[i] = vetor[i];
			printf("%d ", pares[i]);
		}
	}
	
	printf("\n");
}

void numerosImpares(int *vetor){
	int i = 0;
	int impares[10];
	
	printf("Impares: ");
	
	for (int i = 0; i < 10; i++){
		if (vetor[i] % 2 != 0){
			impares[i] = vetor[i];
			printf("%d ", impares[i]);
		}
	}
	
	printf("\n");
}

void somaDosPares(int *vetor){
	int i = 0;
	int pares[10];
	int soma = 0;
	
	printf("Soma dos pares: ");
	
	for (int i = 0; i < 10; i++){
		if (vetor[i] % 2 == 0){
			pares[i] = vetor[i];
			soma += pares[i];
		}
	}
	
	printf("%d", soma);
	
	printf("\n");
}

void somaDosImpares(int *vetor){
	int i = 0;
	int impares[10];
	int soma = 0;
	
	printf("Soma dos impares: ");
	
	for (int i = 0; i < 10; i++){
		if (vetor[i] % 2 != 0){
			impares[i] = vetor[i];
			soma += impares[i];
		}
	}
	
	printf("%d", soma);
	
	printf("\n");
}

int numeroPrimo(int numero){
	int i = 0;
	int k = 0;
	
	for (i = 1; i <= numero; i++){
		if (numero % i == 0){
			k++;
		}
	}
	
	if (k == 2){
		return 1;
	} else {
		return 0;
	}
}

void numerosPrimos(int *vetor){
	int i = 0;
	int primos[10];
	
	printf("Primos: ");
	
	for (i = 0; i < 10; i++){
		if (numeroPrimo(vetor[i]) == 1){
			primos[i] = vetor[i];
			printf("%d ", primos[i]);
		}
	}
	
	printf("\n");
}

void vetorOrdenado(int *vetor){
	int i = 0, j = 0;
	int menor = 0;
	int maior = 0;
	
	printf("Vetor Ordenado: ");
	
	for (i = 1; i < 10; i++){
		
	}
	
	printf("%d", maior);
	
}