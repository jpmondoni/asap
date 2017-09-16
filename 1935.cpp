#include <iostream>
#include <cstdio>

using namespace std;

int main(){

	long long int N, B;

	cin >> N >> B;

	// busca binária para encontrar o X
	long long int ini = 0, fim = N / 2, meio, X = 0;

	while (ini <= fim){
		meio = (ini + fim) / 2;
		if (4 * meio * (N - meio) < B){
			X = meio;
			ini = meio + 1;
		}
		else
			fim = meio - 1;
	}

	long long int RestoFeijoes = B - 4 * X * (N - X);
	long long int casca = X + 1;
	long long int lim = N + (casca - 1) * (-2);
	long long int posx = casca, posy = casca;
	long long int resto;

	// tenta colocar a maior qte. possível na primeira linha
	if(RestoFeijoes >= lim){
		RestoFeijoes -= lim;
		posy += (lim - 1);
	}
	else{
		resto = RestoFeijoes % lim;
		posy += (resto - 1);
		RestoFeijoes -= resto;
	}
	
	if(RestoFeijoes > 0){
		// tenta colocar a maior qte. possível na primeira coluna
		if(RestoFeijoes >= lim - 1){
			RestoFeijoes -= (lim - 1);
			posx += (lim - 1);
		}
		else{
			resto = RestoFeijoes % (lim - 1);
			posx += resto;
			RestoFeijoes -= resto;
		}

		// tenta colocar a maior qte. possível na segunda linha
		if(RestoFeijoes > 0){
			if(RestoFeijoes >= lim - 1)
			{
				RestoFeijoes -= (lim - 1);
				posy -= (lim - 1);
			}
			else
			{
				resto = RestoFeijoes % (lim - 1);
				posy -= resto;
				RestoFeijoes -= resto;
			}
			
			// tenta colocar a maior qte. possível na segunda coluna
			if(RestoFeijoes > 0)
				posx -= RestoFeijoes;
		}
	}

	cout << posx << " " << posy << endl;
	return 0;
}