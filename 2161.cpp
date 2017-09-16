#include <bits/stdc++.h>

#define MAXN 101
#define INF INT_MAX
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
//typedef vector<int> vec;

using namespace std;


int main(){
	int i, n;
	sint(n);
	double r = 0;

	if(n > 0){
		r = 1/6;
		ford(i, n){
			r = 1/(6+r);
		}
	}
	printf("%.10lf\n",r+3);
	
	return 0;
}
