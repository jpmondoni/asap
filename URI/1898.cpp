#include <iostream>
#include <string>
#include <vector>
#include <string>

using namespace std;

int main(){
	string s1, s2;
	int i=0, j=0;
	bool maxPoint=false;
	char tst;
	vector<int> numCpf;
	vector<char> valorPropina;
	//vector<double> 

	cin >> s1 >> s2;
	int t1=s1.size();

	for(i=0;i<t1;i++){
		if(s1[i]>= 48 && s1[i]<=57){
			int aux;
			aux = s1[i]-'0';
			numCpf.push_back(aux);
		}
		if(numCpf.size()==11)
			break;
	}

	for(j=i;j<t1;j++){
		//cout << "passou\n";
			
		if(s2[j]>=48 && s2[j]<=57 || s2[j]==46 && maxPoint==false){
			//cout << "passou\n";
			tst = s2[j];
			valorPropina.push_back(tst);
			maxPoint = true;
		}
	}

	cout << "cpf ";
	for(int k=0;k<numCpf.size();k++)
		cout << numCpf[k];

	cout << endl;
	
	for (int l=0;l<valorPropina.size();l++)
		cout << valorPropina[l];

	cout << endl;

}