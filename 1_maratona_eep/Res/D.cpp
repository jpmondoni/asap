#include <stdio.h>
#include <stdlib.h>

int main(){
	int hi,hf,mi,mf,dif;
	int mini,minf;

	scanf("%d %d %d %d",&hi, &mi, &hf, &mf);

	mini=(hi*60)+mi;
	minf=(hf*60)+mf;
	
	if (minf > mini)
		printf("%d\n",minf-mini);
	else if(mini > minf)
		printf("%d\n",(1440-mini+minf));
	else
		printf("1440\n");
	
	return 0;
}



