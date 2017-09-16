#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int c, x, y, i, ra, be, ca;

	cin >> c;
	for(i=0;i<c;i++	){
		cin >> x >> y;
		ra = pow((3*x),2) + pow(y,2);
		be = 2*pow(x,2) + pow((5*y),2);
		ca = -100*x + pow(y,3);
		if(ra > ca && ra > be)
			cout << "Rafael ganhou\n";
		else if(ca > ra && ca > be)
			cout << "Carlos ganhou\n";
		else if(be > ra && be > ca)
			cout << "Beto ganhou\n";
	}

	return 0;
}