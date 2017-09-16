#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, pointer;
	cin >> n;
	for(int i=0;i<n;i++){
		int jog;
		cin >> jog;
		vector<int> age;
		for(int j=0;j<jog;j++){
			int aux;
			cin >> aux;
			age.push_back(aux);
		}

		pointer = jog/2;

		cout << "Case " << i+1 << ": " << age[pointer] << endl;

	}
}