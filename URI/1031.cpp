#include <iostream>

using namespace std;

int josephus(int n, int k){
    int r = 0;
    for(int i=1;i<n;i++)
    	r = (r+k)%i;
    return r;
}

int main(){
    int n, x, y, j, num, pulo;
    while(1){
           cin >> n;
           if(n == 0) break;
           y = 1;
           for(;;){
                   if(josephus(n,y) != 11) y++;
                   else break;
           }
           cout << y << endl;
    }
    return 0;
}