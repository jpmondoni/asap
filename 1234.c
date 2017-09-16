#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char sentence[50]="this is example";
	int i=0, aux;
	//gets(sentence);

	aux = strlen(sentence);

	do{

		if(sentence[i] == ' '){
			printf("passou %d\n",i);
			fsent[i]=sentence[i];
			i++;
			continue;

		}
		if(i == 0){
			fsent[i]=toupper(sentence[i]);
			i++;
			continue;

		} else if ((sentence[i-1] >= 97) && (sentence[i-1] <= 122) ) {
			printf("\n \t passou aqui\n");
			printf("i-1 = %c\n",sentence[i-1]);
			fsent[i]=toupper(sentence[i]);
			i++;
			continue;

		} else {
			fsent[i]=toupper(sentence[i]);
			i++;
			continue;
		}
	} while (i<aux);

	printf("%s\n",fsent);

	return 0;

}