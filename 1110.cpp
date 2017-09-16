#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	while(cin >> n && n!=0){
		vector<int> Cartas;
		vector<int> Descartadas;

		for(int i=1; i<=n; i++){
			Cartas.push_back(i);
		}

		reverse(Cartas.begin(), Cartas.end());

		while(Cartas.size() > 1){
			Descartadas.push_back(Cartas.back());
			Cartas.pop_back();
			Cartas.insert(Cartas.begin(), Cartas.back());
			Cartas.pop_back();

		}

		cout << "Discarded cards:";
		for(int i=0;i<Descartadas.size();i++){
			if(i==0)
				cout << " ";
			
			cout << Descartadas.at(i);
			
			if(i!=Descartadas.size()-1)
				cout << ", ";	
		}
		cout << endl;

		cout << "Remaining card: ";
		for(int i=0;i<Cartas.size();i++)
			cout << Cartas.at(i);

		cout << endl;

	}

}