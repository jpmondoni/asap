#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
int main(){
	int L, C, R1, R2, xC, yC;
	while(scanf("%d %d %d %d", &L , &C , &R1, &R2) > 0){
		if(L+C+R1+R2==0)
			break;
		if (2 * R1 <= L && 2 * R1 <= C && 2 * R2 <= L && 2 * R2 <= C){
			xC = L - R1 - R2;
			yC = C - R1 - R2;
			if ((long double)(R1 + R2) <= sqrtl((long double)(xC*xC + yC*yC)))
				printf("S\n");
			else 
				printf("N\n");
		} else 
			printf("N\n");

	}

	return 0;
}