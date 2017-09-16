#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int str, sub;
	while(scanf("%d %d", &sub, &str) != EOF){
		vector<int> v;
		v.pb(str);
		if(find(v.begin(), v.end(), sub) == v.end())
			cout << "nao encontrou\n";
		else
			cout << "encontrou\n";

	}

	return 0;

}