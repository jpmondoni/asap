#include <bits/stdc++.h>

using namespace std;

int main(){
	int S, T, F;
	scanf("%d %d %d", &S, &T, &F);

	int L;

	L = S+T+F;

	if(L >= 24){
		L = L - 24;	
	}
	else if(L < 0){
		L = 24 + L;
	}
	
	printf("%d\n",L);
}