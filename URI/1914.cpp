#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
	int n, a, b, soma;
	char nomea[100], nomeb[100], ea[6], eb[6];

	cin >> n;

	for(int i=0;i<n;i++){
		soma=0;
		scanf("%s %s %s %s", &nomea, &ea, &nomeb, &eb);
		cin >> a >> b;
		soma=a+b;
		if(soma%2==0){
			if(strcmp(ea,"PAR")==0){
				//	cout << ea << " = PAR\n";
				cout << nomea << endl;
			}
			else{
				//cout << eb << " = PAR\n";
				cout << nomeb << endl;	
			}
		}
			
		else{
			if(strcmp(ea,"IMPAR")==0){
				//cout << ea << " = IMPAR\n";
				cout << nomea << endl;
			}else{
				//cout << eb << " = IMPAR\n";
				cout << nomeb << endl;
			}
		}
	}
	return 0;
}