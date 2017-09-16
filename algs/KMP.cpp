#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pq priority_queue
#define fst first
#define snd second
#define ford(i,n) for((i) = 0; (i) < (n); (i) ++)
#define forc(i,j, n) for((i) = (j); (i) < (n); (i) ++)
#define forde(i,n) for((i) = 0; (i) <= (n); (i) ++)
#define force(i,j,n) for((i) = (j); (i) <= (n); (i) ++)
#define pint(i) printf("%d\n", (i));
#define p2int(i,j) printf("%d %d\n", (i), (j));
#define sint(i) scanf("%d", &(i));
#define s2int(i, j) scanf("%d %d", &(i), &(j));
#define sstr(s) scanf("%s", &(s));
typedef unsigned long long ull;
typedef long long ll;
#define vi vector<int>
#define MAXNP 1000

using namespace std;

int fail[MAXNP];

void buildFail(char *p){
	int m = strlen(p);
	int j = fail[0] = -1 , i = 0;
	force(i, 1,  m){
		while(j >= 0 && p[j] != p[i-1]) j = fail[j];
		fail[i] = ++j;
	}
}

void kmp(char *p, char*t){
	int m = strlen(p), n = strlen(t);
	buildFail(p);
	for(int i = 0 , k = 0 ; i < n ; i++){
		while (k >= 0 && p[k] != t[i]) k = fail[k];
		if( ++k >= m ){
			// achou em t[i-m+1 .. i ] 
			k = fail[k];
		}
	}
}


int main(){
	return 0;	
}