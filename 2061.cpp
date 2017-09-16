#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;

	scanf("%d %d",&n, &t);

	for(int i = 0 ; i < t ; i++){
		string aux;
		cin >> aux;
		if(aux=="clicou"){
			n--;
		}
		else
			n++;
	}

	printf("%d\n",n);

}