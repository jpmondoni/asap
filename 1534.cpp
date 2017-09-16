#include <iostream>

using namespace std;

int main(){    
    int n;     

    while(cin >> n){ 
        
        if(n>0){ 
            int array[n][n];           
            
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){                   
                    if(j == ((n-1)-i)) 
                        array[i][j]=2;
                    else if(i == j) 
                        array[i][j]=1;
                    else 
                        array[i][j]=3;
                }
            }

            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout << array[i][j];                   
                }
                cout << endl;
            }                  
        }           
    }
     
    return 0;
}