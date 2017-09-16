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

int buscaBinaria (int x, int n, int v[]) {
   int e, m, d;                              
   e = 0; d = n-1;                           
   while (e <= d) {                          
      m = (e + d)/2;                         
      if (v[m] == x) return m;               
      if (v[m] < x) e = m + 1;               
      else d = m - 1;                        
   }                                         
   return -1;                                
}      


int main(){
	int pos[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
				 97, 98, 99, 100, 101, 102, 103, 104, 105, 106};

	int n=0, i, j;
	int mx[101][101];
	string lin;
	char aux;
	sint(n);
	ford(i, n){
		cin >> lin;
		for(j = 0; j < n; j++){
			aux = lin[j];
			mx[i][i] = aux;
		}
	}

	cout << mx[0][1];

	return 0;

}