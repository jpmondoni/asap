#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, pos=1, c;

	scanf("%d",&n);

	int v[n];

	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	c=v[0];

	for(i=0;i<n;i++){
		if(v[i] < c) {
			c=v[i];
			pos=i+1;
		}
	}

	printf("%d\n",pos);
	return 0;
}