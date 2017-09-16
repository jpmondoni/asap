#include <iostream>
#include <iomanip>


using namespace std;

int main(){
	int i=0;
	double m, n, f=0;

	while(cin >> n && n >=0){
		f+=n;
		i++;
	}
	m=f/i;

	cout << fixed << setprecision(2) << m << endl;
}