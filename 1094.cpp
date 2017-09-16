#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	char bixo;
	double ex, qt=0, tc=0, tr=0, ts=0, tt=0;
	double pc, pr, ps;

	cin >> ex;

	for(int i=0;i<ex;i++){
		cin >> qt >> bixo;
		tt+=qt;
		if(bixo == 'C'){
			tc+=qt;
		} else if (bixo == 'R'){
			tr+=qt;
		} else if (bixo == 'S'){
			ts+=qt;
		}

	}
	pc=(tc*100)/tt;
	pr=(tr*100)/tt;
	ps=(ts*100)/tt;
	cout << "Total: " << tt << " cobaias\n";
	cout << "Total de coelhos: " << tc << endl;
	cout << "Total de ratos: " << tr << endl;
	cout << "Total de sapos: " << ts << endl;
	cout << "Percentual de coelhos: " << fixed << setprecision(2) << pc << " %\n";
	cout << "Percentual de ratos: " << fixed << setprecision(2) << pr << " %\n";
	cout << "Percentual de sapos: " << fixed << setprecision(2) << ps << " %\n";

}