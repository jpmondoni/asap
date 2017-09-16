#include <stdio.h>
#include <stdlib.h>

int main(){
	int hi,hf,mi,mf,dif;
	int mini,minf;

	scanf("%d %d %d %d",&hi, &mi, &hf, &mf);
	while(hi != 0 || hf != 0 || mi != 0 || mf != 0){

		mini=(hi*60)+mi;
		minf=(hf*60)+mf;

		if (minf > mini){
			printf("%d\n",minf-mini);
		} else if(mini > minf){
			printf("%d\n",(1440-mini+minf));
		} else {
			printf("0\n");
		}
		scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	}
	return 0;
}



