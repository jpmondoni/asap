#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){

	int n;
	vector<int> notas;

	cin >> n;

	for(int i=0;i<n;i++){   
		vector<int>::iterator it, pit;

		int cont = 0;
		int u, p;
		cin>>u;
		for(int h=0;h<u;h++){
			cin >> p;
			notas.insert(notas.begin(),p);
		}
		vector<int> pos(notas);

		sort(pos.begin(), pos.end());
		pit = pos.begin();
		for(it = notas.begin(); it!= notas.end(); ++it){
			 if(*it == *pit) 
			 	cont++;

			 ++pit;
		}
		
		printf("%d\n",cont);  
   	
   		notas.clear();

   	}
	return 0;
}