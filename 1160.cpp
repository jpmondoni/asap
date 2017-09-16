#include <iostream>

using namespace std;

int main(){
	int t, pa, pb, c=0;
	double ga, gb;

	cin >> t;
	for(int i=0;i<t;i++){
		c=0;
		cin >> pa >> pb >> ga >> gb;
		while (pa <= pb){
			pa *= (ga/100.0)+1.0;
			pb *= (gb/100.0)+1.0;
			c++;
			if(c > 100){
				cout << "Mais de 1 seculo.\n";
				break;
			}
		}

		if(c <= 100) cout << c << " anos.\n";

	}
	
	return 0;	
	
		
}