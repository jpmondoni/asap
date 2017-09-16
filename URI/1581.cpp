#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int t;
		int dif=0;
		vector<string> idiomas;
		string aux;
		scanf("%d",&t);
		for(int i = 0 ; i < t ; i++){
			cin >> aux;
			idiomas.pb(aux);
		}

		for(int i = 0 ; i < t ; i++){

			if(aux != idiomas.at(i)){
				dif=1;
				printf("ingles\n");
				break;
			}

		}

		if(dif==0){
			cout << aux << endl;
		}				
	}

	return 0;
}