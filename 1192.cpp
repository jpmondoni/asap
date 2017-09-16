#include <iostream>

using namespace std;

int main(){
	int a, b, n;
	char o;

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a >> o >> b;
		if(a == b)
			cout << a*b << endl;
		
		else if(o >= 97 && o <= 122)
			cout << a+b << endl;

		else if(o >= 65 && o <= 90)
			cout << b-a << endl;
	}

	
}