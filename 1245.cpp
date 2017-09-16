#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define mp make_pair

using namespace std;

int main(){
	int n;
	int Pares = 0;
	int Tamanho;
	char Pe;
	
	while(cin >> n){
		int Sapatos[31]={0};
		int Esq[31]={0};
		int Dir[31]={0};
		Pares = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> Tamanho >> Pe;
			if(Pe == 'D')
				Dir[Tamanho - 30]++;
			else
				Esq[Tamanho - 30]++;
				
			Sapatos[Tamanho - 30]++;
		}
		int Dif=0;
		
		for(int i = 0 ; i < 31 ; i++){
			if(Sapatos[i] > 0){
				if(Dir[i] > Esq[i]){
					Dif = Dir[i] - Esq[i];
					Dir[i] = Dir[i] - Dif;
				}
				else{
					Dif = Esq[i] - Dir[i];
					Esq[i] = Esq[i] - Dif;
				}
						
				if(Dir[i] == Esq[i] && Dir[i] > 0){
					Pares+=Dir[i];
				}
			}
		}
		
		printf("%d\n",Pares);
	}
	return 0;
}