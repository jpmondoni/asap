//resolvendo 1895 com condição ternária.
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int NumeroCartas, CartaMesa, Limite;
	int Carta;
	int PontuacaoAlice=0;
	int PontuacaoBob=0;
	bool Alice=true;
	scanf("%d %d %d",&NumeroCartas,&CartaMesa,&Limite);
	for(int i=0;i<NumeroCartas-1;i++){
		scanf("%d",&Carta);
		if(i&1)
			abs(CartaMesa-Carta) <= Limite ? PontuacaoBob+= abs(CartaMesa-Carta), CartaMesa = Carta : CartaMesa = CartaMesa;
		else
			abs(CartaMesa-Carta) <= Limite ? PontuacaoAlice+= abs(CartaMesa-Carta), CartaMesa = Carta : CartaMesa = CartaMesa;
	}
	printf("%d %d\n",PontuacaoAlice,PontuacaoBob);

	return 0;

}