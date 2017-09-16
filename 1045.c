#include <stdio.h>

int main(){

    int  i,j;
    float num[3], aq,bq,cq,aux;

    for(i=0;i<3;i++){
        scanf("%f", &num[i]);
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){  
            if(num[i]>num[j]){        
                aux=num[j];   
                num[j]=num[i];   
                num[i]=aux;
            }
        }
    }


    aq = num[0]*num[0];
    bq = num[1]*num[1];
    cq = num[2]*num[2];
    if(num[0] >= (num[1] + num[2])){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    } else if(aq == (bq+cq)){
        printf("TRIANGULO RETANGULO\n");
    } else if(aq > (bq+cq)){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(aq < (bq+cq)){
        printf("TRIANGULO ACUTANGULO\n");
    } if(num[0] == num [1] && num[0] == num [2] && num[1] == num [2]){
        printf("TRIANGULO EQUILATERO\n");
    } else if(num[0] == num [1] || num[0] == num [2] || num[1] == num [2]){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}