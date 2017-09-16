#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	vector<string> Res;
	Res.pb("0");
	Res.pb("36");
	Res.pb("360");
	Res.pb("4005");
	Res.pb("40050");
	Res.pb("404550");
	Res.pb("4045500");
	Res.pb("40495500");
	Res.pb("404955000");
	Res.pb("4049955000");
	Res.pb("40499550000");
	Res.pb("404999550000");
	Res.pb("4049995500000");
	Res.pb("40499995500000");
	Res.pb("404999955000000");
	Res.pb("4049999955000000");
	Res.pb("40499999550000000");
	Res.pb("404999999550000000");


	int k;
	scanf("%d",&k);
	cout << Res.at(k-1) << endl;
}