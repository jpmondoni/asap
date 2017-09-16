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
	int n, m;
	int i, j;
	s2int(n, m);
	int Jog = 0; // número de jogadores que fizeram 1 gol por jogo
	int Cur = 0; // variável de suporte para verificar os gols
	int aux;
	ford(i, n){
		ford(j, m){
			sint(aux);
			if(aux > 0) // se o jogador fez gol
				Cur++; // incrementar a var de suporte
		}
		if(Cur == m) // se os jogos onde marcou gol for igual ao total de jogos
			Jog++; // incrementar o número de jogadores que fez gol em todos os jogos

		Cur = 0; // reinicializar a variável
	}

	pint(Jog);
	return 0;
}