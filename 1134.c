#include <stdio.h>

int main(){
	int c, al=0, gas=0, die=0;

	
	while(1){
		
		scanf("%d",&c);

		if(c == 4) break;

		if(c == 1) al++;
		if(c == 2) gas++;
		if(c == 3) die++;
	}

	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,gas,die);

	return 0;
}