#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n, j, led=0;
	char num[1000000],aux;

	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(num);
		led=0;
		for(j=0;num[j] != '\0' ;j++){
			aux=num[j];
			if(aux=='1'){
				led+=2;
			} else if(aux=='7'){ 
				led+=3;
			} else if(aux=='4'){
				led+=4;
			} else if (aux=='2' || aux=='3' || aux=='5'){
				led+=5;
			} else if(aux=='6' || aux=='9' || aux=='0'){
				led+=6;
			} else if(aux=='8'){
				led+=7;
			}
		}
		
		printf("%d leds\n",led);
	}
	
	return 0;
}