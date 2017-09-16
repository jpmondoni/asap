#include <iostream>

using namespace std;

int main(){
	long int a, b;
	long int ca, cb;
	int i, x=10, n;
	
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a >> b;
		x=10;
		ca=a;
		cb=b;

		if(a == b)
			cout << "encaixa\n";
		if(a < b)
			cout << "nao encaixa\n";

		if(b < a){

			a = ca%10;
			while(a != ca){
				if(a == b){
					cout << "encaixa\n";
					break;
				}
				else{
					x = x * 10;
					a = ca % x;
				}
			}
			if(a!=b){
				cout << "nao encaixa\n";
			}
		}

	}
}