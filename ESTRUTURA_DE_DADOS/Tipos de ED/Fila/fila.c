#include "fila.h"

typedef struct lista{
    int infor;
    struct lista *prox;

}Lista;

 struct fila{
    Lista *ini;
    Lista *fim;

};

Fila *fila_criar(){
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->ini = f->fim= NULL;
    return f;

}
void fila_insere(Fila *f,int valor){
    Lista *n = (Lista*)malloc(sizeof(Lista));
    n->infor = valor; //armazena informação
    n->prox = NULL;//novo nó passa a ser o último, e o último aponta para NULL;

    if(f->fim != NULL){//verifica se a lista não estava vazia
        f->fim->prox=n; // o proximo do fim passa a ser o novo nó
    }else{
        f->ini = n;//primeiro passar ser o novo

    }
    f->fim = n;
}

int fila_remove(Fila *f){

    Lista *t;
    int v;
    if(fila_vazia(f)){
        printf("Lista vazia");

        exit(1);//aborta o programa
    }
    t = f->ini;
    v = t->infor;
    f->ini = t->prox;

    if(f->ini==NULL){//verifica se a lista ficou vazia
        f->fim = NULL;
    }
    free(t);
    return v;


}
void libera_fila(Fila *f){
    Lista *q = f->ini;
    while(q!=NULL){
        Lista *t = q->prox;
        free(q);
        q = t;
    }
    free(f);

}

int fila_vazia(Fila *f){
    return (f->ini==NULL);
}

void fila_imprimir(Fila *f){
    Lista *t;

    for(t = f->ini;t!=NULL;t = t->prox){
        printf("%d \n",t->infor);

    }

}

