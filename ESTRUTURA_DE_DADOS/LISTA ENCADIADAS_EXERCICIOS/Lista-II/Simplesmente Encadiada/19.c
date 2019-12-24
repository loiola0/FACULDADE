#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
    float coeficiente;
    int expoente;

    struct lista *prox;


}Lista;

Lista *inserir_lista(Lista *l,float coefi, int expo){
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
Lista *criar_lista(){
    return NULL;


}

Lista *soma(Lista *l1,Lista *l2,Lista *l3){

    Lista *p1 = l1;
    Lista *p2 = l2;


    for(p1=l1;p1!=NULL;p1 = p1->prox){
        for(p2=l2;p2!=NULL;p2=p2->prox){

            if(p1->expoente==p2->expoente){

                l3 = inserir_lista(l3,p1->coeficiente+p2->coeficiente,p1->expoente);

            }else{
                if(p1->expoente!=p2->expoente){

                   // l3 = inserir_lista(l3,p1->coeficiente,p1->expoente);
                    l3 = inserir_lista(l3,p2->coeficiente,p2->expoente);

                }


            }


        }



    }



    return l3;
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
Lista *soma(Lista *l1,Lista *l2,Lista *l3);
void imprimir_lista(Lista *l);
int main() {
    int i,expo,tam;
    float coefi;
   // Lista *s;
    Lista *l1;
    l1 = criar_lista();

    Lista *l2;
    l2 = criar_lista();

    Lista *l3;
    l3 = criar_lista();





    printf("Digite o numero de coefientes que deseja colocar na lista: ");
    scanf("%d",&tam);


    for(i=0;i<tam;i=i+1){
        printf("Digite um numero para o coeficiente: ");
        scanf("%f",&coefi);
        printf("Digite um numero para o expoente: ");
        scanf("%d",&expo);

        l1 = inserir_lista(l1,coefi,expo);

    }


    printf("Digite o numero de coefientes que deseja colocar na lista: ");
    scanf("%d",&tam);

    for(i=0;i<tam;i=i+1){
        printf("Digite um numero para o coeficiente: ");
        scanf("%f",&coefi);
        printf("Digite um numero para o expoente: ");
        scanf("%d",&expo);

        l2 = inserir_lista(l2,coefi,expo);

    }







    //imprimir_lista(l1);
   l3 = soma(l1,l2,l3);
    imprimir_lista(l3);

}



