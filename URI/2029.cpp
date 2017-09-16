#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	double d,v,h,a;

	while( cin >> v >> d && !cin.eof()){
		if(v >= 1.00 && v <= 10000.00 && d >= 1.00 && d <= 100.00){
			h=v/(3.14*pow(d/2,2));
			cout << "ALTURA = " << fixed << setprecision(2) << h << endl;
			a=(3.14*pow(d/2,2));
			cout << "AREA = " << fixed << setprecision(2) << a << endl;
		}	
	}

	return 0;	

}