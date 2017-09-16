#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;

	cin >> n;

	while(n--){
		int ano, dif;
		cin >> dif;
		
		if(dif < 2015){
			ano = 2015-dif;
			cout << ano << " D.C.\n";
		}
		else{
			ano = dif-2014;
			cout << ano << " A.C.\n";	
		}
	}

	return 0;
}