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

#define MAXN 101
#define MAXM MAXN*MAXN

using namespace std;

int orig[MAXM]; //origem da aresta i
int dest[MAXM]; //destino da aresta i
int custo[MAXM]; //custo da aresta i
//bool intree[MAXM]; //caso precise da arvore ao final
int ord[MAXM]; //auxiliar
int id[MAXN], sz[MAXN]; //uf auxiliar

void ufinit(int n){
	int i;
	ford(i, n){
		id[i] = i, sz[i] = i;
	}
}

int uffind(int i){
	if(i == id[i]) return i;
	return id[i] = uffind(id[i]);
}

int ufunion(int v, int w){
	v = uffind(v); w = uffind(w);
	if (v == w) return 0;
	if (sz[v] > sz[w]) swap(v,w);
	id[v] = w;
	if (sz[v] == sz[w]) sz[w]++;
}

bool edgecmp(int i, int j){
	return (custo[i] < custo[j]);
}

int kruskal(int n, int ne){
	int cost = 0;
	//memset(intree,0,sizeof(intree));
	int i;
	ford(i, ne)
		ord[i] = i;

	sort(ord,&ord[ne],edgecmp);
	ufinit(n);
	int k = 0;
	for(i = 0; i < ne && k < n; i++){
		int v = ord[i];
		if (uffind(orig[v]) != uffind(dest[v])){
			//intree[v] = true;
			ufunion(orig[v], dest[v]);
			cost += custo[v];
			k++;
		}
	}
	return cost;
}

// Exemplo de uso
int main(){
	int n, m;
	while(scanf("%d %d",&n, &m) == 2 && n != 0){
		int i;
		ford(i, m){
			s2int(orig[m], dest[m]);
			sint(custo[m]);
		}
		pint(kruskal(n,m));
	}

	return 0;
}