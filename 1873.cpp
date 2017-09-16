#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int n;
	string a, b;
	cin >> n;
	cin.ignore();
	string raj = "rajesh\n";
	string she = "sheldon\n";
	while(n--){
		cin >> a >> b;
		if(a == b) cout <<"empate\n";
		else if(a == "tesoura" && b == "papel") cout << raj;
		else if(a == "papel" && b == "pedra") cout << raj;
		else if(a == "pedra" && b == "lagarto") cout << raj;
		else if(a == "lagarto" && b == "spock") cout << raj;
		else if(a == "spock" && b == "tesoura") cout << raj;
		else if(a == "tesoura" && b == "lagarto") cout << raj;
		else if(a == "lagarto" && b == "papel") cout << raj;
		else if(a == "papel" && b == "spock") cout << raj;
		else if(a == "spock" && b == "pedra") cout << raj;
		else if(a == "pedra" && b == "tesoura") cout << raj;
		else if(b == "tesoura" && a == "papel") cout << she;
		else if(b == "papel" && a == "pedra") cout << she;
		else if(b == "pedra" && a == "lagarto") cout << she;
		else if(b == "lagarto" && a == "spock") cout << she;
		else if(b == "spock" && a == "tesoura") cout << she;
		else if(b == "tesoura" && a == "lagarto") cout << she;
		else if(b == "lagarto" && a == "papel") cout << she;
		else if(b == "papel" && a == "spock") cout << she;
		else if(b == "spock" && a == "pedra") cout << she;
		else if(b == "pedra" && a == "tesoura") cout << she;
		
	}
	return 0;
}