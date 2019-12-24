#include "arv.h"

struct arv{//nó da árvore
    char infor;//informação propriamente dita do nó
    struct arv *esq;//ponteiro para subárvore a esquerda
    struct arv *dir;//ponteiro para subárvore a direita

};

Arv *arv_criaVazia(){
    return NULL;
}
int arv_vazia(Arv *a){
    return a==NULL;
}
Arv *arv_cria(char c,Arv *sae,Arv *sad){
    Arv *p = (Arv*)malloc(sizeof(Arv));
    p->infor = c;
    p->esq=sae;
    p->dir=sad;

    return p;
}

void arv_imprimir(Arv *a){
    if(!arv_vazia(a)){

        arv_imprimir(a->esq);//imprimi a sae

        arv_imprimir(a->dir);//imprimi a sad
        printf("%c",a->infor);//imprimi o raiz

    }

}

Arv *arv_libera(Arv *a){
    if(!arv_vazia(a)){
       arv_libera(a->esq);//libera sae
       arv_libera(a->dir);//libera sad
       free(a);//liberar a raiz


    }
    return NULL;
}

int arv_pertence(Arv *a,char c){//procura um elemento(c) nos nós
    if(arv_vazia(a)){
        return 0;//árvore vazia: elemento não encontrado
    }else{
            if(a->infor==c){
                return 1;//achou o elemento
            }else if(arv_pertence(a->esq,c)){
                return 1;
            }else{
                return arv_pertence(a->dir,c);

            }

    }


}
