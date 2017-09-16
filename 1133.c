#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x,y,i,r;
	scanf("%d %d",&x,&y);

	if(y > x){
		for(i=x+1;i<y;i++){
			if(i%5 == 2 || i%5 == 3){
				printf("%d\n",i);	
			}
		}
	} else {
		for(i=y+1;i<x;i++){
			if(i%5 == 2 || i%5 == 3){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}