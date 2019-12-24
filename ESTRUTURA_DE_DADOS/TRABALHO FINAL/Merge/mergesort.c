#include "mergesort.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    int infor;
    struct lista *prox;
    struct lista *ant;
    
}Lista;

//struct head{
///Lista *cabeca;

//};

typedef struct node *link;

struct node { 
    int item; 
    link next; 
};
    

typedef struct lista Lista;

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
Lista  *lerArquiv(FILE *a, Lista *l1){
  
    a = fopen("Doc10_1.txt", "r");
    int x, i;
    for(i = 0; i<10; i++){//lembre-se de ir varia conforme o tamanho da lista que você quer
        fscanf(a,"%d\n",&x);
        l1=lista_inserir(l1,x);


    }
    //lista_imprimir(l1);
    fclose(a);
    return l1;
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

//int verificacoes =0;


//recebe duas listas crescentes
//depois intercalam essas duas listas e retorna uma outra lista crescente
int verificacoes =0;//guarda as verificações feitas
   //int trocas =0;
Lista *merge(Lista *a,Lista *b) {
   struct lista head;
   

    Lista *c = &head;
    while (a != NULL && b != NULL){
        
      // c é o último nó da lista cuja cabeça é head
      if (a->infor <= b->infor) {// caso o nó da primeira lista for menor que o outro nó da outra lista ela já estar ordenada
         c->prox = a;
         c = a; a = a->prox;
         
        // trocas++;
      }
      else {
         c->prox = b;
         c = b; b = b->prox;
         
         //trocas++;
      }

    }
        
    c->prox = (a == NULL) ? b : a;

   
    return head.prox;//retorna a cabeça da lista atualizada
}

//esta função recebe uma lista que tem elementos em qualquer ordem e retorna-a já ordenada
Lista *mergesort(Lista *l) {
    Lista *a, *b,*c=l;
    if (c == NULL || c->prox == NULL) {
    	return l;
    	verificacoes++;
	}
    a = c;
    b = c->prox;
    while (b != NULL && b->prox != NULL) {
        c = c->prox;
        b = b->prox->prox;
        verificacoes++;
    }
    b = c->prox;
    c->prox = NULL;
    
    return merge(mergesort(a), mergesort(b));
}



