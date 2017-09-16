#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int cas, cod, qt,i=0;
	float tot=0, pr=0;
	cin >> cas;

	while(i<cas){
		cin >> cod >> qt;
		switch(cod){
			case 1001:
				pr=qt*1.50;
			break;

			case 1002:
				pr=qt*2.50;
			break;

			case 1003:
				pr=qt*3.50;
			break;

			case 1004:
				pr=qt*4.50;
			break;

			case 1005:
				pr=qt*5.50;
			break;
		}
		tot+=pr;
		i++;
	}
	cout << fixed << setprecision(2) << tot << '\n';

	return 0;
}