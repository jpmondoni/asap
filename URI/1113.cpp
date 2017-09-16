#include <iostream>

using namespace std;

int main(){
	int x, y, s=0;
	
	cin >> x >> y;

	while(s==0){
		if (x < y){
			cout << "Crescente\n";
		} else if (x > y){
			cout << "Decrescente\n";
		} else if (x == y){
			s=1;
			continue;
		}
		cin >> x >> y;
	}

	return 0;

}