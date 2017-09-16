#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, q, c;

	scanf("%d",&n);
	if(n > 1 && n < 1000){
		for (i = 1; i<n+1; i++){
			q=i*i;
			c=i*i*i;
			printf("%d %d %d\n",i,q, c);

		}
	}
	return 0;
}