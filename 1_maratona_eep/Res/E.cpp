#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int Estaturas[51]={0};
	int QuantiaAnoes;
	scanf("%d",&QuantiaAnoes);
	for(int i=0;i<QuantiaAnoes;i++){
		int aux;
		int j;
		scanf("%d",&aux);
		j=aux-100;
		Estaturas[j]++;
	}
	for(int i=0;i<51;i++){
		if(Estaturas[i]!=0){
			printf("%d - %d\n",i+100,Estaturas[i]);
		}
	}

}