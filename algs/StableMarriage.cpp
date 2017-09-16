/*
Takes a set of m men and n women, where each person has an integer preference for each of the persons of opposite sex.
Procduces a matching of each the persons of opposite sex.
Produces a matching of each man to some woman.
The matching will have the following properties:
- Each man is assgined a different woman (n must be at least m).
- No two couples M1W1 and M2W2 will be unstable.
- The solution is man-optimal.
Two couples are unstable if
- M1 prefers W2 over W1 and
- W1 prefer M2 over M1.
*/

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
#define MAXN 1024
#define MAXN 1024

using namespace std;


int m, n;
int L[MAXM][MAXN], R[MAXN][MAXM]
;int L2R[MAXM], R2L[MAXN];

int p[MAXM];

void stableMarriage(){
	memset( R2L, -1, sizeof( R2L ) );
	memset( p, 0, sizeof( p ) );

	//Each man proposes
	int i;
	ford(i, m){
		int man = i;
		while( man > = 0 ){
			// to the next woman on his list in order
			// of decreasing preference, until one of them accepts;
			int wom;
			while(1){
				wom = L[man][p[man]++];
				if(R2L[wom] < 0 || R[wom][man] > R[wom][R2L[wom]]) break;
			}
			// Remeber the old husband of wom.
			int hubby = R2L[wom];

			// Marry man and wom.
			R2L[L2R[man] = wom]  = man;

			// If a guy was dumped in the process, remarry him now.
			man = hubby;
		}
	}
}

// Exemplo de uso
int main(){
	/* INPUTS:
	*	- m: 			number of men
	*	- n:			number of women (must be at least as large as m).
	*	- L[i][]:		the list of women in order of decreasing preference of man i.
	*	- R[j][i]:		the attractiveness level of man i to woman j.
	* OUTPUTS:
	*	- L2R[]:		the mate of man i (always between 0 and n-1)
	* 	- R2L[]:		the mate of woman j (or -1 if single)
	*/
}
