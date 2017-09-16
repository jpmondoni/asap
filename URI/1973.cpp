#include <iostream>

using namespace std;

int main(){
	long long int n, i;
	long long int sum_ram=0, sum_stars=0;
	cin >> n;
	long long int ram[n], stars[n];

	for(i=0;i<n;i++){
		cin >> ram[i];
		stars[i]=0;
	}
	i=0;
	while(1){
		if(i==0 && ram[i]%2==0){
			stars[i]=1;
			if(ram[i] > 0)
				ram[i]--;
			break;
		}
		else if(i==n-1 && ram[i]%2==1){
			stars[i]=1;
			if(ram[i]>0)
				ram[i]--;
			break;
		}
		else if(ram[i]%2==1){
			ram[i]--;
			stars[i]=1;
			i++;
		}
		else if(ram[i]%2==0){
			if(ram[i]>0)
				ram[i]--;
			stars[i]=1;
			i--;
		}



	}
	for(i=0;i<n;i++){
		sum_ram+=ram[i];
		sum_stars+=stars[i];
	}
	cout << sum_stars << " " << sum_ram << endl;


}