#include <iostream>

using namespace std;


int QuemQuerDinheiro(int n, int k){
    if (n == 1) 
      return 1;
    
    return ((QuemQuerDinheiro(n - 1, k) + k - 1) % n) + 1;
}


int main(){
	int n, k;

	cin >> n >> k;

	cout << "Posicao Final: " << QuemQuerDinheiro(n,k) << endl;


}

