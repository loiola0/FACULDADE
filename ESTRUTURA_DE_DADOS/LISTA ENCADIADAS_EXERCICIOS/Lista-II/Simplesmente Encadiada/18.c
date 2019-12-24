#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    float coeficiente;
    int expoente;

    struct lista *prox;


}Lista;

Lista *criar_lista(){

    return NULL;
}

Lista *inserir_lista(Lista *l,float coefi,int expo){
  Lista * novo;
  Lista *p=l;
  Lista *ant = NULL;

  while(p!=NULL&&p->expoente>expo){

    ant = p;
    p = p->prox;

  }


    novo = (Lista*)malloc(sizeof(Lista));
    novo->coeficiente = coefi;
    novo->expoente = expo;

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
        printf("%.1fX%d +",p->coeficiente,p->expoente);

        p =p->prox;
    }


}

Lista * criar_lista();
Lista *inserir_lista(Lista *l,float coefi,int expo);
void imprimir_lista(Lista *l);
int main() {
    int i,expo,tam;
    float coefi;

    Lista *l1;
    l1 = criar_lista();

    printf("Digite o numero de coefientes que deseja colocar na lista: ");
    scanf("%d",&tam);


    for(i=0;i<tam;i=i+1){
        printf("Digite um numero para o coeficiente: ");
        scanf("%f",&coefi);
        printf("Digite um numero para o expoente: ");
        scanf("%d",&expo);

        l1 = inserir_lista(l1,coefi,expo);

    }


    imprimir_lista(l1);
}



