#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int i, j, t;

	cin >> t;
	for(i=0, j=0;i<1000;i++){
		printf("N[%d] = %d\n",i,j);
		if(j<t-1)
			j++;
		else
			j=0;
	}
}