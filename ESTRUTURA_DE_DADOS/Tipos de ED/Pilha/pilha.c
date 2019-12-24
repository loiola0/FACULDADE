#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"



typedef struct lista{
    float infor;
    struct lista *prox;
}Lista;

typedef struct pilha{
    Lista *prim;


}Pilha;

Pilha *criarPilha(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    p->prim = NULL;
    return p;
}

void push(Pilha *p,float v){
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->infor = v;
    novo->prox = p->prim;
    p->prim = novo;
}

float pop(Pilha *p){
    Lista *t;
    float v;
    if(vazia(p)){

        printf("Pilha vazia!...");
        exit(1);

    }
    t = p->prim;
    v = t->infor;
    p->prim = t->prox;
    free(t);
    return v;
}
int vazia(Pilha *p){

    return(p->prim==NULL);

}
void liberarPilha(Pilha *p){
    Lista *q = p->prim;
    while(q!=NULL){
        Lista *t= q->prox;
        q->infor = 0;
        free(q);
        q = t;

    }
    free(p);
}
float topo(Pilha *p){
    if(vazia(p)){
        printf("Pilha vazia!...");
        exit(1);

    }
    return(p->prim->infor);

}
void imprimir(Pilha *p){
    Lista *a;

    for(a = p->prim;a!=NULL; a = a->prox){
        printf("%2.f",a->infor);


    }



}

