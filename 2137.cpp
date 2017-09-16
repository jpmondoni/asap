#include <bits/stdc++.h>
#include <stdio.h>
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
#define sintx(i) scanf("%d", &(i))
#define s2int(i, j) scanf("%d %d", &(i), &(j));
#define sstr(s) scanf("%s", &(s));
#define vi vector<int>
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

int main(){
	int n, i;
	while(scanf("%d", &n) != EOF){
		vi Livros;
		int liv;
		ford(i, n){
			sint(liv);
			Livros.pb(liv);
		}
		sort(Livros.begin(), Livros.end());

		ford(i, n){
			if(Livros[i] < 10)
				printf("000%d\n",Livros[i]);
			else if(Livros[i] < 100)
				printf("00%d\n", Livros[i]);
			else if(Livros[i] < 1000)
				printf("0%d\n", Livros[i]);
			else
				pint(Livros[i]);
		}
	}
	return 0;
}