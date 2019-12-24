

Lista *inserir_lista(Lista *l,int x){
  Lista * novo;
  Lista *p=l;
  Lista *ant = p->ant;

  while(p!=NULL&&p->valor<x){

    ant = p->ant;
    p = p->prox;

  }


    novo = (Lista*)malloc(sizeof(Lista));
    novo->valor = x;


   if(ant ==NULL){
        novo->prox = l;
        l = novo;
	novo->ant = l;

   }
    else{
        novo->prox = ant->prox;
        ant->prox = novo;
	novo->ant = p->ant;

    }



    return l;
}




