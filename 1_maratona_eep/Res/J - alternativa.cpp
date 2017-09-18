#include <cstdio>

int main(){

    int N,i;
    int T,G,drives=0;
    double porcentagem,Taux,Gaux;
    
    while(scanf("%d %d %d",&N,&T,&G)!= EOF){
        drives = 0;
        T=T*N;
        G=G*1073741824;
        Taux=T;
        Gaux=G;
        porcentagem=Taux/Gaux*100;
        
        //printf("Espaco %lld de %lld [%.2lf]\n",T,G,porcentagem);
        
        if(porcentagem<100)
            printf("1 dispositivo e %0.2f%%\n",porcentagem);
        
        else{
            while(porcentagem>=100){
                porcentagem-=100;
                drives++;
            }
            if(porcentagem>0)


                drives++;
            printf("%d dispositivos e %0.2f%%\n",drives,porcentagem);
        }
    }
    return 0;
}
