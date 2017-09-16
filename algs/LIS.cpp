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

#define MAXN 1000
#define INF 0x3f3f3f3f

using namespace std;

int v[MAXN+1]; // ant[MAXN+1], li[MAXN+1]
int pd[MAXN+1]; // ipd[MAXN+1]
//pd armazena o menor elemento que lidera uma IS de tamanho i ate o momento

int lis(int n){
	int i, es, di, m, mx = 0;

	memset(pd, 0x3f, sizeof(pd));
	pd[0] = -INF;

	ford(i,n){
		es=0;
		di=i;
		while(es<di){
			m=(es+di+1)/2;
			if(pd[m] < v[i]) es=m;
			else di=m-1;
		}

		if(pd[es] < v[i] && pd[es+1] > v[i]){
			pd[es+1] = v[i];
			if(es+1 > mx) mx=es+1;
			//ipd[es+1]=i;
			//ant[i]=ipd[es];
		}
	}
	return mx;
}

//reconstroi uma IS de tamanho tam depois de chamar lis(n)
/*void build(int tam){
	int i, p;

	p=ipd[tam];

	if(pd[tam] == INF) printf("-1\n");
	else if(tam > 0){
		ford(i, tam){
			li[i] = v[p];
			p = ant[p];
		}
		for(i=tam-1; i > 0; i--) printf("%d ",li[i]);
		pint(li[0]);
	}
	else printf("\n");
}
*/

// Exemplo simples de uso
int main(){
	int n, i, k;
	scanf(" %d", &n);
	ford(i, n) scanf(" %d", &v[i]);

	k = lis(n);
	pint(k);
	//build(k);

	return 0;
}