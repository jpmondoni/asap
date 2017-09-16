#include <stdlib.h>
#include <stdio.h>


int main(){
	int n, i, m;

	scanf("%d",&n);

	for(i=1;i<=(4*n);i++){
		if(i%4 == 0){
			printf("PUM\n");
		}else printf("%d ",i);
	}
	return 0;
}