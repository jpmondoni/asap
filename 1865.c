#include <stdio.h>
#include <stdlib.h>

int main(){
	int c=0,n=0, i;
	char nome[30],yn;

	scanf("%d",&c);

	for(i=0;i<c;i++){
		gets(nome);
		scanf("%d", &n);

		if(nome == "Thor"){
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}
	
}