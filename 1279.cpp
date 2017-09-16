#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pq priority_queue
#define fst first
#define snd second
#define ford(i,n) for((i) = 0; (i) < (n); (i) ++)
#define forc(i,j, n) for((i) = (j); (i) < (n); (i) ++)
#define pint(i) printf("%d\n", (i));
#define p2int(i,j) printf("%d %d\n", (i), (j));
#define sint(i) scanf("%d", &(i));
#define s2int(i, j) scanf("%d %d", &(i), &(j));
#define sstr(s) scanf("%s", &(s));
#define vi vector<int>
typedef unsigned long long ull;
typedef long long ll;
#define N 1000001
 
using namespace std;
 
int split(char ara[],int len,int year){
	long long int i, n=0;
 
	ford(i, len){
		n = ( n*10+ (ara[i]-'0') )%year;
	}
	if(n==0)
		return 0;
	else
		return 1;
}
	 
 
int main(){
	char year[N]={0};
	unsigned long long int len, n=0;
	int l, f;
	bool line = true;

	while(scanf("%s",year)==1){
		if(!line)
			printf("\n");

		n=0;
		len=strlen(year);

		f=0; 
		l=0;

		if(split(year,len,4)==0 && split(year,len,100) !=0 || split(year,len,400)==0 ){
			printf("This is leap year.\n");
			f=1;
			l=1;
		}
		if(split(year,len,15)==0){
			printf("This is huluculu festival year.\n");
			f=1;
		}
		if(split(year,len,55)==0 && l==1){
			printf("This is bulukulu festival year.\n");
		}
		if(f==0)
			printf("This is an ordinary year.\n");

		line = false;
		memset(year,'0',len+1);

	}

	return 0;
}
 
 
