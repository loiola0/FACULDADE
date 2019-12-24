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
  Lista * novo;
  Lista *p=l;
  Lista *ant = NULL;

  while(p!=NULL&&p->valor<x){

    ant = p;
    p = p->prox;

  }


    novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = x;


   if(ant ==NULL){
        novo->prox = l;
        l = novo;

   }
    else{
        novo->prox = ant->prox;
        ant->prox = novo;


    }



    return l;
}
void imprimir_lista(Lista *l){
    Lista *p=l;
   printf("\n Elementos da Lista: \n");
    while(p!=NULL){
        printf("%d \n",p->valor);

        p =p->prox;
    }


}

Lista * criar_lista();
Lista *inserir_lista(Lista *l,int x);
void imprimir_lista(Lista *l);
int main() {
    int i,num,tam;
    Lista *l1;
    l1 = criar_lista();

    printf("Digite a quantidade números que deseja colocar na lista: ");
    scanf("%d",&tam);


    for(i=0;i<tam;i=i+1){
        printf("Digite um número: ");
        scanf("%d",&num);
        l1 = inserir_lista(l1,num);

    }


    imprimir_lista(l1);
}



