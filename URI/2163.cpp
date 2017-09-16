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

using namespace std;

int main(){
	int n, m, k = 0;
	int i, j;
	vector<pair<int, int> > xy;
	s2int(n, m);
	int mx[n+1][m+1];
	ford(i, n){
		ford(j, m){
			sint(mx[i][j]);
			if(mx[i][j] == 42){
				xy.pb(mp(i+1, j+1));
				//printf("42 esta em: %d, %d\n",xy[k].fst, xy[k].snd);
				//k++;
			}
		}
	}

	// analisar 42
	int size = xy.size();
	for(int i = 0 ; i < size ; i++){
		if(mx[(xy[i].fst-1) - 1][(xy[i].snd-1) - 1] == 7)
//			printf("7 - -\n");
			k++;

		if(mx[(xy[i].fst-1)][(xy[i].snd-1) - 1] == 7)
//			printf("7 0 -\n");
			k++;

		if(mx[(xy[i].fst-1) + 1][(xy[i].snd-1) - 1] == 7)
//			printf("7 + -\n");
			k++;

		if(mx[(xy[i].fst-1) - 1][(xy[i].snd-1)] == 7)
//			printf("7 - 0\n");
			k++;
		
		if(mx[(xy[i].fst-1) + 1][(xy[i].snd-1)] == 7)
//			printf("7 + 0\n");
			k++;
		
		if(mx[(xy[i].fst-1) - 1][(xy[i].snd-1) + 1] == 7)
//			printf("7 - +\n");
			k++;
		
		if(mx[(xy[i].fst-1)][(xy[i].snd-1) + 1] == 7)
//			printf("7 0 +\n");
			k++;
		
		if(mx[(xy[i].fst-1) + 1][(xy[i].snd-1) + 1] == 7)
//			printf("7 + +\n");
			k++;

		if(k == 8){
			printf("%d %d\n",xy[i].fst, xy[i].snd);
			return 0;
		}
		else
			k = 0;
	}

	//pint(mx[xy[0].fst-1][xy[0].snd-1]);
	p2int(0, 0);
	return 0;

}