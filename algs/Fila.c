/* Simples Algoritmo de Fila - Junho/2015 */
#include <stdio.h>
#include <stdlib.h>

struct no{
    int info;
    struct no* prox;
};
typedef struct no No;

struct fila{
    No* ini;
    No* fim;
};
typedef struct fila Fila;

Fila* cria(void);
No* ins_fim(No* fim, int idDoc);
No* ret_ini(No* ini);

void insere (Fila* f, int idDoc);
float retira (Fila* f);
int vazia (Fila* f);
void libera (Fila* f);
void imprime (Fila* f);

int main()
{
    int idDoc;
    int i,n,q;
    Fila* f = cria();
    do{
        system("cls");
        printf("* Fila de Impressao *\n");
        printf("1 -> Colocar documentos na Fila \n");
        printf("2 -> Remover documentos da Fila\n");
        printf("3 -> Inicializar Fila\n");
        printf("4 -> Imprimir Fila \n");
        printf("5 -> Sair \n:");
        scanf("%d", &q);     /* Ler a opcao do usuario */
        switch(q) {
                    case 1: printf("\nNumero de documentos: ");
                            scanf("%d",&n);
                            for(i=0;i<n;i++){
                                printf("\nInsira ID do %do documento: ",i+1);
                                scanf("%d",&idDoc);
                                insere(f,idDoc);
                            }
                            break;
                    case 2: printf("\nQuantidade de documentos a serem removidos: ");
                            scanf("%d",&n);
                            for(i=0;i<n;i++){
                                printf("Retira %do elemento: %.1f\n",i+1, retira(f));
                            }
                            break;
                    case 3: libera(f);
                            printf("\nFila inicializada.");
                            system("pause");
                            break;
                    case 4: imprime(f);
                            system("pause");
                            break;
    }
    getchar();
	} while ((q != 5) );
    return 0;
}

Fila* cria (void) {
    Fila* f = (Fila*) malloc(sizeof(Fila));
    f->ini = f->fim=NULL;
    return f;
}

/* Função auxiliar: retira do inicio */
No* ins_fim(No* fim, int idDoc)
{
    No* p=(No*)malloc(sizeof(No));
    p->info=idDoc;
    p->prox=NULL;
    if(fim!=NULL)//Verifica se a lista não está vazia
        fim->prox=p;
    return p;
}

/* função auxiliar: retira do início */
No* ret_ini(No* ini)
{
    No* p=ini->prox;
    free(ini);
    return p;
}

void insere (Fila *f, int idDoc)
{
        f->fim = ins_fim(f->fim,idDoc);
        if(f->ini==NULL) /*fila antes vazia?*/
            f->ini = f->fim;

}

float retira (Fila *f)
{
    int idDoc;
    if (vazia(f)){
        printf("Fila Vazia.\n");
        exit(1); /*Aborta o programa*/
    }
    idDoc = f->ini->info;
    f->ini=ret_ini(f->ini);
    if(f->ini == NULL) /*fila ficou vazia? */
        f->fim = NULL;
    return idDoc;
}

int vazia (Fila *f)
{
    return (f->ini==NULL);
}

void imprime (Fila *f)
{
    int i=1;
    No *q;
    for(q=f->ini; q!=NULL; q=q->prox){
        printf("ID do Documento %d: %d\n",i, q-> info);
        i++;
    }
}


void libera (Fila* f)
{
    No* q = f->ini;
    while (q!=NULL) {
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(f);
}
