#include <iostream>

using namespace std;

int main(){
	int a, b, c;

	cin >> a >> b >> c;

	if(a > b && b <= c)
		cout << ":)\n";
	else if (a < b && b >= c)
		cout << ":(\n";
	else if(a < b && b < c && (b-a) > (c-b))
		cout << ":(\n";
	else if(a < b && b < c){
		if((c-b) >= (b-a))
			cout << ":)\n";
	}
	else if(a > b && b > c){
		if(b-c < a-b)
			cout << ":)\n";
		else if(b-c >= a-b)
			cout << ":(\n";
	}
	else{
		if(b < c)
			cout << ":)\n";
		else if(b >= c)
			cout << ":(\n";
	}

	return 0;


}