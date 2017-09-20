#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int k=0;

double bis(double a, double b, double e){
	double Xo = (a+b)/2;
	double ek = e;
	char s;

	double fXo = Xo*Xo - 3;
	double fA = a*a - 3;

	k++;

	if((fA > 0 && fXo > 0) || (fA < 0 && fXo < 0) ){
		a = Xo;
		s = '+';
	}
	else{
		b = Xo;
		s = '-';
	}

	printf("%d   %.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\t\t%c\t%.4lf\n",k,a,b,Xo,fA,fXo,s,b-a);
	if(b-a > e){
		return bis(a, b, e);		
	}
	else
		return Xo;
}

int main(){
	double a, b, e;

	cin >> a >> b >> e;
	double Xo = (a+b)/2;

	cout << endl;

	cout << "k   a\t\tb\tXo\tf(a)\tf(Xo)\t\tS\tE\n";
	printf("%d   %.4lf\t%.4lf\t%.4lf\t%.4lf\t%.4lf\t\t+\t-\n",0,a,b,Xo,a*a-3,Xo*Xo-3,b-a);
	cout << "\n\n" << "X = " << bis(a, b, e) << endl; 

}
