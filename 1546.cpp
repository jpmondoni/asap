#include <iostream>

using namespace std;

int main(){
	int n, k;

	cin >> n;
	for (int i=0;i<n;i++){
		cin >> k;
		for(int j=0;j<k;j++){
			int feed;
			cin >> feed;
			switch(feed){
				case 1:
					cout << "Rolien\n";
					continue;

				case 2:
					cout << "Naej\n";
					continue;

				case 3:
					cout << "Elehcim\n";
					continue;

				case 4:
					cout << "Odranoel\n";
					continue;
			}

		}
	}


}