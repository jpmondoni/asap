#include <stdio.h>

int main(){
    int N,H[10000],i,picos;
    scanf("%d",&N);

    while(N!=0){
        picos=0;
        for(i=0;i<N;i++)
            scanf("%d",&H[i]);
        
        //mais que 2 picos
        if(N>2){
            for(i=0;i<N-2;i++){
                if( (H[i]<=H[i+1] && H[i+1]>H[i+2]) || (H[i]>=H[i+1] && H[i+1]<H[i+2]))
                    picos++;
            }

            if( (H[N-2]<=H[N-1] && H[N-1]>H[0]) || (H[N-2]>=H[N-1] && H[N-1]<H[0]))
                picos++;

            if( (H[N-1]<=H[0] && H[0]>H[1]) || (H[N-1]>=H[0] && H[0]<H[1]))
                picos++;
        }
        //somente 2 picos
        else{
            if( (H[0]<=H[1] && H[1]>H[0]) || (H[0]>=H[1] && H[1]<H[0]))
                picos++;
                
            if( (H[1]<=H[0] && H[0]>H[1]) || (H[1]>=H[0] && H[0]<H[1]))
                picos++;
        }
        printf("%d\n",picos);
        scanf("%d",&N);
    }

    return 0;
}