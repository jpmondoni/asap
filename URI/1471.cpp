#include <iostream>

using namespace std;

 
int main(){
	int n, r, i, j;
	bool c;


	while(cin >> n >> r){
		int v[r];

		for(i=0;i<r;i++){
			cin >> v[i];
		}
		if(n==r){
			cout << "*" << endl;
			continue;
		}

		for(i=1;i<=n;i++){
			c = true;
			for(j=0;j<r;j++){
				if(v[j]==i){
					c = false;
					break;
				}
			}
			if(c) cout << i << " ";
		}
		cout << endl;
	
	}
	return 0;


}