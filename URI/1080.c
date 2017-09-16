#include <stdio.h>
#include <stdlib.h>

int main(){
	int v[101], aux, maior=0, pos=0, i;

	for(i=0;i<100;i++){
		scanf("%d",&v[i]);
		if(v[i] > maior){
			maior = v[i];
			pos = i+1;
		}
		
	}
	printf("%d\n%d\n",maior,pos);

	return 0;

}