#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int a, b, c;
	while(scanf("%d %d",&a, &b), a+b > 0){
		int c = a + b;
		ostringstream convert;
		convert << c;
		string Soma = convert.str();
		for(int i = 0 ; i < Soma.size(); i++){
			if(Soma[i] != '0'){
				putchar(Soma[i]);
			}
		}
		printf("\n");	

		Soma = "";
	}

	return 0;
}

