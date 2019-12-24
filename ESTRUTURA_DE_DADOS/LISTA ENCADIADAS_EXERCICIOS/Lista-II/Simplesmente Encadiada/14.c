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

Lista *intercalar(Lista *primeira_lista,Lista *segunda_lista,Lista *intersao_listas){
        Lista *p1=primeira_lista;
        Lista *p2=segunda_lista;
        Lista *p3 = intersao_listas;


        while(p1!=NULL){

            p3 = inserir_lista(p3,p1->valor);

            while(p2!=NULL){

            p3 = inserir_lista(p3,p2->valor);



            p2=p2->prox;


        }






            p1=p1->prox;


        }






return p3;

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
Lista *intercalar(Lista *primeira_lista,Lista *segunda_lista,Lista *intersao_listas);
void imprimir_lista(Lista *l);
int main() {
    int i,num,tam;
    Lista *l1;
    l1 = criar_lista();



    Lista *l2;
    l2 = criar_lista();

    Lista *l3;
    l3 = criar_lista();

   printf("Digite a quantidade números que deseja colocar na lista 1: ");
    scanf("%d",&tam);


    for(i=0;i<tam;i=i+1){
        printf("Digite um número: ");
        scanf("%d",&num);
        l1 = inserir_lista(l1,num);

    }

    printf("Digite a quantidade números que deseja colocar na lista2: ");
    scanf("%d",&tam);


    for(i=0;i<tam;i=i+1){
        printf("Digite um número: ");
        scanf("%d",&num);
        l2 = inserir_lista(l2,num);

    }

    l3 = intercalar(l1,l2,l3);



    imprimir_lista(l1);
    imprimir_lista(l2);

    printf("Lista intercalada: \n");
    imprimir_lista(l3);
}




