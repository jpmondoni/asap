#include <stdio.h>
#include <stdlib.h>

int main(){
	float s,ns,r;
	int pct;
	scanf("%f",&s);

	if(s > 0 && s <= 400.00){
		pct=15;
		r=s*0.15;
		ns=s+r;		
	} else if(s >= 400.01 && s <= 800.00){
		pct=12;
		r=s*0.12;
		ns=s+r;
	} else if(s >= 800.01 && s <= 1200.00){
		pct=10;
		r=s*0.10;
		ns=s+r;
	} else if(s >= 1200.01 && s <= 2000.00){
		pct=7;
		r=s*0.07;
		ns=s+r;
	} else if(s > 2000){
		pct=4;
		r=s*0.04;
		ns=s+r;
	}
	printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n",ns,r,pct);
	return 0;
}