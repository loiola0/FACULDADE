

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
        novo->prox = NULL;
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




