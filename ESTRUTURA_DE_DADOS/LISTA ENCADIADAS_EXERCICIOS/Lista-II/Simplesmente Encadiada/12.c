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
    Lista *novo = (Lista*)malloc(sizeof(Lista));

    novo->valor = x;
    novo->prox = l; //o proximo do novo será o primeiro da antiga lista(antes do novo);

    return novo;



}

Lista *compararListas(Lista *primeira_lista,Lista *segunda_lista,Lista *intersao_listas){
        Lista *p1;
        Lista *p2;


        for(p1=primeira_lista;p1!=NULL;p1=p1->prox){


            for(p2=segunda_lista;p2!=NULL;p2=p2->prox){

                if(p1->valor==p2->valor){
                intersao_listas = inserir_lista(intersao_listas,p1->valor);


           }

        }
    }









return intersao_listas;

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
Lista *compararListas(Lista *primeira_lista,Lista *segunda_lista,Lista *intersao_listas);
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

    l3 = compararListas(l1,l2,l3);



    imprimir_lista(l1);
    imprimir_lista(l2);

    printf("Intersecao: \n");
    imprimir_lista(l3);
}



