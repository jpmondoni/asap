#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	double aux,r=0,i=3,j=2;
	for(i=3;i<40;i+=2){
		aux=i/j;
		r+=aux;
		j*=2;
	}


	printf("%.2lf\n",r+1);
}