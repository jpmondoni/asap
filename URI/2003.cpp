#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int h, m, h8;
	char dp;


	cin >> h >> dp >> m;
	while(!cin.eof()){
		h=h*60;
		m=m+h;
		h8=8*60;

		if(m>=300 && m<=540){
			if(h8-60 > m) cout << "Atraso maximo: 0\n";
			else cout << "Atraso maximo: " << abs(60-(h8-m)) << endl;
		}
		cin >> h >> dp >> m;
	}

	return 0;

}