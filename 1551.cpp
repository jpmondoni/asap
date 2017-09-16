#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);

	while(n--){
		int Letras[30]={0};
		int Cont = 0;
		string frase;
		getchar();
		getline(cin,frase);

		
		for(int i = 0 ; i < frase.size(); i++){
			if(frase[i] >= 'a' && frase[i] <= 'z')
				if(Letras[frase[i] - 96] == 0){
					Letras[frase[i] - 96] = 1;
					Cont++;	
				}
		}
		if(Cont < 13)
			printf("frase mal elaborada\n",Cont);
		else if(Cont == 26)
			printf("frase completa\n");
		else
			printf("frase quase completa\n");
	}
}