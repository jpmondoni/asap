#include <stdio.h>

//Esta resoluçao utiliza o algoritmo de Kadane para obter a maior substring dentro de um vetor.
int kadane(int Cotacoes[], int N, int C){
	int MaximoAtual, MaximoFinal, MaximoLucro = 0;

	MaximoAtual = MaximoFinal = Cotacoes[0];

	for(int i = 1; i < N; i++){
		if((MaximoAtual > Cotacoes[i] && (MaximoAtual - Cotacoes[i] >= C)) || Cotacoes[i] < MaximoFinal){
			if(MaximoAtual - MaximoFinal - C > 0)
				MaximoLucro += MaximoAtual - MaximoFinal - C;
			
			MaximoAtual = MaximoFinal = Cotacoes[i]; 
		}
		if(Cotacoes[i] > MaximoAtual)
			MaximoAtual = Cotacoes[i];
	}
	
	if(MaximoAtual - MaximoFinal - C > 0)
		MaximoLucro += MaximoAtual - MaximoFinal - C; 

	return MaximoLucro;
}

int main(int argc, char *argv[]){
	int N, C;

	scanf("%d %d", &N, &C);

	int Cotacoes[N];

	for(int i = 0; i < N; i++)
		scanf("%d", &Cotacoes[i]);

	printf("%d\n", kadane(Cotacoes, N, C));

	return 0;
}