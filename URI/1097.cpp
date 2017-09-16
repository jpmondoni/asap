#include <iostream>

using namespace std;

int main(){
	int i, j, x;

	x=7;
	for(i=1;i<=9;i+=2){
		for(j=x;j>=x-2;j--){
			cout << "I=" << i << " J=" << j << "\n";
		}
		x+=2;
	}

}