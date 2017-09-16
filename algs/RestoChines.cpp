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
typedef long long int lli;
#define pii pair<int, int>
#define vi vector<int>
#define MAXN 1000

using namespace std;

int n, a[MAXN], b[MAXN], m[MAXN];

pii mdc(int a, int b){
  if (b == 0) return pii(1,0);
  pii u = mdc(b,a%b);
  return pii(u.snd, u.fst - (a/b)*u.second);
}

int chines(){
  int x = 0, M = 1;
  ford(i, n){
    int b2 = b[i] - a[i]*x;
    pii bizu = mdc(a[i]*M, m[i]);
    int g = a[i]*M * bizu.fst + m[i] * bizu.snd;

    if(b2 % g) return -1;
    x += M*(bizu.fst * (b2/g) % (m[i]/g));
    M *= (m[i]/g);
  }
  return (x%M+M)%M;
}

int main(){
  int i;
  sint(n);
  ford(i, n)
    scanf("%d %d %d",&a[i], &b[i], &m[i]);
  pint(chines());
  return 0;
}