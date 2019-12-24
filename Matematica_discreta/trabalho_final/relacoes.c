#include "relacoes.h"
struct lista{
    int x;
    int y;
    struct lista *prox;
    struct lista *ant;
};


Lista *lista_criar(){
    return NULL;
}

Lista *lista_inserir(Lista *l,int x,int y){
    Lista *novo = (Lista*)malloc(sizeof(Lista));
    novo->x = x;
    novo->y = y;
    novo->prox = l;
    novo->ant = NULL;
    if(l!=NULL){
        l->ant = novo;
    }
    return novo;

}
Lista *buscar(Lista *l,int x,int y){
    Lista *p;
    for(p=l;p!=NULL;p=p->prox){
        if(p->x==x&&p->y==y){
            return p;
        }
    }
    return NULL;//não achou o elemento
}


Lista *lista_remover(Lista *l,int x,int y){

    Lista *p = buscar(l,x,y);

    if(p==NULL){
        return l;//não achou o elemento:retorna a lista inalterada
    }
    //retira elemento do encadeamento

    if(l==p){//testa se é o primeiro elemento
        l= p->prox;

    }else{
        p->ant->prox = p->prox;
    }
    if(p->prox!=NULL){//testa se é o último elemento
        p->prox->ant = p->ant;
    }
    free(p);
    return l;
}

Lista *lista_libera(Lista *l){
    Lista *aux = l;
    while(aux!=NULL){
        Lista *t = aux->prox;
        free(aux);
        aux = t;

    }

}

void lista_imprimir(Lista *l){
    Lista *p;
        for(p=l;p!=NULL;p=p->prox){
            printf("(%d,%d)\n",p->x,p->y);

        }

}
int lista_vazia(Lista *l){
    if(l==NULL){
        return 1;
    }else{
        return 0;
    }

}


int comparar(Lista *l1,Lista *l2){
    int cont1=0,cont2=0,cont3=0;
    Lista *aux1,*aux2;
    
    for(aux1 = l1;aux1!=NULL;aux1=aux1->prox){
        cont1++;
        
    }
    for(aux1 = l2;aux1!=NULL;aux1=aux1->prox){
        cont2++;
        
    }
    if(cont1==cont2){
        for(aux1 = l1;aux1!=NULL;aux1=aux1->prox){
            for(aux2 = l2;aux2!=NULL;aux2=aux2->prox){
                if((aux1->x==aux2->x)&&(aux1->y==aux2->y)){
                    cont3++;
                    aux1->prox;
                }else
                {
                   
                }
                
                
        }
        if(cont1==cont3){
            return 1;
        }
        
    }
    
    }
    return 0;
}


void reflexiva(int *num_conj,Lista *l,Lista *elem){
    int i=0,cont_ref=0;
    Lista *p,*m;
    Lista *reflex = lista_criar();
    
    
    
   

        for(p=l;p!=NULL;p=p->prox){
             if(p->x==p->y){
                 reflex = lista_inserir(reflex,p->x,p->y);
             }

        }
        
        for(p=l;p!=NULL;p=p->prox){
            for(m=p->prox;m!=NULL;m=m->prox){
             if((p->x==m->x)&&(p->y==m->y)){
                 reflex = lista_remover(reflex,p->x,p->y);
             }
            }
        }

        for(p=reflex;p!=NULL;p=p->prox){
            if((num_conj[i]==p->x)&&(num_conj[i]==p->y)){
                i++;
                p= p->prox;
                cont_ref++;
            }
        }     
        
        
        if((comparar(reflex,elem)==1)){
            printf("reflexiva \n");
        }else{
            printf("Nao eh reflexiva \n");
        }
}

void menu(){
    printf("digite o tamanho do conjunto: \n");
    int tamanho_conj,i,j,k,cont_ref=0,stop=0,coord=0,x,y,opcao;
    Lista *aux,*p,*m;
    Lista *coord_l = lista_criar();
    Lista *elem = lista_criar();//recebe os elementos e guarda numa lista
   
    scanf("%d",&tamanho_conj);
    int num_conj[tamanho_conj];
    
   
    


    printf("digite os numeros do conjuntos: \n");
    for(i=0;i<tamanho_conj;i++){
        scanf("%d",&num_conj[i]);
    }

     printf("\n total de coordenadas: \n");
        scanf("%d",&coord);


    //pega os valores digitados do vetor dos elementos do conjunto e guarda numa lista(elem)
    for(i=0;i<tamanho_conj;i++){
        elem = lista_inserir(elem,num_conj[i],num_conj[i]);    
    }
    //trata os elementos da lista elem e retira os repetidos
    for(p=elem;p!=NULL;p=p->prox){
            for(aux=p->prox;aux!=NULL;aux=aux->prox){
             if((p->x==aux->x)&&(p->y==aux->y)){
                   elem = lista_remover(elem,p->x,p->y);
             }
            }
        }

    printf("A={ ");
    for(i=0;i<tamanho_conj;i++){
        printf("%d ",num_conj[i]);
    }
    printf("}\n");
    printf("digite uma opcao: ");
    scanf("%d",&opcao);
    switch(opcao){
        case 1:
            while(coord>stop){
                for(i=0;i<coord;i++){
                    
                    printf("\n Digite a coord. x:%d \n",i);
                    scanf("%d",&x);
                    printf("\n Digite a coord. y:%d \n",i);
                    scanf("%d",&y);
                    coord_l = lista_inserir(coord_l,x,y);
                    stop++;
                }

            }
            reflexiva(num_conj,coord_l,elem);
        break;
        default:
        printf("digite uma opcao válida!");
    }

}
