#include <iostream>

using namespace std;

int main(){
	long long int x, y;
	int z;
	while (cin >> x >> y){
		if (x > y)
			cout << x-y << endl;
		else
			cout << y-x << endl;

	}
	return 0;
}