#include <bits/stdc++.h>
using namespace std;
#define fst first
#define snd second
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
#define pb push_back
const ll modn = 1000000007;
inline ll mod(ll x) { return x % modn; }
#ifdef ONLINE_JUDGE
#	define LLD "%I64d"
#	define debug(args...) {}
#else
#	define LLD "%lld"
#	define debug(args...) fprintf(stderr, args)
#endif

int main() {
	int i, j, n, t;
	while(scanf("%d %d", &t, &n) && t + n != 0){
		string Equipe;
		int Pontos, Emp=0, TotalPt=0;
		int EqId=0;
		for(i = 0 ; i < t; i ++){
			cin >> Equipe >> Pontos;
				TotalPt+=Pontos;
		}
		Emp = n*3-TotalPt;
		printf("%d\n",Emp);


	}


	return 0;
}
