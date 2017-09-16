#include <iostream>

using namespace std;

int main(){
	int m,n,sum;
	int i;

	cin >> m >> n;
	while(m> 0 && n> 0){
		sum=0;
		if(m > n){
			for(i=n;i<=m;i++){
				cout << i << " ";
				sum+=i;
			}
			cout << "Sum=" << sum << "\n";
		} 

		else if(m < n){
			for(i=m;i<=n;i++){
				cout << i << " ";
				sum+=i;
			}
			cout << "Sum=" << sum << "\n";
		}

		cin >> m >> n;
	}
	return 0;
}