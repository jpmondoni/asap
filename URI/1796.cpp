#include <iostream>

using namespace std;

int main(){
	int np, v, s=0, n=0, i;

	cin >> np;
	for(i=0;i<np;i++){
		cin >> v;
		if(v==0) s++;
		if(v==1) n++;
	}
	if(n>=s) cout << "N\n";
	else cout << "Y\n";

	return 0;

}