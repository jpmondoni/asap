#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		string p;
		cin >> p;
		double temp = (double)p.length()/100;
		printf("%.2lf\n",temp);

	}

	return 0;
}