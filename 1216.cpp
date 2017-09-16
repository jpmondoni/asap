#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(){
	double dist, media=0, i=0, soma=0;
	string nome;

	while(getline(cin,nome)){
		cin >> dist;
		getchar();
		soma+=dist;
		i++;
	}
	media = soma/i;

	cout << fixed << setprecision(1) << media << endl;

}