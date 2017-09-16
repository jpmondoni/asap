#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	char j1[50], j2[50];
	
	cin >> n;
	while(n--){
		cin >> j1 >> j2;
		if(j1[1]=='e' && j2[1]=='e')
			cout << "Sem ganhador\n";
		else if(j1[1]=='t' && j2[1]=='t')
			cout << "Aniquilacao mutua\n";
		else if(j1[1]=='a' && j2[1]=='a')
			cout << "Ambos venceram\n";
		else if(j1[1]=='t' || (j1[1]=='e' && j2[1]=='a'))
			cout << "Jogador 1 venceu\n";
		else
			cout << "Jogador 2 venceu\n";
	}

	return 0;





}