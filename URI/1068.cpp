/*
Adicionar parenteses em uma pilha.
Ir desempilhando pra verificar se está balanceado.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

int main(){
	
	string Expressao;
	stack<char> Pilha;

	while(cin >> Expressao){
		int Contador=0;
		int TamExpressao = Expressao.size();
		for(unsigned int i=0;i<TamExpressao;++i){
				Pilha.push(Expressao[i]);
		}

		while(Pilha.empty()==false){
			if (Contador < 0)
			if(Pilha.top()=='('){
				Contador++;
				Pilha.pop();	
			}		
			else if(Pilha.top()==')'){
				Contador--;
				Pilha.pop();
			}
			else
				Pilha.pop()
		}
		if(Contador==0)
			cout << "correct\n";
		else
			cout << "incorrect\n";
	}
	return 0;
}