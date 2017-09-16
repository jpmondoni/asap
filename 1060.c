#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,p=0;
	float v[6];
	for(i=0;i<6;i++){
		scanf("%f",&v[i]);
	}
	for(i=0;i<6;i++){
		if(v[i] > 0){
				p++;
		}
	}
	printf("%d valores positivos\n",p);
	return 0;
}