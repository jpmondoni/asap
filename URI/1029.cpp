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

int k;

int fib(int n){
    k++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    else return fib(n-1) + fib(n-2);
}
int main(){
    int n, f;
   	sint(n);
    for(int i = 0; i < n; i++){
        sint(f);
        k = 0;
        printf("fib(%d) = %d calls = %d\n",f,k-1,fib(f));
    }
    return 0;
}