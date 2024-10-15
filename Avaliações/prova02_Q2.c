#include <stdio.h>

int main(){
	
	//tres variaveis inteiras
	int M = 0;
	int N = 0;
	int soma = 0;
	
	//leitura das variaveis M e N
	scanf("%d %d", &M, &N);
	
	//laço de repetição que começa com i no N até i no M
	for (int i = N; i <= M; i++){
		soma += i;
		printf("%d ", i);
	}
	
	//Imprimir o Soma
	printf("Soma = %d", soma);
	
	return 0;
}