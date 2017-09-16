#include <iostream>

using namespace std;

int main(){

	int p[6], t[6];
	int i;

	for (i=1;i<6;i++){
		cin >> p[i];
	}
	for (i=1;i<6;i++){
		cin >> t[i];
	}

 	if ((p[1]==1 && t[1]==0) || (p[2]==1 && t[2]==0) || (p[3]==1 && t[3]==0) || (p[4]==1 && t[4]==0) || (p[5]==1 && t[5]==0)) {
        cout << "Y\n";
    }
    else {
        cout << "N\n";
    }
}