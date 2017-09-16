#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, i;
	double n1, n2, n3, mf;

	cin >> n;

	for(i=0;i<n;i++){
		cin >> n1 >> n2 >> n3;
		n1=n1*0.2;
		n2=n2*0.3;
		n3=n3*0.5;

		mf=n1+n2+n3;

		cout << fixed << setprecision(1) << mf << "\n";
	}

	return 0;	

}