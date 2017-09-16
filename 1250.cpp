#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		int k;
		int S=0;
		scanf("%d",&k);
		int Alt[51];
		char Cmd[51];
		for(int j=0;j<k;j++){
			scanf("%d",&Alt[j]);
		}
		scanf("%s",Cmd);

		for(int l=0;l<k;l++){
				if((Cmd[l]=='S' && Alt[l] <= 2) || (Cmd[l]=='J' && Alt[l] > 2))
					S++;
			}

		printf("%d\n",S);
	}

	return 0;

}
/*
1 1 1 1 1 1 1 2 2 2 2 2 2 2 3 3 3 3 3 3 3 4 4 4 4 4 4 4 5 5 5 5 5 5 5 6 6 6 6 6 6 6 7 7 7 7 7 7 7
S S S S S S S S S S S S S S J J J J J J J J J J J J J J J J J J J J J J J J J J J J J J J J J J J 
*/