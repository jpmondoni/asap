#include <stdio.h>
#include <stdlib.h>

int main(){
	int jog,pa=0,pb=0,a=0,b=0,i;


	while(jog != 0){
		pa=0;
		pb=0;
		scanf("%d",&jog);
		for(i=0;i<jog;i++){
			scanf("%d %d",&a,&b);
			if(a > b){
				pa++;
			} else if (b > a){
				pb++;
			}
		} 
		if(jog != 0){
			printf("%d %d\n",pa,pb);
		}
	} 

}