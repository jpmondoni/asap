#include <bits/stdc++.h>

using namespace std;

int main(){
	double L, I, X;

	
	while(scanf("%lf",&L)){
		if(L==0) 
			break;

		if(L > 10000000)
			printf("1.000000\n",X);
		else{
			I = L + (L-3.0);
			X = (I-L)/L;

			printf("%.6lf\n",X);
		}
	}

}


//1000000000000000000000000000000000000000000000000000000000000000000000000000000000