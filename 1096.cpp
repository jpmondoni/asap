#include <iostream>

using namespace std;

int main(){
	int i, j;

	for(i=1;i<=9;i+=2){
		for(j=7;j>=5;j--){
			cout << "I=" << i << " J=" << j << "\n";
		}
	}

}


// j-1,j-1,j-1
// i+1
// j-1,j-1,j-1
// i+i
// .
// .
// .
// i=9,j=5