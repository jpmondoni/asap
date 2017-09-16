#include <stdio.h>
#include <stdlib.h>

int main(){
	int vj=0, vm=0;
	int i, n, v[10000];

	scanf("%d",&n);
	while(n !=0){
		for(i=0;i<n;i++){
			scanf("%d",v[i]);
		}
		for(i=0;i<n;i++){
			if(v[i]==0) vm++;
			else if(v[i]==1) vj++;
		}
		printf("Mary won %d times and John won %d times\n",vm,vj);
		scanf("%d",&n);

	}

}