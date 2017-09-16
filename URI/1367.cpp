#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int n;
	while(scanf("%d",&n), n > 0){
		//int Problemas[30]={0};
		int Incorretas[30]={0};
		int Tempo, SomaTempo = 0, Res = 0;
		string Resp;
		char LetraProb;
		for(int i = 0 ; i < n ; i++){
			scanf("%c %d %s",&LetraProb,&Tempo,&Resp);
			if(Resp[0] == 'c'){
				//Problemas[c - 65] = 1;
				if(Incorretas[LetraProb - 65] > 0){
					SomaTempo = SomaTempo + (Incorretas[LetraProb - 65]*20);
				}
				SomaTempo+=Tempo;
				Res++;
			}
			else if(Resp[0] == 'i'){
				Incorretas[LetraProb - 65]++;
			}
		}	

		printf("%d %d\n",Res,SomaTempo);	
	}

	return 0;
}