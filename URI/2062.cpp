#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	vector<string> Palavras;
	string aux;
	for(int i = 0 ; i < n ; i++){
		cin >> aux;
		if(aux.size() == 3){
			if(aux[0]=='O' && aux[1]=='B' || aux[1]=='B' && aux[2]=='I' || aux[0]=='O' && aux[2]=='I')
				aux = "OBI";
			else if(aux[0]=='U' && aux[1]=='R' || aux[1]=='R' && aux[2]=='I' || aux[0]=='U' && aux[2]=='I')
				aux = "URI";
		}
		Palavras.pb(aux);
	}
	int tam = Palavras.size();
	for(int i = 0 ; i < tam-1 ; i++){
		cout << Palavras[i] << " ";
	}
	cout << Palavras[tam-1] << endl;
}