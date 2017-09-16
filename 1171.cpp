#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> nums;
	vector<int> sub;
	int aux, n;
	cin >> n;

	for(int a=0;a<n;a++){
		cin >> aux;
		nums.push_back(aux);
	}	
	sort(nums.begin(),nums.end());
	int ct=1;
	for(int i=0;i<nums.size();i++){
		if(nums[i]==nums[i+1])
			ct++;
		else{
			cout << nums[i] << " aparece " << ct << " vez(es)\n";
			ct=1;
		}
	}
		
}