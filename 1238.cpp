#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char a[51], b[51], c[102];
	int i, size;



	cin >> a >> b;
	size=(strlen(a))+(strlen(b));

	for(i=0;i<size;i++){
		c[i]=a[i];
		c[i+1]=b[i];
		cout << c[i] << " " << c[i+1] << '\n';
	}

	cout << c << endl;
	
 

}