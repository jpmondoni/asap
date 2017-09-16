#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hi,hf,mi,mf;
	int durh=0,durm=0;

	scanf("%d %d %d %d",&hi,&mi,&hf,&mf);

	if(hi >= hf && mi > mf){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24-hi)+hf)-1,60-(mi-mf));
	}
	else if(hi == hf && mi == mf){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24-hi)+hf),mi-mf);
	}
	else if(hi <= hf && mi > mf){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(hf-hi)-1,60-(mi-mf));
	}
	else if(hi > hf && mi == mf){
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",((24-hi)+hf),mi-mf);
	}
	else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf-hi,mf-mi);
	}


	return 0;
}

