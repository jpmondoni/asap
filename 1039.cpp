#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double r1, x1, y1;
	double r2, x2, y2;

	while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){
		double DistanciaEuclidiana;
		DistanciaEuclidiana = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
		if(r1 - DistanciaEuclidiana >= r2)
			cout << "RICO\n";

		else
			cout << "MORTO\n";
	}

	return 0;

}