#include <cstdio>

int main(){

    int N,i;
    long long int TamanhoFotos,Gigas,Devices=0;
    double Porcentagem;
    
    scanf("%d %lld %lld",&N,&TamanhoFotos,&Gigas);
    
    TamanhoFotos=TamanhoFotos*N;
    Gigas=Gigas*1073741824;
    Porcentagem=TamanhoFotos/Gigas*100;
    
    //printf("Espaco %lld de %lld [%.2lf]\n",T,G,Porcentagem);
    
    if(Porcentagem<100)
        printf("1 dispositivo e %0.2f%%\n",Porcentagem);
    
    else{
        while(Porcentagem>=100){
            Porcentagem-=100;
            Devices++;
        }
        if(Porcentagem>0)
            Devices++;
        printf("%lld dispositivos e %0.2f%%\n",Devices,Porcentagem);
    }
    
    return 0;
}