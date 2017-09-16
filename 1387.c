#include <stdio.h>
#include <stdlib.h>

int main(){
	int L, R, S;

	while (L != 0 && R != 0){
		scanf("%d %d",&L, &R);
		if(L >= 1 && R <= 5){
			S=L+R;
			printf("%d\n",S);
		}		
	}

	return 0;

}