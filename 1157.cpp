#include <iostream>

using namespace std;

int main(){
	int i,j;

	cin >> j;
	for(i=1;i<=j;i++){
		if(j%i==0){
			cout << i << endl;
		}
	}
	return 0;
}
