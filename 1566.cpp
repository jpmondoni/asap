#include <cstdio>

using namespace std;

#define MAX  300

void zerar(int cont[],int n){
    for(int i=0;i<MAX;i++){
        cont[i]=0;
    }
}

int main(){

    int n,m,k,maior,cont[MAX],i;

    for(scanf("%d",&n); n ;n--){
        scanf("%d",&m);
        zerar(cont,m);
        i=0;
        for(maior=k=0; m ;m--){
            scanf("%d",&k);
            cont[k]++;
            if(k>maior)maior=k;
        }
        for(k=19;k<=maior;k++){
            while(cont[k]--){
                if(i==1)
                    printf(" %d",k);
                else{
                    printf("%d",k);
                    i=1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
