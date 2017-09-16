#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define snd second
#define mp make_pair

using namespace std;

int main(){
	char Linha1[]="`1234567890-=";
	char Linha2[]="QWERTYUIOP[]\\";
	char Linha3[]="ASDFGHJKL;'";
	char Linha4[]="ZXCVBNM,./";
	vector<char> Final;
	bool find = false;
	int i, j, n;
	char c;

	while(scanf("%c",&c) != EOF){
		//identificar qual linha está linha
		for(int i = 1; i < 14 ; i++){
			if(c == Linha1[i]){
				Final.pb(Linha1[i-1]);
				
			}
			else if(c == Linha2[i]){
				Final.pb(Linha2[i-1]);
				
			}
			else if(c == Linha3[i]){
				Final.pb(Linha3[i-1]);
				
			}
			else if(c == Linha4[i]){
				Final.pb(Linha4[i-1]);
				
			}
			else if(c == ' '){
				Final.pb(32);
			}
		}
		for(int j = 0 ; j < Final.size() ; j++){
			putchar(Final[j]);
		}
		printf("\n");
	}

	return 0;
}