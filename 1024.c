#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inplace_reverse(char * str){
  if (str)
  {
    char * end = str + strlen(str) - 1;

	#define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
	#undef XOR_SWAP
  }
}

int main(){
	int n,i,j,size;
	char txt[1001];

	scanf("%d",&n);
	getchar();

	for(j=0;j<n;j++){
		gets(txt);
		size=strlen(txt);

		char aux[size];

		for(i=0;i<size;i++){
			if (txt[i] >='a' && txt[i] <= 'z' || txt[i] >='A' && txt[i] <= 'Z') 
				txt[i]=txt[i]+3;
		}
		inplace_reverse(txt);

		for(i=0;i<size;i++){
			if(i >= (size/2)){
				txt[i]=txt[i]-1;
			}
		}
		
		printf("%s\n",txt);
	}
	return 0;

}