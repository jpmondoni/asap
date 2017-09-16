#include <iostream>

using namespace std;

int main(){
	int k;
	cin >> k;

	if(k==1){
		cout << "Top 1\n";
	}
	else if(k>1 && k<=3){
		cout << "Top 3\n";
	}
	else if(k>3 && k<=5){
		cout << "Top 5\n";
	}
	else if(k>5 && k<=10){
		cout << "Top 10\n";
	}
	else if(k>10 && k<=25){
		cout << "Top 25\n";
	}
	else if(k>25 && k<=50){
		cout << "Top 50\n";
	}
	else if(k>50 && k<=100){
		cout << "Top 100\n";
	}

}