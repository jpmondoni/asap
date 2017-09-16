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
#define MAXN 1000
#define MAXP 100
#define MAXCAP 30

using namespace std;


int val[MAXN], weight[MAXN];
int cap[MAXP];
int T[MAXCAP+1];

int n_tests, test, n_obj, n_people;
int i, j, k, ans;

void solve(int n_obj, int C){
	int i, k;
	memset(T, 0, sizeof(T));
	for(k = 0 ; k < n_obj ; ++k)
		for(i=C ; i >= weight[k] ; --i)
		//se puder haver repeticao de itens, trocar por:
		//for(i = weight[k] ;  i <= C; ++i)
			T[i] = max(T[i], T[i - weight[k]] + val[k]);;
}

int main(){
	sint(n_tests);
	for(test = 1 ; test <= n_tests ; ++test){
		sint(n_obj);
		for(i = 0 ; i < n_people ; ++i)
			s2int(val[i], weight[i]);
		sint(n_people);
		for(i = 0 ; i < n_people ; ++i)
			sint(cap[i]);
		solve(n_obj, MAXCAP);
		ans = 0;

		for(i = 0 ; i < n_people ; ++i)
			ans += T[cap[i]];

		pint(ans);
	}
	return 0;
}