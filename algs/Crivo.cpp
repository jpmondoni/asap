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
#define vi vector<int>
#define MAXN 1123123

using namespace std;

// se pr[i] == true, i eh primo
bool pr[MAXN+1];

// algum divisor primo de i. Para fatoracao
int divisor[MAXN+1];

// Analisa primalidade no intervalo [1,n]
void crivo(int n){
	memset(pr, true, n * sizeof(int));
	pr[0] = pr[1] = false;
	for(int i = 2; i*i <= n; i++){
		if( !pr[i] || !(i&1) && i > 2) continue;
		int k = i*i;
		divisor[i] = i;
		while(k <= n){
			pr[k] = false;
			divisor[k] = i;
			k += i;
		}
	}
}

int main(void){
	int n, i;
	sint(n);
	crivo(n);
	ford(i, n){
		if(pr[i])
			pint(i);
	}

	return 0;
}