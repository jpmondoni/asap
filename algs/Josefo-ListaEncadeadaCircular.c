/*Um pequeno exército se viu rodeado certa vez por um exército mais forte que ele.
A única chance para nao serem esmagados seria que alguem fosse buscar reforço montado no único cavalo da tropa.
Para decidir quem seria o sortudo a ir buscar ajuda, decidiu-se colocar todos os soldados em um circulo,
sorteando-se entao um nome de um soldado e um numero M. A partir do soldado sorteado,
o  M-ésimo soldado no sentido horario seria retirado da roda tendo que ficar no campo de batalha.
Procedendo-se desta forma, o último soldado que restasse no circulo seria aquele que iria buscar ajuda.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    struct no {  //Criação da estrutura NÓ com o ponteiro PROX, para a criação da lista circular e a numeração do soldado
        int idsoldado;
        struct no *prox;
    };
    struct no *p, *q; //Criação de ponteiros p e q para a lista circular
    int n, m; //Declaração das variáveis N e M. N=número de soldados. M=Valor atribuído ao M-ésimo soldado retirado da roda

    int i, contagem;

    printf("Digite o numero de soldados: ");
    scanf("%d", &n); //Captação do número de soldados
    printf("Digite M (M-esimo soldado): ");
    scanf("%d", &m); //Captação do M-ésimo soldado retirado do circulo.

    p = q = malloc(sizeof(struct no)); // Criação da lista circular encadeada contendo todos os soldados - alocação na memória
    p->idsoldado = 1; // O ponteiro P recebe o valor da variavel soldado = 1. Logo, este é o valor do mesmo.
    for (i = 2; i <= n; ++i) { // Incrimentar i enquanto o numero de soldados for menor ou igual ao mesmo, sendo que este inicia em 2.
        p->prox = malloc(sizeof(struct no)); // Alocar o ponteiro P com o ponteiro prox, com o tamanho da estrutura "no".
        p = p->prox; // P é igual ao redirecionamento de P para PROX
        p->idsoldado = i; // Redirecionar P para soldado igual ao valor de i.
    }

    p->prox = q;   // Aqui fechamos a lista circular, pois estamos direcionando o último ponteiro (p) para o primeiro (q).

    for (contagem = n; contagem > 1; --contagem) { // Decrementar a contagem(=n) enquanto a contagem for maior que 1.
       for (i = 0; i < m - 1; ++i) // Incrementar i enquanto i for menor que o valor m
          p = p->prox; // Enquanto o laço FOR estiver ocorrendo, direcionar o ponteiro P para o próximo elemento da lista.

       p->prox = p->prox->prox;  // Remover o soldado correspondente ao M-ésimo número em questão da lista circular
    }

    printf("Soldado que buscara ajuda: Soldado Numero %d\n.", p->idsoldado);  //Exibir qual soldado buscara ajuda, através do ponteiro criado.

    return 0;
}
