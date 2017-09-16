#include <bits/stdc++.h>

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

#define MAX 1234

using namespace std;

// Primeira e segunda strings (tamanhos m e n)
char seq[2][MAX+1];
int pd[MAX+1][MAX+1];

//guarda o caminho
enum { cima, lado, diag } way[MAX+1][MAX+1];

int lcs(int m, int n){
	int i, j;
	ford(i, m) pd[i][0] == 0;
	ford(i, n) pd[0][i] == 0;

	for(i = 1; i <= m; i++)
		for(j = 1; j <= n; j++){
			if(seq[0][i-1] == seq[1][j-1]){
				pd[i][j] = pd[i-1][j-1] + 1;
				way[i][j] = diag;
			}
			else if(pd[i-1][j] > pd[i][j-1]){
				pd[i][j] = pd[i-1][j];
				way[i][j] = cima;
			}
			else{
				pd[i][j] = pd[i][j-1];
				way[i][j] = lado;
			}
		}

	return pd[m][n];
}

// reconstroi uma CS, deve ser chamada com (m-1, n-1, tam desejado)
void printway(int i, int j, int k){
	if(i==0 || j==0 || k==0) printf("\n");
	else if(way[i][j] == diag){
		printway(i-1, j-1, k-1);
		printf("%c",seq[0][i]);
	}
	else if(way[i][j] == cima) printway(i-1, j, k-1);
	else printway(i, j-1, k-1);
}

int main(){
	int n, m;
	while(1){
		scanf(" %s", seq[0]);
		scanf(" %s", seq[1]);
		m=strlen(seq[0]);
		n=strlen(seq[1]);

		pint(lcs(m,n));
	}
	return 0;
}