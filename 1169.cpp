#include <iostream>
#include <cstdio>

using namespace std;
int main(){

    unsigned long long int g,t = 1;
    int qt;
    cin >> qt;
    for(int i=0;i<qt;i++){
        
        cin >> g;
        if(g == 64){
            printf("1537228672809129 kg\n");
            continue;
        }
        
        for(int j=1;j<=g;j++){
            t*=2;
        }
        
        cout << (t/12)/1000 << " kg" << endl;
        t=1;
    }
}