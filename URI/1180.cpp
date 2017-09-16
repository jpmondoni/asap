#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> x;
	int n, aux, tmp=0, pos=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> aux;
		x.push_back(aux);
	}

	for(int j=0;j<x.size();j++){
		if(j==0)
			tmp=x[j];
		
		if(x[j] < tmp ){
			tmp=x[j];
			pos=j;
		}
	}
	cout << "Menor valor: " << tmp << endl;
	cout << "Posicao: " << pos << endl;
}