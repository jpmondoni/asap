#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, i;
	
	scanf("%d",&x);

	if (x >= 1 && x <= 1000){
		for(i=0;i<=x;i++){
			if(i%2 == 1){
				printf("%d\n",i);
			}
		}
	}
	return 0;

}