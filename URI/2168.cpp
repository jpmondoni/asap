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
	int i, j, n, nsol = 0;
	int mtx[102][102];
	sint(n);
	ford(i, n+1){
		ford(j, n+1){
			sint(mtx[i][j]);
		}
	}
	int k = 0;
	ford(i, n){
		ford(j, n){
			if(mtx[i][j] == 1)
				k++;
			if(mtx[i][j+1] == 1)
				k++;
			if(mtx[i+1][j] == 1)
				k++;
			if(mtx[i+1][j+1] == 1)
				k++;

			if(k>=2)
				printf("S");
			else
				printf("U");

			k=0;
		}
		printf("\n");
	}

	return 0;
}