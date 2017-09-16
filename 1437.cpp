#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, pos;


	while(cin >> n){
		if(n==0)
			break;
		pos=1;
		char dir[n];
		for(int i=0;i<n;i++){
			cin >> dir[i];
			if(dir[i]=='D'){
				pos++;

				if(pos > 4)
					pos=1;
			}

			else if(dir[i]=='E'){
				pos--;

				if(pos < 1)
					pos = 4;
			}
		}
		
		if(pos == 1)
			cout << "N\n";
		else if(abs(pos)==2)
			cout << "L\n";
		else if(abs(pos)==3)
			cout << "S\n";
		else if(abs(pos)==4)
			cout << "O\n"; 
	}



}