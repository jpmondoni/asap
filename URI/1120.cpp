#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    int n, i, j, zero, cont;
    long long int num;
    char cts[101];
    
    while(cin >> n){
        scanf("%s",cts);
        
        if(n == 0 && cts[0] == '0') break;
        
        char nv[101];
        i = 0;
        j = 0;
        zero = 0;
        num = 0;
        cont = 0;
        while(true){
                if(cts[i] == '\0'){
                    break;
                }
                else if(cts[i] == n+48){
                    i++;
                }
                else{
                    nv[j] = cts[i];
                    if(j == zero) 
                        cont++;
                    if(cts[i] == '0') 
                        zero++;
                    i++;
                    j++;
                }
        }

        nv[j] = '\0';
        
        stringstream f(nv);
        f >> num;
        
        if(j == 0) 
            cout << "0\n";
        else if(j == zero) 
            cout << num << endl;
        else if(cont > 0){
            for(int k = cont-1; nv[k] != '\0'; k++){
                    cout << nv[k]-48;
            }
            cout << endl;
        }
    }
    
    return 0;
}