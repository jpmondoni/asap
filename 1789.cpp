#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int nles;
	
	while(cin >> nles){
		vector<int> vls;
		for(int i=0;i<nles;i++){
			int aux;
			cin >> aux;
			vls.push_back(aux);
		}
		sort(vls.begin(), vls.end());

		if(vls[nles-1] < 10){
			cout << "1\n";
		}
		else if(vls[nles-1] >=10 && vls[nles-1] < 20 ){
			cout << "2\n";
		}
		else if(vls[nles-1] >= 20){
			cout << "3\n";
		}

	}
	return 0;
}