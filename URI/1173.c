#include <stdio.h>


int main(){
	int v, x, i;
	int n[10];

	scanf("%d",&v);


	for(i=0;i<10;i++){
		if(i==0){
			n[i] = v;
		}
		else{
			n[i] = n[i-1]*2;
		}
	}
	for(i=0;i<10;i++){
		printf("N[%d] = %d\n",i,n[i]);
	}

	return 0;
}