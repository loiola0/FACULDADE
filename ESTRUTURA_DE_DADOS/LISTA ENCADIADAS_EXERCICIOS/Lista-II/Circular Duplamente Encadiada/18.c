

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
	novo->ant = l;

   }
    else{
        novo->prox = ant->prox;
        ant->prox = novo;
	novo->ant = p->ant;

    }



    return l;
}


