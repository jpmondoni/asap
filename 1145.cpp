#include <iostream>

using namespace std;

int main(){
	int n, f, i, j;

	cin >> n >> f;

	for(i=1;i<=f;){
		for(j=0;j<n;j++){
			if(i<=f){
				cout << i;
				if(j!=n-1 && i!=f)
					cout << " ";
				i++;
			}
			else
				break;	
		}
		cout << endl;
	}


}