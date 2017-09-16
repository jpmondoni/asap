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
	int a, b, c, dx, dy;
	
	while(scanf("%d %d", &a, &b) == 2){
		dx = dy = 0;
		c = 1;

		while(1){
			if((dy-dx) >= a)
				break;
			c++;
			dx+=a;
			dy+=b;
		}
		pint(c)
	}

	
}