#include <iostream>

using namespace std;

int main(){
	int c=0,n=0, i;
	string nome;

	cin >> c;

	for(i=0;i<c;i++){
		cin >> nome;
		cin >> n;
		if(nome=="Thor"){
			cout << "Y\n";
		} else {
			cout << "N\n";
		}
	}
	
	return 0;
}

