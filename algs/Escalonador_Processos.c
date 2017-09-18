// Setembro/2015
/*
    ** Receber lista de processos - MODELO
    *** NOME  | PID | PRI | CPU | I/O | TERMINO |
         P3     100    0     3      1     ?     |
         P5     101    2     3      0     ?     |
         P2     102    1     2      2     ?     |
         P1     103    0     0      2     ?     |
         P6     104    1     1      2     ?     |

    ** Escalonar processo baseado em 2 métodos: FIFO e Por Prioridade

    Notas:
    1 - Criar estrutura para armazenar os processos
    2 - Carregar os processos e atribuir os dados de um arquivo a uma matriz 2x2
        Obs:
            1) Carregar strings separadas por delimitadores para que seja feita a leitura
    3 - Ordenar processos em filas de prioridade e PID, respectivamente
        EX (Conforme modelo):
        FILA P0 - P3;P1
        FILA P1 - P2;P6
        FILA P2 - P5

        Obs:
            1) PID 0,1,2..N.
            2) PRIORIDADE 0,1,2..N.
    4 - Fazer a transição de estados de cada processo, alterando entre pronto, executando e bloqueado
    5 - Imprimir as modificações na tela
    6 - Determinar a ordem de término.

*/
#include <stdio.h>
#include <stdlib.h>
#define espera 2000
struct Node{
	int num;
	int pid;
	int prioridade;
	int cpu;
	int cpu_feitos;
	int io;
	int io_feitos;
	char nome[10];
	int situacao;
	struct Node *prox;
};

typedef struct Node node;

struct prontos{
	struct Node **topo;
    int qtProcessos;
};
 struct prontos prontos[6];

char tecla;
char bloqueado[] = "\x1b[31mBloqueado\x1b[0m";
char executando[] = "\x1b[32mExecutando...\x1b[0m";
char aguardando[] = "\x1b[33mAguardando\x1b[0m";
char finalizado[] = "\x1b[34mFinalizado\x1b[0m";
int qtprontos=0;
int totalProcesos=0;
int tam=5;
//situ=0  aguardando, 1=executando, 2=bloqueado, 3=finalizado

int nivelATIVO=1;
int seed_pid = 100;

//int Escalonador_Simples(node *PRONTOS,node *EXECUTANDO,node *BLOQUEADO,node *FINALIZADOS);
int menu(void);
void opcao(node *PRONTOS,node *EXECUTANDO,node *BLOQUEADO,node *FINALIZADOS, int op);
void inicia(node *PRONTOS);
int vazia(node *PRONTOS);
node *aloca();
void insere(node *PRONTOS);
node *retira(node *PRONTOS);
void listaProcessos(node *PRONTOS,node *EXECUTANDO,node *BLOQUEADO,node *FINALIZADOS);
void libera(node *PRONTOS);
void desenha_linha1(int qtd);

int main(void){
	node *PRONTOS_0     = (node *) malloc(sizeof(node));
	node *PRONTOS_1     = (node *) malloc(sizeof(node));
	node *PRONTOS_2     = (node *) malloc(sizeof(node));
	node *PRONTOS_3     = (node *) malloc(sizeof(node));
    node *PRONTOS_4     = (node *) malloc(sizeof(node));
    node *PRONTOS_5     = (node *) malloc(sizeof(node));
    node *BLOQUEADO     = (node *) malloc(sizeof(node));
	node *EXECUTANDO    = (node *) malloc(sizeof(node));
	node *FINALIZADOS   = (node *) malloc(sizeof(node));

	inicia(PRONTOS_0);
    inicia(PRONTOS_1);
    inicia(PRONTOS_2);
    inicia(PRONTOS_3);
    inicia(PRONTOS_4);
    inicia(PRONTOS_5);
	inicia(BLOQUEADO);
	inicia(FINALIZADOS);
	inicia(EXECUTANDO);

    prontos[0].topo=&PRONTOS_0;
    prontos[1].topo=&PRONTOS_1;
    prontos[2].topo=&PRONTOS_2;
    prontos[3].topo=&PRONTOS_3;
    prontos[4].topo=&PRONTOS_4;
    prontos[5].topo=&PRONTOS_5;

    prontos[0].qtProcessos=0;
    prontos[1].qtProcessos=0;
    prontos[2].qtProcessos=0;
    prontos[3].qtProcessos=0;
    prontos[4].qtProcessos=0;
    prontos[5].qtProcessos=0;

	int opt;
    AdicionaProcessos("P1",0,3,0,100);
    AdicionaProcessos("P3",2,3,1,101);
    AdicionaProcessos("P5",1,3,0,102);
    AdicionaProcessos("P6",2,2,1,103);
    AdicionaProcessos("P4",0,2,0,104);
    AdicionaProcessos("P2",1,2,1,105);

	do{ opt=menu();
		opcao2(EXECUTANDO, BLOQUEADO, FINALIZADOS,opt);
        }while(opt!=9);

	return 0;
}

void AdicionaProcessos(char nome[], int pri, int cp, int i,int p){
                node *novo=(node *) malloc(sizeof(node));
                novo->pid = p;
                novo->prox = NULL;
                novo->cpu=cp;
                novo->io=i;
                strcpy(novo->nome,nome);
                novo->prioridade=pri;
                novo->io_feitos=0;
                novo->cpu_feitos=0;
                novo->situacao=0;
                prontos[novo->prioridade].qtProcessos = prontos[novo->prioridade].qtProcessos+1;
            if(vazia(prontos[novo->prioridade].topo)) (*prontos[novo->prioridade].topo)->prox=novo;
            else{
                node *tmp = *(prontos[novo->prioridade].topo);
                while(tmp->prox != NULL) tmp = tmp->prox;
                tmp->prox = novo;
                }
                seed_pid++;
        totalProcesos++;

    }

void insere2() {
        if(tam>10) {
            desenha_linha1(70);
            printf("\t\t\x1b[31m --- ERRO! ---\x1b[0m\n");
            printf("\t\x1b[33m Limite de Processos Criados (10)\x1b[0m\n\n\n");
            system("read -p \"Pressione enter para voltar\" saindo");  }
        else {  node *novo=aloca();
                novo->prox = NULL;
                prontos[novo->prioridade].qtProcessos = prontos[novo->prioridade].qtProcessos+1;
            if(vazia(prontos[novo->prioridade].topo)) (*prontos[novo->prioridade].topo)->prox=novo;
            else{
                node *tmp = *(prontos[novo->prioridade].topo);
                while(tmp->prox != NULL) tmp = tmp->prox;
                tmp->prox = novo;
                }
        totalProcesos++;
        }
}

void opcao2(node *EXECUTANDO,node *BLOQUEADO,node *FINALIZADOS, int op){
    switch(op){
            case 1:
                insere2();
                break;
            case 2:
                listaTodos2(EXECUTANDO, BLOQUEADO, FINALIZADOS);
                printf("\n\n\n\n\n");
                system("read -p \"PARA VOLTAR    -   PRESSIONE ENTER\" saindo");
                break;
            case 5:
                iniciaEscalonador(EXECUTANDO, BLOQUEADO, FINALIZADOS,1);
                printf("\n\n\n\n\n");
                system("read -p \"ESCALONAMENTO  FINALIZADO   -   PRESSIONE ENTER\" saindo");
                break;
            case 6:
                iniciaEscalonador(EXECUTANDO, BLOQUEADO, FINALIZADOS,2);
                printf("\n\n\n\n\n");
                system("read -p \"ESCALONAMENTO  FINALIZADO   -   PRESSIONE ENTER\" saindo");
                break;
            case 7:
                iniciaEscalonador(EXECUTANDO, BLOQUEADO, FINALIZADOS,3);
                printf("\n\n\n\n\n");
                system("read -p \"ESCALONAMENTO  FINALIZADO   -   PRESSIONE ENTER\" saindo");
            break;
			case 8:
                componentes();
                	system("read -p \"\" saindo");
            break;
	}
}

int menu(void) {
    system("clear");
	int opt;
	printf(" Escolha a opcao\n");
	printf(" 1. Criar Processo\n");
    printf(" 2. Listar Processos\n");
    printf(" 3. Corrigir tabela de processos -faltando\n");
    printf(" 4. Limpar tabela de processos -faltando\n");
    printf(" 5. Round Robin\n");
    printf(" 6. Prioridade Estatica\n");
	printf(" 7. Prioridade Dinamica\n");
    printf(" 8. Componentes da equipe\n");
    printf(" 9. Sair\n");
	printf(" > ");scanf("%d", &opt);
	return opt;
}

int componentes(void) {
    system("clear");
	printf("Ciencia Da computacao 4 Semestre\n");
	printf("Algoritmo de escalonamento\n");
	printf("Sistemas Operacionais 2\n");
	printf("Professor Jose L. Zem\n");
	printf("\n");
	printf("Gabriel Fava\tRa:201400084\n");
	printf("Joao Paulo\tRa:201400102\n");
	printf("Joao Victor\tRa:201400103\n");
	printf("Lucas Cavenaghi\tRa:201400095\n");
	return 0;
}

void listaTodos2(node *EXECUTANDO,node *BLOQUEADO,node *FINALIZADOS){
    system("clear");
    node *tmp;
    int limite = 6;
    int i=0,j=0;
    printf("\n\t\t     TABELA DE PROCESSOS PRONTOS     \n");
	printf("  %s", "PID");
	printf("\t%s", "NOME");
	printf("\t\t%s", "PRIO.");
	printf("\t%s", "CPU");
	printf("\t%s", "IO");
	printf("\t%s\n", "STATUS");

    for(i=0; i<limite; i++){
        tmp = (*prontos[i].topo)->prox;

        while( tmp != NULL){
		printf("  %d", tmp->pid);
		printf("\t%s", tmp->nome);
		printf("\t\t%d - %d", tmp->prioridade,i);
		printf("\t%d/%d", tmp->cpu_feitos, tmp->cpu);
		printf("\t%d/%d", tmp->io_feitos, tmp->io);
	if(tmp->situacao==0) printf("\t%s\n",aguardando);
   else if(tmp->situacao==1) printf("\t%s\n",executando);
   else if(tmp->situacao==2) printf("\t%s\n",bloqueado);
   else if(tmp->situacao==3) printf("\t%s\n",finalizado);
        tmp = tmp->prox;
            }

    }

    printf("\n\n\n\t\t     PROCESSOS EXECUTANDO     \n");
	printf("  %s", "PID");
	printf("\t%s", "NOME");
	printf("\t\t%s", "PRIO.");
	printf("\t%s", "CPU");
	printf("\t%s", "IO");
	printf("\t%s\n", "STATUS");
	desenha_linha1(70);
	tmp = EXECUTANDO->prox;
	while( tmp != NULL){
		printf("  %d", tmp->pid);
		printf("\t%s", tmp->nome);
		printf("\t\t%d", tmp->prioridade);
		printf("\t%d/%d", tmp->cpu_feitos, tmp->cpu);
		printf("\t%d/%d", tmp->io_feitos, tmp->io);
	if(tmp->situacao==0) printf("\t%s\n",aguardando);
   else if(tmp->situacao==1) printf("\t%s\n",executando);
   else if(tmp->situacao==2) printf("\t%s\n",bloqueado);
   else if(tmp->situacao==3) printf("\t%s\n",finalizado);
		tmp = tmp->prox;
	}

	printf("\n\n\n\t\t     PROCESSOS BLOQUEADO     \n");
	printf("  %s", "PID");
	printf("\t%s", "NOME");
	printf("\t\t%s", "PRIO.");
	printf("\t%s", "CPU");
	printf("\t%s", "IO");
	printf("\t%s\n", "STATUS");
	desenha_linha1(70);
	tmp = BLOQUEADO->prox;
	while( tmp != NULL){
		printf("  %d", tmp->pid);
		printf("\t%s", tmp->nome);
		printf("\t\t%d", tmp->prioridade);
		printf("\t%d/%d", tmp->cpu_feitos, tmp->cpu);
		printf("\t%d/%d", tmp->io_feitos, tmp->io);
	if(tmp->situacao==0) printf("\t%s\n",aguardando);
   else if(tmp->situacao==1) printf("\t%s\n",executando);
   else if(tmp->situacao==2) printf("\t%s\n",bloqueado);
      else if(tmp->situacao==3) printf("\t%s\n",finalizado);
		tmp = tmp->prox;
	}

	printf("\n\n\n\t\t     PROCESSOS FINALIZADOS     \n");
	printf("  %s", "PID");
	printf("\t%s", "NOME");
	printf("\t\t%s", "PRIO.");
	printf("\t%s", "CPU");
	printf("\t%s", "IO");
	printf("\t%s\n", "STATUS");
	desenha_linha1(70);
	tmp = FINALIZADOS->prox;
	while( tmp != NULL){
		printf("  %d", tmp->pid);
		printf("\t%s", tmp->nome);
		printf("\t\t%d", tmp->prioridade);
		printf("\t%d/%d", tmp->cpu_feitos, tmp->cpu);
		printf("\t%d/%d", tmp->io_feitos, tmp->io);
	if(tmp->situacao==0) printf("\t%s\n",aguardando);
   else if(tmp->situacao==1) printf("\t%s\n",executando);
   else if(tmp->situacao==2) printf("\t%s\n",bloqueado);
   else if(tmp->situacao==3) printf("\t%s\n",finalizado);
		tmp = tmp->prox;
	}

}

void inicia(node *LISTA) {
	LISTA->prox = NULL;
	tam=0;
}

int vazia(node *LISTA) {
	if(LISTA->prox == NULL)return 1;
	else return 0;
}

node *aloca(){
    system("clear");
	node *novo=(node *) malloc(sizeof(node));
	if(!novo){ printf("Sem memoria disponivel!\n"); exit(1);}
	else{
		desenha_linha1(70);
		printf("Qtd Processos criados:  %d\n",tam);
		desenha_linha1(70);
		printf("Novo PID     -> %d\n",seed_pid);
		printf("Nome         -> "); scanf("%s", novo->nome);
		printf("Prioridade   -> "); scanf("%d", &novo->prioridade);
		printf("Ciclos CPU   -> "); scanf("%d", &novo->cpu);
		printf("Ciclos IO    -> "); scanf("%d", &novo->io);
		novo->pid = seed_pid;
		novo->situacao = 0;
		novo->io_feitos =0;
		novo->cpu_feitos=0;
		seed_pid++;
		return novo;
	}
}

node *retira(node *PRONTOS) {
	if(PRONTOS->prox == NULL){
		printf("PRONTOS ja esta vazia\n");
		return NULL;
	}else{
		node *tmp = PRONTOS->prox;
		PRONTOS->prox = tmp->prox;
		tam--;
		return tmp;
	}

}

void libera(node *PRONTOS) {
if(!vazia(PRONTOS)){
		node *proxNode,
			  *atual;
		atual = PRONTOS->prox;
		while(atual != NULL){
			proxNode = atual->prox;
			free(atual);
			atual = proxNode;
		}
	}
}

void desenha_linha1(int qtd){
		int i=0;
		for(i=0; i<qtd; i++)
		//printf("\u2501");
		printf("-");
		printf("\n");
}

node* transfereEntre(node *origem, node*destino, node *pilhaOrigem) {
		node *novo=(node *) malloc(sizeof(node));
		novo->pid = origem->pid;
		strcpy(novo->nome,origem->nome);
		novo->io = origem->io;
		novo->io_feitos = origem->io_feitos;
		novo->cpu_feitos = origem->cpu_feitos;
		novo->cpu = origem->cpu;
		novo->prioridade = origem->prioridade;
		novo->situacao = origem->situacao;
		novo->prox = NULL;
		if(vazia(destino)) destino->prox=novo;
		else{   node *tmp = destino->prox;
		while(tmp->prox != NULL)
			tmp = tmp->prox;
		tmp->prox = novo;
		}
		retira(pilhaOrigem);
		return novo;
}

void gotoxy(int x,int y) {
     printf("%c[%d;%df",0x1B,y,x);
}

int iniciaEscalonador(node *EXECUTANDO, node *BLOQUEADO, node *FINALIZADOS, int metodo) {
    //metodo 1 (round-robin)     2 prioridade simples       3 prioridade dinamica
    int i,finalizou, novoNivel, nivel;
    node *tmp;
	node *tmp2;
	node *novo ;

    if(metodo==1)      { nivel=0; if(nivelATIVO)  preparaRound(); }
    else if(metodo==2) { nivel=0; if(!nivelATIVO) preparaNivel(); }
    else if(metodo==3) { nivel=1; if(!nivelATIVO) preparaNivel(); }
	while(qtprontos<totalProcesos) {
        //for(i=0; i<6; i++){
        i=0;
        while(vazia(*prontos[i].topo) && i<6) i++;
                while(!vazia(*prontos[i].topo)) {
                            listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                            tmp = (*prontos[i].topo)->prox;
                            while(tmp != NULL){
                                system("read -p \"teste\" saindo");
                                finalizou=0;
                                if(tmp->cpu_feitos<tmp->cpu && finalizou==0)	tmp->cpu_feitos++;
                                            tmp->situacao=1;
                                            novo = transfereEntre(tmp, EXECUTANDO,*prontos[i].topo);
                                            listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                                            system("read -p \"teste\" saindo");
                            if(novo->io_feitos==novo->io && novo->cpu_feitos==novo->cpu){
                                                novo->situacao=3;
                                                novo = transfereEntre(novo, FINALIZADOS,EXECUTANDO);
                                                listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                                                system("read -p \"teste\" saindo");
                                                qtprontos++;
                                                finalizou=1;
                                        }
                                else if(novo->io_feitos<novo->io && finalizou==0) {
                                     if(!vazia(BLOQUEADO)){
                                                tmp2 = BLOQUEADO->prox;
                                                tmp2->situacao=0;
                                                if(metodo==1) novoNivel = 0;
                                                if(metodo==2) novoNivel = tmp2->prioridade;
                                                if(metodo==3) {if(tmp2->prioridade==0)
                                                                novoNivel = tmp2->prioridade;
                                                           else novoNivel = tmp2->prioridade-nivel;
                                                                }
                                                tmp2->prioridade = novoNivel;
                                                transfereEntre(tmp2, *prontos[novoNivel].topo,BLOQUEADO);
                                                listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                                                system("read -p \"teste\" saindo");
                                            }
                                            novo->io_feitos++;
                                            novo->situacao=2;
                                            novo = transfereEntre(novo, BLOQUEADO,EXECUTANDO);
                                            listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                                            system("read -p \"teste\" saindo");
                                    }
                                else {		    novo->situacao=0;
                                                if(metodo==1) novoNivel = 0;
                                                if(metodo==2) novoNivel = novo->prioridade;
                                                if(metodo==3) {if(novo->prioridade==5)
                                                                novoNivel = novo->prioridade;
                                                           else novoNivel = novo->prioridade+nivel;
                                                                }
                                                novo->prioridade = novoNivel;
                                            transfereEntre(novo, *prontos[novoNivel].topo,EXECUTANDO);
                                            listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                                            system("read -p \"teste\" saindo");
                                        }
                             if(!vazia(BLOQUEADO) && vazia(*prontos[i].topo) ){
                                                tmp = BLOQUEADO->prox;
                                                tmp->situacao=0;
                                                if(metodo==1) novoNivel = 0;
                                                if(metodo==2) novoNivel = tmp->prioridade;
                                                if(metodo==3) {if(tmp->prioridade==0) novoNivel = tmp->prioridade;
                                                               else novoNivel = tmp->prioridade-nivel;
                                                                }
                                                tmp->prioridade = novoNivel;
                                                transfereEntre(tmp, *prontos[novoNivel].topo,BLOQUEADO);
                                                listaTodos2(EXECUTANDO,BLOQUEADO,FINALIZADOS);
                                                system("read -p \"teste\" saindo");
                            }
                              //tmp = tmp->prox;
                              break;
                    //}
            }
        }
    }
    rearmaProcesos(FINALIZADOS);
    return 0;
}

void preparaRound(){
    node *varredor;
    int fim=0;
    int limite = 6;
    int i=1,j=0;
    for(i=1; i<limite; i++){
        varredor = (*prontos[i].topo)->prox;
        while(varredor != NULL){
        node *novo=(node *) malloc(sizeof(node));
		novo->pid = varredor->pid;
        novo->cpu = varredor->cpu;
        novo->cpu_feitos = varredor->cpu_feitos;
        novo->io_feitos = varredor->io_feitos;
        novo->io = varredor->io;
        novo->prioridade = varredor->prioridade;
        novo->situacao = varredor->situacao;
        novo->prox=NULL;
        strcpy(novo->nome,varredor->nome);
        if(vazia(prontos[0].topo)) (*prontos[0].topo)->prox=novo;
        else{   node *tmp = *(prontos[0].topo);
                while(tmp->prox != NULL) {
                        if((tmp->prox->pid)>=(novo->pid)) {
                            novo->prox = tmp->prox;
                            break;
                        }
                        else tmp = tmp->prox;
                    }
               tmp->prox = novo;
                }
            varredor = varredor->prox;
            retira((*prontos[i].topo));
            }
    }
    nivelATIVO=0;
}
void preparaNivel(){
    node *varredor;
    varredor = (*prontos[0].topo)->prox;
    while( varredor != NULL){
        node *novo=(node *) malloc(sizeof(node));
		novo->pid = varredor->pid;
        novo->cpu = varredor->cpu;
        novo->cpu_feitos = varredor->cpu_feitos;
        novo->io_feitos = varredor->io_feitos;
        novo->io = varredor->io;
        novo->prioridade = varredor->prioridade;
        novo->situacao = varredor->situacao;
        novo->prox=NULL;
        strcpy(novo->nome,varredor->nome);
        if(vazia(prontos[novo->prioridade].topo)) (*prontos[novo->prioridade].topo)->prox=novo;
        else{   node *tmp = *(prontos[novo->prioridade].topo);
                while(tmp->prox != NULL) tmp = tmp->prox;
                tmp->prox = novo;
                    }
        varredor = varredor->prox;
        retira((*prontos[0].topo));
    }
    nivelATIVO=1;
}
void rearmaProcesos(node *FINALIZADOS){
    node *varredor;
    varredor = FINALIZADOS->prox;
    while(varredor != NULL){
        node *novo=(node *) malloc(sizeof(node));
		novo->pid = varredor->pid;
        novo->cpu = varredor->cpu;
        novo->cpu_feitos = 0;
        novo->io_feitos = 0;
        novo->io = varredor->io;
        novo->prioridade = varredor->prioridade;
        novo->situacao = 0;
        novo->prox=NULL;
        strcpy(novo->nome,varredor->nome);
        if(vazia(prontos[novo->prioridade].topo)) (*prontos[novo->prioridade].topo)->prox=novo;
        else{   node *tmp = *(prontos[novo->prioridade].topo);
                while(tmp->prox != NULL) tmp = tmp->prox;
                tmp->prox = novo;
                    }
        varredor = varredor->prox;
        retira(FINALIZADOS);
    }
    nivelATIVO=1;
    qtprontos=0;
}
