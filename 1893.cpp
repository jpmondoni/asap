#include <iostream>

using namespace std;

int main(){
	int a, b;

	cin >> a >> b;

	if(a <= b){
		if(a>=0 && b<=2 && b>=0)
			cout << "nova\n";
		
		else if(b>=3 && b<=96)
			cout << "crescente\n";

		else if(b >= 97)
			cout << "cheia\n";
		
	}
	else if(a >= b){
		if(a>=97 && b <=100 && b >=97 )
			cout << "cheia\n";
		
		else if(b<=2)
			cout << "nova\n";
		else
			cout << "minguante\n";
	}
}