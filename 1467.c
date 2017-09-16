#include <stdio.h>
#include <stdlib.h>


int main(){
	int a,b,c;

	while(scanf("%d %d %d",&a,&b,&c) != EOF){
		if(a == b && a == c && b == c){
			printf("*\n");
		}
		else if(a!=b && a!=c){
			printf("A\n");
		}
		else if(b!=a && b!=c){
			printf("B\n");
		}
		else if(c!=a && c!=b){
			printf("C\n");
		}
	}

	return 0;


}