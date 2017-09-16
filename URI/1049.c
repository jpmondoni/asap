#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char vert[14], tipo[10], alim[11], res[12];
	gets(vert);
	gets(tipo);
	gets(alim);

	if (strcmp(vert,"vertebrado")==0){
		if(strcmp(tipo,"ave")==0){
			if(strcmp(alim,"carnivoro")==0){
				strcpy(res,"aguia");
			} else if (strcmp(alim,"onivoro")==0){
				strcpy(res,"pomba");
			}
		} else if (strcmp(tipo,"mamifero")==0){
			if(strcmp(alim,"onivoro")==0){
				strcpy(res,"homem");
			} else if(strcmp(alim,"herbivoro")==0){
				strcpy(res,"vaca");
			}
		}
	} else if(strcmp(vert,"invertebrado")==0){
		if(strcmp(tipo,"inseto")==0){
			if(strcmp(alim,"hematofago")==0){
				strcpy(res,"pulga");
			} else if(strcmp(alim,"herbivoro")==0){
				strcpy(res,"lagarta");
			}
		} else if(strcmp(tipo,"anelideo")==0){
			if(strcmp(alim,"hematofago")==0){
				strcpy(res,"sanguessuga");
			} else if(strcmp(alim,"onivoro")==0){
				strcpy(res,"minhoca");
			}
		}

	} else return 0;

	printf("%s\n",res);
	return 0;

}