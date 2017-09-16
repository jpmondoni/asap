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
#define vi vector<int>
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main(){
	int n, m;
	s2int(n, m);
	int v[10001];
	for(int i = 1 ; i <= n ; i++ ){
		sint(v[i]);
	}
	int ans = 0;
	pq< pair<int, int> > fila;
	for(int i = 1; i <= n; i++)
		fila.push( mp(0, -i) );
	while(m--){
		int c;
		sint(c);
		int id = -fila.top().snd;
		int l = -fila.top().fst;
		fila.pop();
		fila.push( mp( -(l + v[id] * c), -id) );
		ans = max(ans, l + v[id]*c );
	}
	pint(ans);

	return 0;

	
}