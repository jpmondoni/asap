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
   int e, m, d;                              // 1
   e = 0; d = n-1;                           // 2
   while (e <= d) {                          // 3
      m = (e + d)/2;                         // 4
      if (v[m] == x) return m;               // 5
      if (v[m] < x) e = m + 1;               // 6
      else d = m - 1;                        // 7
   }                                         // 8
   return -1;                                // 9
}       

int main(){
	int a, b;
	while(scanf("%d %d", &a, &b) && a != 0 && b != 0){
		int CardsA[10001];
		int CardsB[10001];
		
		int i, MaxA, MaxB, Max;
		MaxA = MaxB = Max = 0;
		ford(i, a){
			sint(CardsA[i]);
		}
		ford(i, b){
			sint(CardsB[i]);
		}

		// calcular máximo de trocas em A
		ford(i, a){
			if(CardsA[i] != CardsA[i-1]){
				if(buscaBinaria(CardsA[i], b, CardsB) == -1)
					MaxA++;
			}
		}

		// calcular máximo de trocas em B
		ford(i, b){
			if(CardsB[i] != CardsB[i-1]){
				if(buscaBinaria(CardsB[i], a, CardsA) == -1)
					MaxB++;
			}
		}
		
		// Define o max
		if(MaxA >= MaxB){
			pint(MaxB);
		}
		else
			pint(MaxA);
		
	}

	return 0;	
}