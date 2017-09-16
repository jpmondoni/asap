#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,v[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
			scanf("%d",&v[i]);
	}
	for(i=0;i<n;i++){
		if(v[i]%2 == 0 && v[i] > 0){
			printf("EVEN POSITIVE\n");
		} else if (v[i]%2 == 0 && v[i] < 0){
			printf("EVEN NEGATIVE\n");			
		} else if (v[i]%2 != 0 && v[i] > 0){
			printf("ODD POSITIVE\n");
		} else if (v[i]%2 != 0 && v[i] < 0){
			printf("ODD NEGATIVE\n");			
		} else if (v[i] == 0){
			printf("NULL\n");
		}
	}
	return 0;
}