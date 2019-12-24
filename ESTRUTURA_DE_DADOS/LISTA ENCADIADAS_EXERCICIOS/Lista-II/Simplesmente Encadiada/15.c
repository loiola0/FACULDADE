#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct lista{
    double valor;

    struct lista *prox;


}Lista;

Lista *criar_lista(){

    return NULL;
}





Lista *inserir_lista(Lista *l,float x,float y){
  Lista * novo;
  Lista *p=l;
  Lista *ant = NULL;
  double distancia =sqrt(pow(x,2)+pow(y,2));


  while(p!=NULL&&p->valor<distancia){

    ant = p;
    p = p->prox;

  }


    novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = distancia;


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
        printf("%f \n",p->valor);

        p =p->prox;
    }


}

Lista * criar_lista();

Lista *inserir_lista(Lista *l,float x,float y);
void imprimir_lista(Lista *l);
int main() {

    int i,tam;
    float p1,p2;
    Lista *l1;
    l1 = criar_lista();

    printf("Digite a quantidade de pontos que deseja colocar na lista: ");
    scanf("%d",&tam);


    for(i=0;i<tam;i=i+1){
        printf("Digite o ponto[%d] (x): ",i);
        scanf("%f",&p1);

        printf("Digite o ponto (y): ");
        scanf("%f",&p2);

         l1 = inserir_lista(l1,p1,p2);



    }


    imprimir_lista(l1);


}




