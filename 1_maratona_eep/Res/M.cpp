#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	char cpf[15];
	int cpfn[11], b1,b2,sa,sb,i,j,k=0,size=0;
	
	while(scanf("%s", cpf)!=EOF){
		if(k<10000){
			j=0;
			for (i = 0; i < 14; i++){
				if (i == 3 || i ==7 || i == 11)
					continue;
				else{
					cpfn[j] = cpf[i] - '0';
					j++;
				}
			}
			j=9;
			b1 = ((cpfn[0]+(2*(cpfn[1]))+(3*cpfn[2])+(4*cpfn[3])+(5*cpfn[4])+(6*cpfn[5])+(7*cpfn[6])+(8*cpfn[7])+(9*cpfn[8]))%11);
			b2 = (((9*cpfn[0])+(8*(cpfn[1]))+(7*cpfn[2])+(6*cpfn[3])+(5*cpfn[4])+(4*cpfn[5])+(3*cpfn[6])+(2*cpfn[7])+cpfn[8])%11);
			if(b1==10 || b1==11)
				b1=0;

			if(b2==10 || b2==11)		
				b2=0;
		
			if(cpfn[9]==b1 && cpfn[10]==b2)
				cout << "CPF valido\n";
			else
				cout << "CPF invalido\n";


			k++;
		}
		else
			break;
	}
	return 0;


}