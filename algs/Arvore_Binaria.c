#include <stdio.h>
#include <stdlib.h>

#define OK   1
#define ERRO 0

/* Implementação de Arvore Binaria */

typedef int Tipo_Dado;

typedef struct bloco_ab
        {
           Tipo_Dado          Dado;
           struct bloco_ab    *FilhoEsq, *FilhoDir;
           struct bloco_ab    *Pai;  /* adicionalmente foi incluido o ponteiro para pai */
        }  Nodo_AB;


/***  Rotinas...

void inicializa_arvbin               (Nodo_AB **AB);
int insere_ord_arvbin                (Nodo_AB **AB, Tipo_Dado Dado);
int  remove_dado_arvbin              (Nodo_AB **AB, Tipo_Dado Dado);
void exibe_ab_infixado               (Nodo_AB   *AB);
void exibe_ab_prefixado              (Nodo_AB   *AB);
void exibe_ab_posfixado              (Nodo_AB  *AB);
void apaga_arvbin                    (Nodo_AB **AB);
int conta_nodos_arvbin               (Nodo_AB   *AB);
Nodo_AB *pesquisa_arvbin             (Nodo_AB   *AB, Tipo_Dado Dado);
Nodo_AB *maior_arvbin                (Nodo_AB   *AB, Tipo_Dado *Dado);
Nodo_AB *menor_arvbin                (Nodo_AB   *AB, Tipo_Dado *Dado);
Nodo_AB *sucessor_arvbin             (Nodo_AB   *AB, Tipo_Dado *Dado);
Nodo_AB *predecessor_arvbin          (Nodo_AB   *AB, Tipo_Dado *Dado);


***/


int  inicializa_arvbin (Nodo_AB **AB)
{
    *AB = NULL;
    return 0;
}


int insere_ord_arvbin (Nodo_AB **AB, Tipo_Dado Dado)
{
   /* Arvore binaria onde os nodos sao inseridos de maneira ordenada:   */
   /* - Os nodos a esquerda de um nodo pai sao sempre menores que ele   */
   /* - Os nodos a direita de um nodo pai sao sempre maiores que ele    */

    Nodo_AB *novo,  *aux, *temp;

    novo = (Nodo_AB *) malloc (sizeof (Nodo_AB));
    if ( novo == NULL ) return (ERRO);

    novo -> Dado = Dado;
    novo -> FilhoEsq = NULL;
    novo -> FilhoDir = NULL;
    aux = *AB;

    while ( aux != NULL )     /* Acha o ponto onde vai inserir */
    {
        temp = aux;
        if ( Dado > (aux -> Dado) )
            aux = aux -> FilhoDir;                         /*  insere_ord_arvbin (aux -> FilhoDir, Dado)  */
        else
            aux = aux -> FilhoEsq;                         /*  insere_ord_arvbin (aux -> FilhoEsq, Dado)  */
    }
    if ( aux == *AB)
    {
        novo -> Pai = NULL;
        *AB = novo;
    }
    else
    {
        novo -> Pai = temp;
        if (Dado > temp->Dado)
            temp -> FilhoDir = novo;
        else
            temp -> FilhoEsq = novo;
    }
    return(OK);
}


void exibe_ab_infixado (Nodo_AB *AB)
{
    if ( AB != NULL )
    {
        exibe_ab_infixado ( AB -> FilhoEsq );
        printf ("%d\n", AB -> Dado);
        exibe_ab_infixado ( AB -> FilhoDir);
    }
}


void exibe_ab_prefixado (Nodo_AB *AB)
{
    if ( AB != NULL )
    {
        printf ("%d\n", AB -> Dado);
        exibe_ab_prefixado ( AB -> FilhoEsq );
        exibe_ab_prefixado ( AB -> FilhoDir);
    }
}

void exibe_ab_posfixado (Nodo_AB *AB)
{
   if ( AB != NULL )
   {
      exibe_ab_posfixado ( AB -> FilhoEsq );
      exibe_ab_posfixado ( AB -> FilhoDir);
      printf ("%d\n", AB -> Dado);
   }
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}



int altura(Nodo_AB *AB){
   if((AB == NULL) || (AB->FilhoEsq == NULL && AB->FilhoDir == NULL))
       return 0;
   else
       return 1 + maior(altura(AB->FilhoEsq), altura(AB->FilhoDir));
}

int contarNos(Nodo_AB *AB){
   if(AB == NULL)
        return 0;
   else
        return 1 + contarNos(AB->FilhoEsq) + contarNos(AB->FilhoDir);
}

int contarFolhas(Nodo_AB *AB){
   if(AB == NULL)
        return 0;
   if(AB->FilhoEsq == NULL && AB->FilhoDir == NULL)
        return 1;
   return contarFolhas(AB->FilhoEsq) + contarFolhas(AB->FilhoDir);
}

int Compara_AB(Nodo_AB *ab_1, *ab_2)
{


    // Caso 1: ambas vazias
    if (ab_1==NULL && ab_2==NULL)
        return 1; //Retorna 1, pois duas árvores vazias são duas árvores iguais.

    // Caso 2: Dado o caso 1, comparar ambas as árvores
    if (ab_1!=NULL && ab_2!=NULL)
    {
        ab_1->info == ab_2->info &&
        Compara_AB(ab_1->FilhoEsq, ab_2->FilhoEsq) &&
        Compara_AB(ab_1->FilhoDir, ab_2->FilhoDir);
        return 1; //Retrna 1, pois os dados são iguais.
    }

    // Caso 3: Se uma estiver vazia e outra não, as árvores são diferentes. Então, retornar 0.
    return 0;
}


int SomaDadoNodo(Nodo_AB *AB)
{
    if (AB==NULL)
        return 0;
    else
        return AB->FilhoDir->Dado + AB->FilhoEsq->Dado
}


int

main ( )
{

    Nodo_AB *Arvore;

    inicializa_arvbin (&Arvore);

    if ( insere_ord_arvbin(&Arvore, 10) )
        printf("Insercao do valor: 10\n");
    else
        printf(">> Erro na insercao!\n");

    if ( insere_ord_arvbin(&Arvore, 5) )
        printf("Insercao do valor: 5\n");
    else
        printf(">> Erro na insercao!\n");

    if ( insere_ord_arvbin(&Arvore, 15) )
        printf("Insercao do valor: 15\n");
    else
        printf(">> Erro na insercao!\n");

    if ( insere_ord_arvbin(&Arvore, 2) )
        printf("Insercao do valor: 2\n");
    else
        printf(">> Erro na insercao!\n");

    if ( insere_ord_arvbin(&Arvore, 30) )
        printf("Insercao do valor: 30\n");
    else
        printf(">> Erro na insercao!\n");

    if ( insere_ord_arvbin(&Arvore, 25) )
        printf("Insercao do valor: 25\n");
    else
        printf(">> Erro na insercao!\n");


    printf("\nMostra Arvore: modo infixado (ordem)\n");
    exibe_ab_infixado(Arvore);

    printf("\nMostra Arvore: modo prefixado (pre-ordem)\n");
    exibe_ab_prefixado(Arvore);

    printf("\nMostra Arvore: modo posfixado (pos-ordem)\n");
    exibe_ab_posfixado(Arvore);
    altura(Arvore);
    printf("\n%d",altura);

    printf("\nFim\n");
    system("pause");
}
