#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int prime[3502];

int josephus(int n){
    int r=0;
    for (int i = 1; i <= n; i++){
        r = (r + prime[n-i]) % i;
    }

    return r;
}

// determinar numero primo
bool is_prime(long n) {
    if (n == 2) 
    	return true;
    if (n % 2 == 0 || n < 2) 
    	return false;

    for (long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) 
        	return false;
    }
    return true;
}

void primeNumbers(){
	memset(&prime, 0, sizeof(prime));
    int j;
    int a = 0;
    for(j = 2; j < 32650; j++){
    	if(is_prime(j)){
        	prime[a] = j;
            a++;
        }
    }
}

int main(){
	int n;

	primeNumbers();



	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		printf("%d\n",josephus(n)+1);
	}

	return 0;
}