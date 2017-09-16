#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n[5],par=0,imp=0,pos=0,neg=0;
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++){
		if(n[i]%2 == 0){
			par++;
		}
		if (n[i]%2 != 0){
			imp++;
		}
		if (n[i] > 0){
			pos++;
		}
		if (n[i] < 0) {
			neg++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",par,imp,pos,neg);
	return 0;
}