#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
 
int main(){
    int t, i, r;
 	double n;
    cin >> t;
    while(t--){
       	scanf("%lf",&n);     
        r=ceil(n/2);      
        printf("%d\n",r);
    }
 
	return 0;
}