#include <stdio.h>
#include <iostream>

using namespace std;
int main (){
    int N,X,Y,i,t,j,soma=0,Z;
    
    cin >> N;

    for(t=1;t<=N;t++){
	    scanf("%d %d",&X,&Y);
	    soma=0;
	    Z=((Y*2)-1)+X;
	    for(i=X;i<=Z;i++){
	    	if(i%2)	
	    		soma=soma+i;
		}
	printf("%d\n",soma);
 	}
}