#include <stdio.h>


int main(){
	int n, i, f1=0, f2=1, aux;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		if(i==0 || i==1) printf("%d ",i);
		else if(i==n-1){
			aux=f1+f2;
			f1=f2;
			f2=aux;
			printf("%d",aux);
		}

		else{
			aux=f1+f2;
			f1=f2;
			f2=aux;
			printf("%d ",aux);
		}	
	}
	
	printf("\n");
	return 0;

}