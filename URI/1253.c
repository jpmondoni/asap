#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char in[26],out[26];
	int i, aux;

	gets(in);

	aux = strlen(in);
	for(i=0;i<aux;i++){
		if(in[i]=='Z'){
			in[i]=='C';
		} else if(in[])
		out[i]=in[i]+=3;

	}

	printf("%s\n",out);

	return 0;



}