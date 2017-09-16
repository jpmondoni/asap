#include <iostream>

using namespace std;

int main(){
	int x,y,a,i,c, sum=0;
	
	cin >> c;
	for(a=0;a<c;a++){
		sum=0;
		cin >> x >> y;
		if(x<y){
			for(i=x+1;i<y;i++){
				if(i%2 != 0){
					sum+=i;			
				}
			}
		} else {
			for(i=y+1;i<x;i++){
				if(i%2 != 0){
					sum+=i;			
				}
			}
		}
		cout << sum << "\n";
	}
	return 0;
}