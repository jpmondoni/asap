#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

int main(){ 
	vector<int> pulos;
	int h, n, dif;

	cin >> h >> n;

	for(int i=0;i<n;i++){
		int aux;
		cin >> aux;
		pulos.push_back(aux);
	}
	int k=0;
	for(int j=1;j<n;j++){
		if(pulos[j] > pulos[j-1])
			dif = (pulos[j] - pulos[j-1]);
		else
			dif= (pulos[j-1] - pulos[j]);
		if(dif <= h)
			k++;
	}

	if(k==n-1)
		cout << "YOU WIN\n";
	else
		cout << "GAME OVER\n";

	return 0;


}