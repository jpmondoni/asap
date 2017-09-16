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
#define seq_t vector<double>
#define vi vector<int>

using namespace std;

bool GaussJordan(int n, int m, vector<seq_t> mat, seq_t b, seq_t &ans){
	#define M(i,j) (mat[idx[i]][j])
	vi idx(m);
	int i;
	ford(i,m) idx[i] = i;
	ford(i,m) mat[i].pb(b[i]);
	int step=0;
	ford(i,n){
		int p = -1;
		double pivot = 1e-8;
		for(int j = step ; j < m ; j++){
			if(abs(M(j,i)) > abs(pivot)){
				p = j;
				pivot = M(j,i);
			}
		}
		if(p == -1)
			continue;
		swap(idx[step], idx[p]);
		ford(j, n+1)
			M(step, j) /= pivot;
		ford(j, m) 
			if(step != j){
				double w=M(j,i);
				ford(k, n+1) M(j, k) -= w * M(step, k);
			}

		step++;
	}

	for(int i = step ; i < m ; i++)
		if(abs(M(i, n)) > 1e-8) throw "No solution.";
	if(step == n){
		ans.resize(n);
		ford(i, n)
			ans[i] = M(i,n);
			return true;
	} else {
		return false; // existem múltiplas soluções de n-step.
	}
}

int main(){
	return 0;
}