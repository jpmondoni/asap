#include <iostream>

using namespace std;

bool check(int n, int a, int b){
	for(int i = a; i <= b; ++i){
		if(n==i)
			return true;
	}

	return false;
}

int main(){
	int n;
	while(cin >> n){
		int la, lb, sa, sb;
		cin >> la >> lb >> sa >> sb;
		if(check(n, la, lb) && check(n, sa, sb))
			cout << "possivel\n";
		else
			cout << "impossivel\n";
	}
	return 0;
}