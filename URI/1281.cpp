#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(){
	int n, p, q, qt;
	double Preco, Resultado;
	string Fr;
	map<string, double> Mapa;

	cin >> n;

	while(n--){
		Resultado=0.0;
		Mapa.clear();

		cin >> p;

		while(p--){
			cin >> Fr >> Preco;
			Mapa[Fr] = Preco;
		}

		cin >> q;

		while(q--){
			cin >> Fr >> qt;
			Resultado += Mapa[Fr]*qt;
		}

		printf("R$ %.2lf\n",Resultado);
	}
}