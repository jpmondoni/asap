#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
		double y1, y2, v1, v2;
		scanf("%lf %lf %lf %lf", &y1, &v1, &y2, &v2);
		double ans = (v2-v1)/(y2-y1);
		long long ansl = ans*100;
		printf("%lld,%.2lld\n", ansl/100, ansl%100);
	}
	return 0;
}