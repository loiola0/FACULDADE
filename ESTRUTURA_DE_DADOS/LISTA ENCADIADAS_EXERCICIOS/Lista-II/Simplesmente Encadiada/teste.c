#include <stdio.h>
#include <stdlib.h>


typedef struct lista{
    int valor;
    struct lista *prox;


}Lista;
Lista *criar_lista(){
    return NULL;


}
Lista *inserir_lista(Lista *l,int x){
    Lista *novo  = (Lista*)malloc(sizeof(Lista));
    novo->valor = x;
    novo->prox = l;


    return novo;
}

int trocar(Lista *l1,int a, int b){
    Lista *p_a = l1;
    Lista *p_b = l1;
    Lista *ant_a = NULL;
    Lista *ant_b = NULL;

    while(p_a!=NULL&&p_a->valor!=a){
    ant_a = p_a;
    p_a=p_a->prox;

    }
    long p1= &p_a->valor;
    printf("%d \n \n",p1);
    /*

    while(p_b!=NULL&&p_b->valor!=b){
    ant_b = p_b;
    p_b=p_b->prox;

    }
    Lista *p2= &p_b->valor;
    printf("%d \n \n",p2);

*/
return 1;
}


void imprimir_lista(Lista *l){
    Lista *p = l;
    while(p!=NULL){
        printf("%d \n",p->valor);

    p = p->prox;
    }

}

void imprimir_lista1(Lista *l){
    Lista *p = l;
    while(p!=NULL){
        printf("%d \n",&p->valor);

    p = p->prox;
    }

}


int main(){
    Lista *l1 = criar_lista();

    l1 = inserir_lista(l1,5);
    l1 = inserir_lista(l1,7);
    l1 = inserir_lista(l1,1);
    l1 = inserir_lista(l1,0);
    l1 = inserir_lista(l1,3);

    trocar(l1,5,7);

    //imprimir_lista(l1);
    imprimir_lista1(l1);


}
