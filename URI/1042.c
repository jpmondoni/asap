#include <stdio.h>

int main(){

    int  i, aux, l, numeros[3], sequencia_original[3];

    for(i=0;i<3;i++){
        scanf("%d", &numeros[i]);
    }

    for(i=0;i<3;i++){
        sequencia_original[i]=numeros[i];
    }

    for(i=0;i<3;i++){
        for(l=0;l<3;l++){  
            if(numeros[i]>numeros[l]){        
                aux=numeros[l];   
                numeros[l]=numeros[i];   
                numeros[i]=aux;
            }
        }
    }

    for(i=2;i>=0;i--){
        printf("%d\n", numeros[i]);
    }

    printf("\n");
    for(i=0;i<3;i++){
        printf("%d\n", sequencia_original[i]);
    }



    return 0;
}