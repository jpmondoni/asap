#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main(){
	int N, K;

	while(scanf("%d %d", &N, &K), N+K > 0){
		
		int vec[1001]={0};
		int P, i, FAQ=0;
		for(i = 0; i < N; i++){
			scanf("%d",&P);
			vec[P]++;
		}
		//sort(vec.begin(), vec.end());

		for(i = 0; i < N+1; i++){
			if(vec[i] > 0 && vec[i] >= K){
				//printf("vec[%d] = %d\n", i, vec[i]);
				FAQ++;
			}
		}
		printf("%d\n",FAQ);

	}

	return 0;
}