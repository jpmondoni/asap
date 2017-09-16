#include <iostream>

using namespace std;

int main(){
	int i, t;

	while(cin >> t && t!=0){

		for(i=1;i<=t;i++){
			if(i==t)
				cout << i << endl;
			else
				cout << i << " ";
		}
	}

	return 0;

}