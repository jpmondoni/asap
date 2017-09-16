#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n, al;
	double sum, pct, am;
	cin >> n;
	while(n--){
		sum=0;
		am=0;
		pct=0;
		cin >> al;
		int notas[al];

		for(int i=0;i<al;i++){
			cin >> notas[i];
			sum+=notas[i];
		}

		for(int i=0;i<al;i++){
			if(notas[i] > sum/al){
				am++;
			}
		}


		pct = am/al*100;
		cout << fixed << setprecision(3) << pct << "%\n";
	}

	return 0;
}