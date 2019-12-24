
#include "insertion.h"
struct lista{
    int infor;
    struct lista *prox;
    struct lista *ant;
};


Lista *lista_criar(){
    return NULL;
}

Lista *lista_inserir(Lista *l,int valor){
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->infor = valor;
    novo->prox = l;
    novo->ant = NULL;
    if(l!=NULL){
        l->ant = novo;
    }
    return novo;

}
Lista *buscar(Lista *l,int v){
    Lista *p;
    for(p=l;p!=NULL;p=p->prox){
        if(p->infor==v){
            return p;
        }
    }
    return NULL;//não achou o elemento
}


Lista *lista_remover(Lista *l,int v){

    Lista *p = buscar(l,v);

    if(p==NULL){
        return l;//não achou o elemento:retorna a lista inalterada
    }
    //retira elemento do encadeamento

    if(l==p){//testa se é o primeiro elemento
        l= p->prox;

    }else{
        p->ant->prox = p->prox;
    }
    if(p->prox!=NULL){//testa se é o último elemento
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}

Lista *lista_libera(Lista *l){
    Lista *aux = l;
    while(aux!=NULL){
        Lista *t = aux->prox;
        free(aux);
        aux = t;

    }

}

void lista_imprimir(Lista *l){
    Lista *p;
        for(p=l;p!=NULL;p=p->prox){
            printf("%d\n",p->infor);

        }

}
int lista_vazia(Lista *l){
    if(l==NULL){
        return 1;
    }else{
        return 0;
    }

}


void insertion_sort(Lista *l){
    Lista *aux1,*aux2;
    int n_trocas =0,n_verificacaoes=0;

    int num_atual;
        for(aux1=l->prox;aux1!=NULL;aux1 = aux1->prox){
            num_atual = aux1->infor;
            n_verificacaoes+=1;
            for(aux2=aux1;(aux2!=l)&&(num_atual<aux2->ant->infor);aux2= aux2->ant){//mover as cartas maiores para frente
                    aux2->infor = aux2->ant->infor;
                    n_trocas+=1;
            }
                aux2->infor = num_atual;

        }

        printf("Numero de verificacoes: %d\n",n_verificacaoes);
        printf("Numero de trocas: %d\n",n_trocas);
}

void menu(){

printf("TESTES COM ALGORITMO DE ORDENACAO INSERTION SORT\n");
printf("1-dez elementos em ondem crescente \n");
printf("2-dez elementos em ordem descrescente \n");
printf("3-dez elementos em ordem aleatoria \n");
printf("4-cem elementos em ondem crescente \n");
printf("5-cem elementos em ordem descrescente \n");
printf("6-cem elementos em ordem aleatoria \n");
printf("7-mil elementos em ondem crescente \n");
printf("8-mil elementos em ordem descrescente \n");
printf("9-mil elementos em ordem aleatoria \n");

printf("------ESCOLHA UMA OPCAO------\n");
int opcao;
scanf("%d",&opcao);//recebe a opção do menu



//variavel para adicionar elementos
Lista *a = lista_criar();//cria uma lista duplamente encadiada

switch(opcao){
    int i;
    case 1:
            for(i=10;i>=1;i=i-1){
               a = lista_inserir(a,i);
            }
      printf("Elementos P/ Ordenacao: \n");
            lista_imprimir(a);
        //chama a funcap insertion sort e ordena a lista
        insertion_sort(a);
      printf("Elementos Ordenados: \n");
            lista_imprimir(a);
		
            lista_libera(a);//esvazia toda a lista depois da execucao da ordenação
    break;
    case 2:
            for(i=1;i<=10;i=i+1){
               a = lista_inserir(a,i);
            }
      printf("Elementos P/ Ordenacao: \n");
            lista_imprimir(a);
        //chama a funcap insertion sort e ordena a lista
        insertion_sort(a);
      printf("Elementos Ordenados: \n");
            lista_imprimir(a);

            lista_libera(a);//esvazia toda a lista depois da execucao da ordenação

    break;
    case 3:
        //elementos aleatorios
    break;
    case 4:
            for(i=100;i>=1;i=i-1){
               a = lista_inserir(a,i);
            }
      printf("Elementos P/ Ordenacao: \n");
            lista_imprimir(a);
        //chama a funcap insertion sort e ordena a lista
        insertion_sort(a);
      printf("Elementos Ordenados: \n");
            lista_imprimir(a);

            lista_libera(a);//esvazia toda a lista depois da execucao da ordenação
    break;
    case 5:
        for(i=1;i<=100;i=i+1){
               a = lista_inserir(a,i);
            }
      printf("Elementos P/ Ordenacao: \n");
            lista_imprimir(a);
        //chama a funcap insertion sort e ordena a lista
        insertion_sort(a);
      printf("Elementos Ordenados: \n");
            lista_imprimir(a);

            lista_libera(a);//esvazia toda a lista depois da execucao da ordenação
    break;
    case 6:
        //elementos aleatorios
    break;
    case 7:
            for(i=1000;i>=1;i=i-1){
               a = lista_inserir(a,i);
            }
      printf("Elementos P/ Ordenacao: \n");
            lista_imprimir(a);
        //chama a funcap insertion sort e ordena a lista
        insertion_sort(a);
      printf("Elementos Ordenados: \n");
            lista_imprimir(a);

            lista_libera(a);//esvazia toda a lista depois da execucao da ordenação
    break;
    case 8:
        for(i=1;i<=1000;i=i+1){
               a = lista_inserir(a,i);
            }
      printf("Elementos P/ Ordenacao: \n");
            lista_imprimir(a);
        //chama a funcap insertion sort e ordena a lista
            insertion_sort(a);
      printf("Elementos Ordenados: \n");
            lista_imprimir(a);

            lista_libera(a);//esvazia toda a lista depois da execucao da ordenação
    break;
    case 9:
        //elementos aleatorios
    break;

    default:
    printf("Escolha uma opcao valida!");

}



}

