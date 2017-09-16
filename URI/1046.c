#include <stdio.h>
#include <stdlib.h>

int main()
{
	int ini=0,fim=0,dur;
	scanf("%d %d",&ini,&fim);

	if(ini==0) ini=24;
	if(fim==0) fim=24;

	if(fim==ini){
		dur=24;
	} else if(fim > ini){
		dur=fim-ini;
	} else {
		dur=(24-ini)+fim;
	}
	printf("O JOGO DUROU %d HORA(S)\n",dur);


	return 0;
}