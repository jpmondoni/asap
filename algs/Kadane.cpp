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


int kadane(vi cot, int N, int C){
	
	int max_atual, max_final, max_lucro = 0;

	max_atual = max_final = cot[0];

	for(int i = 1; i < N; i++){
		if((max_atual > cot[i] && (max_atual - cot[i] >= C))
				|| cot[i] < max_final){
			if(max_atual - max_final - C > 0)
				max_lucro += max_atual - max_final - C;
			max_atual = max_final = cot[i]; 
		}

		if(cot[i] > max_atual)
			max_atual = cot[i];
	}
	
	if(max_atual - max_final - C > 0)
		max_lucro += max_atual - max_final - C; 

	return max_lucro;
}

int main(){
	int i, N, C;
	int aux;
	s2int(N, C);
	vi cot;

	ford(i, N){
		sint(aux);
		cot.pb(aux);
	}

	pint(kadane(cot, N, C));
	return 0;
}