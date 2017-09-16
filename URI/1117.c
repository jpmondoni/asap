#include <stdio.h>

int main(){
	double nota, media=0, i=0;

	while(1){
		scanf("%lf",&nota);

		if(nota < 0  || nota > 10){
			printf("nota invalida\n");
		} else {
			media=media+nota;
			i++;
		}
		
		if(i == 2) break;
	}

	media=media/2;
	printf("media = %.2lf\n",media);
}