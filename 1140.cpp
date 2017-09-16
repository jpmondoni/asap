#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main (){
	char str[1051];
	char * pch;
	while(gets(str) && str[0]!='*'){
		pch = strtok(str," ");
		char first = tolower(pch[0]);
//		printf("PRIMEIRO >>>> %c\n",first);	
		bool res = true;
		while (pch != NULL){
			if(res){
				if(first==tolower(pch[0])){
					res = true;
				}
				else{
					res = false;
					break;
				}
			}
//			printf ("%s\n",pch);
//	  		tolower(pch[1]);
//	  		printf("PCH[0]==%c\n",pch[0]);
	  		pch = strtok (NULL, " ");
		}
		if(res)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}