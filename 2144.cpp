#include <bits/stdc++.h>

using namespace std;

int main(){
	double w1, w2, r, SomaM=0;
	double esq, dir;
	int i=0;
	while(scanf("%lf %lf %lf", &w1, &w2, &r) && w1+w2+r!=0){
		esq = w1*(1+r/30);
		dir = w2*(1+r/30);
		int m = (esq+dir)/2;
		if(m >= 1 && m < 13)
			printf("Nao vai da nao\n");
		else if(m >= 13 && m < 14)
			printf("E 13\n");
		else if(m >= 14 && m < 40)
			printf("Bora, hora do show! BIIR!\n");
		else if(m >= 40 && m <= 60)
			printf("Ta saindo da jaula o monstro!\n");
		else if(m > 60)
			printf("AQUI E BODYBUILDER!!\n");
		
		SomaM+=m;
		i++;
	}

	if(SomaM/i > 40)
		printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");



	return 0;
}