#include <iostream>

using namespace std;

int main(){
	int op, golg, goli, vg=0, vi=0, e=0, venc, gn=0;

	cin >> goli >> golg;
	if(golg > goli)	vg++;
	else if (goli > golg) vi++;
	else if(goli == golg) e++;
	cout << "Novo grenal (1-sim 2-nao)\n";
	gn++;
	while(cin >> op && op != 2){
		cin >> goli >> golg;
		if(golg > goli)	vg++;
		else if (goli > golg) vi++;
		else if(goli == golg) e++;
		cout << "Novo grenal (1-sim 2-nao)\n";
		gn++;
	}

	cout << gn << " grenais\n";
	cout << "Inter:" << vi << endl;
	cout << "Gremio:" << vg << endl;
	cout << "Empates:" << e << endl;

	if(vg > vi) cout << "Gremio venceu mais\n";
	else if (vi > vg) cout << "Inter venceu mais\n";
	else if (vi == vg) cout << "Nao houve vencedor\n";

	return 0;

}