#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
	
	char Caracteres[1001];
	while(gets(Caracteres)){
		int Tamanho =strlen(Caracteres);
		map<int, char> Mapa;
		for(int i=0;i<Tamanho;i++){
			Mapa.insert(pair<int, char>(Caracteres[i], Caracteres[i]));
		}

		int QtA = Mapa.count('A');
		printf("65 = %d\n", QtA);
	}
}