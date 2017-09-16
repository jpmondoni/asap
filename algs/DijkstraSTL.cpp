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
#define vi vector<int>
#define pii pair<int, int>
using namespace std;



int adj[MAXN][MAXN]; //lista de ajd
int custo[MAXN][MAXN]; //tamanho das arestas de adj
int nadj[MAXN]; // grau de cada vertice
int pai[MAXN]; // para reconstruir o caminho
int dist[MAXN]; // distance da origem até cada vertice
bool used[MAXN];

/*
n: numero de vertices, s: origem, to: destino (opcional)
retorna: distancia ate "to"
caso "to" nao seja passado retorna a maior distance
*/
int dijkstra(int n, int s, int to = -1){
	pq<pii > q;
	int a, v;
	int cost, nv = 0;
	memset(pai, -1, sizeof(pai));
	memset(used, 0, sizeof(used));
	int i;
	ford(i, n) dist[i] = INF;
	dist[s] = 0;
	pai[s] = s;
	q.push(mp(0,s));
	while(!q.empty() && nv < n) {
		a = q.top().second;
		q.pop();
		if (used[a]) continue;
		used[a] = true;
		nv++;
		ford(i, nadj[a]){
			v = adj[a][i];
			if(used[v]) continue;
			cost = dist[a] + custo[a][i];
			if(cost >= dist[v]) continue;
			dist[v] = cost;
			q.push(make_pair(-1*cost,v));
			pai[v] = a;
		}
	}

	if(to == -1) to = a;
	return dist[to];
}

int main(){
	int a, b, c;
	s2int(a, b);
	pint(dijkstra(a,b));

}