/*
string = LIFE IS NOT A PROBLEM TO BE SOLVED


*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	char s[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";

	cin >> n;
	for(int i=0;i<n;i++){
		putchar(s[i]);
	}

	cout << endl;
	return 0;

}