#include <stdio.h>

int main(){
	int t,r=0,v[6],i;
	scanf("%d",&t);

	for(i=0;i<5;i++){
		scanf("%d",&v[i]);
	}
	
	for(i=0;i<5;i++){
		if(v[i]==t){
			r++;
		}
	}


	

	printf("%d\n",r);

	return 0;

}