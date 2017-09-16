#include <iostream>

using namespace std;

int main(){
	int x, z, soma=0, c=1;
	cin >> x >> z;
	while(z<=x){
		cin >> z;
	}

	while(x+soma < z){
		soma+=x+c;
		c++;
	}

	cout << c << endl;

}