#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    int h1,m1,h2,m2;
        
    cin >> h1 >> m1 >> h2 >> m2;
    while(h1!=0 || m1!=0 || h2!=0 || m2!=0){    
        int minutos1=(60*h1 + m1);
        int minutos2=(60*h2 + m2);
        
        if(minutos2>minutos1){
             cout << minutos2-minutos1;               
        }else if(minutos1>minutos2){
              cout << 1440-minutos1+minutos2;       
        }else{
              cout << 0;      
        }
        cin >> h1 >> m1 >> h2 >> m2;
    }
    return 0;
}