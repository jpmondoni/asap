#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int h, m, s;
		scanf("%d %d %d", &h, &m, &s);
		printf("%02d:%02d - A porta ",h,m);
		if(s == 1)
			printf("abriu!\n");
		else
			printf("fechou!\n");
	}

	return 0;
}