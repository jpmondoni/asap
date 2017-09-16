#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pq priority_queue
#define fst first
#define snd second
#define ford(i,n) for((i) = 0; (i) < (n); (i) ++)
#define forc(i,j, n) for((i) = (j); (i) <= (n); (i) ++)
#define pint(i) printf("%d\n", (i));
#define p2int(i,j) printf("%d %d\n", (i), (j));
#define sint(i) scanf("%d", &(i));
#define s2int(i, j) scanf("%d %d", &(i), &(j));
#define sstr(s) scanf("%s", &(s));
#define vi vector<int>
typedef unsigned long long ull;
typedef long long ll;

using namespace std;
int total;
 
void posicao(int i, int n){
      if(i == 1 && total) // Tratando para ele não sair na primeira vez
         return;
      total++;
      int mid = n / 2;
      return i <= mid ? posicao(2 * i, n) : posicao(i - (n - i + 1), n);
}
 
// Dentro da main()
int main(){
	total = 0;
	int n;
	sint(n);
	posicao(1, n); // Poderia ser qualquer número
	pint(total);

	return 0;
}