





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
	novo->ant = NULL;

   }
    else{
        novo->prox = ant->prox;
        ant->prox = novo;
	novo->ant = p->ant;

    }



    return l;
}




