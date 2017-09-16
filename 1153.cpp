#include <iostream>

using namespace std;

int fat(int numero)
{
   if(numero > 1)
      return numero * fat(numero - 1);
   else
      return 1;
}

int main(){

	int n;
	cin >> n;

	cout << fat(n) << endl;

	return 0;
}