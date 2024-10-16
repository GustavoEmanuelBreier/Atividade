#include <stdio.h>

int main(){
	
	//tres variaveis inteiras
	int M = 0;
	int N = 0;
	int sum = 0;
	int parar = 0;
	
	int menor = 0;
	int maior = 0;
	
	while (parar != 1){
	    scanf("%d %d", &M, &N);
	    
	    if (M <= 0 || N <= 0){
	        parar = 1;
	    } else {
            if (M > N){
                maior = M;
                menor = N;
            } else if (N > M) {
                maior = N;
                menor = M;
            }
            
            for (int i = menor; i <= maior; i++){
                sum += i;
                printf("%d ", i);
            }
            
            printf("Sum=%d\n",sum);
            
	    }
	    sum = 0;
	  
	}
	
	return 0;
}