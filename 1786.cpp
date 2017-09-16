#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	int b1,b2,sa,sb,j;
	
	while(cin >> a){
		b1=0,b2=0,sa=0,sb=0;
		j=9;
		for(int i=0;i<a.size();i++){
			int v=a[i]-48;
			sa+=v*(i+1);
			sb+=v*j;
			j--;

			//cout << " a[i]-48=" << a[i]-48 << " " << v << "x" << i+1 << "=" << v*(i+1) << " tmp="<< tmp << endl;
		}
		b1=sa%11;
		b2=sb%11;
		
		if(b1==10 || b1==11)
			b1=0;

		if(b2==10 || b2==11){		
			b2=0;
		}
//		cout << b1 << " " <<  b2 << endl;
		cout << a[0] << a[1] << a[2] << "." << a[3] << a[4] << a[5] << "." << a[6] << a[7] << a[8] << "-" << b1 << b2 << endl;
	}
	return 0;


}