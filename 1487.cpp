#include <bits/stdc++.h>
#define fst first
#define snd second
#define pb push_back
#define mp make_pair

using namespace std;

class Brinquedo{
public:
	int D, P, div;

	Brinquedo(int D, int P){
		this -> D = D;
		this -> P = P;
		div = (double) P/D;

	}

};

bool comp(Brinquedo const & x , Brinquedo const & y ){
	return x.div > y.div;
}

int main(){
	int N, T, h = 1;

	while(1){
		vector<Brinquedo> brinquedos;
		scanf("%d %d", &N, &T);
		
		if (N == 0)
			return 0;

		for (int i = 0; i < N; i++){
			int D, P;
			scanf("%d %d",&D, &P);
		
			Brinquedo brinquedo(D,P);
			brinquedos.pb(brinquedo);
		}

		sort(brinquedos.begin(), brinquedos.end(), comp);

		int TotalPontos = 0;
		int TotalTempo = 0;

		int i = 0;

		while(i < N){
			int AuxTotalTempo = TotalTempo + brinquedos[i].D;
			if(AuxTotalTempo <= T){
				TotalPontos += brinquedos[i].P;
				TotalTempo = AuxTotalTempo;
			} else
				i++;
		}

		printf("Instancia %d\n",h++);
		printf("%d\n\n",TotalPontos);

	}
	return 0;
}