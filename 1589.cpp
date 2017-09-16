#include <iostream>

using namespace std;

int main(){
	int t, r1, r2, i;

	cin >> t;

	if (t <= 1000){
		for(i=0;i<t;i++){
			cin >> r1 >> r2;
			cout << r1+r2 << endl;	
		}
	}

	return 0;

}