#include <stdio.h>
#include <stdlib.h>

int main(){
	float renda,imp;

	scanf("%f",&renda);

	if(renda >= 0 && renda <= 2000.00){
		printf("Isento\n");
	} else if(renda >= 2000.01 && renda <= 3000.00){
		imp=(renda-2000.00)*0.08;
		printf("R$ %.2f\n",imp);
	} else if(renda >= 3000.01 && renda <= 4500.00){
		imp=80.00+((renda-3000.00)*0.18);
		printf("R$ %.2f\n",imp);
	} else if(renda >= 4500.01){
		imp=350.00+((renda-4500.00)*0.28);
		printf("R$ %.2f\n",imp);
	}
	return 0;
}