/*TRANSFERENCIA DE PILHA PARA FILA */


#include <stdio.h>
#include <stdlib.h>
#define l 600

typedef struct pilha{ //Registro da pilha
            int v[l];
            int topo;};

typedef struct fila{ //Registro da fila
            int v[l];
            int topo;
            int inicio;};

void imp_pilha(struct pilha x){ //imprimir pilha
    int i;
    for(i=x.topo;i>=0;i--){
        printf("[%d] %d\n",i,x.v[i]);
    }
}

void imp_fila(struct fila x){ //imprimir fila
    int i,j,z;
    for(i=x.topo;i>=0;i--){
        printf("[%d]%d   ",i,x.v[i]);
    }
    printf("\n");
}

main(){
    struct pilha p1; //variavel tipo pilha
    struct fila f1,f2,f3; //variavel tipo fila
    p1.topo=-1;
    f1.topo=-1;
    f2.topo=-1;
    f3.topo=-1;
    int op,i,z,j,k;
    i=-1;
    //colocando valores para Pilha ate q o numero seja negativo
    printf("Digite numero e negativo para sair\n");
    do{
        i=i+1;
        printf("[%d] ",i);
        scanf("%d",&op);
        if(op>=0){
            if(p1.topo<600){
                p1.topo=p1.topo+1;
                p1.v[p1.topo]=op;
            }
        }
    }while(op>=0);
    system("cls");

    //imprimindo Pilha
    printf("Pilha\n");
    imp_pilha(p1);
    system("pause");

    //Jogando valores da Pilha para Fila1
    for(i=p1.topo;i>=0;i--){
        if(f1.topo<600){
            f1.topo=f1.topo+1;
            f1.v[f1.topo]=p1.v[p1.topo];
            p1.topo=p1.topo-1;
        }
    }
    system("cls");
    //imprimindo Pilha
    printf("Pilha\n");
    imp_pilha(p1);
    //imprimindo Fila1
    printf("\nFila\n");
    imp_fila(f1);
    system("pause");

    //jogando valores da Fila1 para Fila2
    for(i=f1.topo;i>=0;i--){
        z=0;
        //verificando se existe valores igual entre Fila 2 e comeco da Fila 1 (posicao 0)
        for(j=f2.topo;j>=0;j--){
            if(f1.v[0]==f2.v[j]){
            //se achar algum valor repetido z passa a ser 1 senao z continua como 0
            z=1;
            }
        }
        //se z igual a 0 quer dizer q nao tem numero repetido, joga valor para Fila2
        if(z==0){
            f2.topo=f2.topo+1;
            f2.v[f2.topo]=f1.v[0];
            //reposicionando os valores da fila1
            for(k=0;k<=f1.topo;k++){
                f1.v[k]=f1.v[k+1];}
                f1.topo=f1.topo-1;
        }
        //se z igual 1 quer dizer q tem valor repetido, joga valor para fila 3
        if(z==1){
            f3.topo=f3.topo+1;
            f3.v[f3.topo]=f1.v[0];
            //reposicionando os valores da fila1
            for(k=0;k<=f1.topo;k++){
                f1.v[k]=f1.v[k+1];
            }
                f1.topo=f1.topo-1;
            }
    }
    system("cls");
    //imprimindo fila 1
    printf("Fila 1\n");
    imp_fila(f1);
    //imprimindo fila 2
    printf("\nFila 2\n");
    imp_fila(f2);
    //imprimindo fila 3
    printf("\nFila 3\n");
    imp_fila(f3);
}
