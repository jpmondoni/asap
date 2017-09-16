#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,pos=0;
	float n[6], media=0;
	for(i=0;i<6;i++){
		scanf("%f",&n[i]);
	}
	for(i=0;i<6;i++){			
		if (n[i] > 0){
			media=media+n[i];
			pos++;
		}
	}
	media=media/pos;	
	printf("%d valores positivos\n%.1f\n",pos,media);
	return 0;
}