#include <iostream>
#include <cmath>

using namespace std;

double fat(double numero) //O calculo do fatorial e feito aqui

{
   double aux;
   aux = numero;
   while(numero > 1)
   {
      aux = aux * (numero-1);
      numero--;
   }
   return (aux);
}

int main(){
	int num, soma=0, i, j=0, meio;

	cin >> num;

	for(i=0;fat(i)<num;i++){
		meio=i;

	}
	for(i=meio;i>0;i--){
		if(fat(i) == num){
			j=1;
			break;
		}

		else if(fat(i)+soma <= num){
			soma+=fat(i);
			j++;
			i++;
	 	}
	 	if(soma == num){
	 		break;
	 	}
	}
	cout << j << endl;
}

