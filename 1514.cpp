#include <bits/stdc++.h>
#define pb push_back


using namespace std;

int main(){
	int n, m, i, j;
	int Score[101][101];
	while(1){
		scanf("%d %d", &n, &m);
		if(n+m==0)
			break;

		int pt = 0;
		int somalinha = 0;
		int somacoluna = 0;
		int exs = 0;

		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&Score[i][j]);
			}
		}

		//condição 1: ninguém resolveu todos ex. Somalinha < n;
		for(i=0;i<n;i++){
			somalinha = 0;
			for(j=0;j<m;j++){
				somalinha+=Score[i][j];
			}
			if(somalinha == m){
				exs=1;
				break;
			}			
		}
		if(exs==0){
			pt++;
			//printf("c1\n");
		}

		//condição 2: todo problema foi resolvido por alguem. somacoluna >= 1;
		if(somalinha == m){
			pt++;
		}
		else{
			for(j=0;j<m;j++){
				somacoluna = 0;
				for(i=0;i<n;i++){
					somacoluna+=Score[i][j];
				}
				if(somacoluna > 0){
					exs++;
				}
			}
			if(exs == m){
				pt++;
				//printf("c2\n");
			}

		}
		exs=0;

		//condição 3: não há nenhum problema resolvido por todos. somacoluna < m;
		somacoluna = 0;
		for(j=0;j<m;j++){
			somacoluna = 0;
			for(i=0;i<n;i++){
				somacoluna+=Score[i][j];
			}
			if(somacoluna == n){
				exs=1;
				break;
			}
		}
		if(exs==0){
			pt++;
			//printf("c3\n");
		}
		exs=0;
		// condição 4: todos resolveram pelo menos 1 problema. somalinha > 1;
		for(i=0;i<n;i++){
			somalinha = 0;
			for(j=0;j<m;j++){
				somalinha+=Score[i][j];
			}
			if(somalinha == 0){
				exs=1;
				break;
			}
		}
		if(exs == 0){
			pt++;
			//printf("c4\n");
		}

		cout << pt << endl;

	}


	return 0;
}