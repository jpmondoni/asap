#include <iostream>

using namespace std;

int main(){
	int n;

	cin >> n;
	int q=0;
	for(int i=n;i>0;i--){
		q += i*i;
	}


	cout << q << endl;

}