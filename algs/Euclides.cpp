#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pq priority_queue
#define fst first
#define snd second
#define ford(i,n) for((i) = 0; (i) < (n); (i) ++)
#define forc(i,j, n) for((i) = (j); (i) < (n); (i) ++)
#define pint(i) printf("%d\n", (i));
#define p2int(i,j) printf("%d %d\n", (i), (j));
#define sint(i) scanf("%d", &(i));
#define s2int(i, j) scanf("%d %d", &(i), &(j));
#define sstr(s) scanf("%s", &(s));
typedef unsigned long long ull;
typedef long long ll;
typedef long long int lli;
#define pii pair<int, int>
#define vi vector<int>


using namespace std;

pii mdc(int a, int b){
	if (b == 0) return pii(1,0);
	pii u = mdc(b,a%b);
	return pii(u.snd, u.fst - (a/b)*u.second);
}

int main(){
	int a, b;
	pii euext;
	s2int(a,b);
	euext=mdc(a,b);
	p2int(euext.fst, euext.snd);
}