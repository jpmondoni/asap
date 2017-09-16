/*
Laboratório de Estrutura de Dados - Professor Alexandre Mello
3º Semestre Ciência da Computação - Escola de Engenharia de Piracicaba
Objetivo do algoritmo: Obter a altura de uma árvore de forma recursiva.
Junho/2015
*/


#include <stdio.h>
#include <stdlib.h>


/* Uma árvore binária tem uma informação (int), um pointero para o filho da esquerda e um ponteiro para o filho da direita */
struct Arvore
{
    int info;
    struct Arvore *esq;
    struct Arvore *dir;
};
typedef struct Arvore arv;


/*
Função auxiliar que cria o nó e aloca NULL no dado da esquerda e direita.
*/
struct Arvore* novo(int info)
{
    struct Arvore* arv = (struct Arvore*)
                             malloc(sizeof(struct Arvore));
    arv->info  = info;
    arv->esq  = NULL;
    arv->dir = NULL;

    return(arv);
}

/*
Assinatura da função
*/

int Compara_AB(arv *ab_1, arv *ab_2);
int Altura_AB(arv *ab_1);

//Rotina Principal
int main()
{
    arv *raiz1 = novo(1);
    arv *raiz2 = novo(1);
    raiz1->esq = novo(2);
    raiz1->dir = novo(3);
    raiz1->esq->esq = novo (4);
    raiz1->esq->dir = novo(5);

    raiz2->esq = novo(2);
    raiz2->dir = novo(3);
    raiz2->esq->esq = novo(4);
    raiz2->esq->dir = novo(5);

    printf("\n%d",Altura_AB(raiz1));
    printf("\n%d",Altura_AB(raiz2));

    getchar();


  return 0;
}

int Altura_AB(arv *AB){

	int altura_ab = 0;

	if(AB != NULL){
		altura_ab++;

		int alturaEsq = Altura_AB(AB->esq);
		int alturaDir = Altura_AB(AB->dir);

		if (alturaEsq > alturaDir) {
			altura_ab += alturaEsq;
		}

		else {
			altura_ab += alturaDir;
		}
	}
	return altura_ab;
}
