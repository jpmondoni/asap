#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

// numeros fatoriais 
long long int fat(int numero)
{
   if(numero > 1)
      return numero * fat(numero - 1);
   else
      return 1;
}

int main(){
	int N, P;
	char E;
	int C=0;
	scanf("%d %d %c",&N, &P, &E);
	C = fat(N) / (fat(P) * fat(N-P));
	if(E=='S')
		C=C*2;

	printf("%d\n",C);
}

