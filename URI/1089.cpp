#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
    int n,i,picos=0, aux;
    while(scanf("%d",&n), n>0){
        picos=0;
        vector<int> looping;
        for(i=0;i<n;i++){
            scanf("%d",&aux);
            looping.pb(aux);
            //looping[i+n]=looping[i]; // concatenando na própria leitura
        }
        looping.pb(looping[0]);
        looping.pb(looping[1]);

        for(i=0;i<n;i++){
            if( (looping[i]<looping[i+1] && looping[i+1]>looping[i+2]) || (looping[i]>looping[i+1] && looping[i+1]<looping[i+2]) )
                picos++;
        }
        printf("%d\n",picos);
    }
    return 0;
}