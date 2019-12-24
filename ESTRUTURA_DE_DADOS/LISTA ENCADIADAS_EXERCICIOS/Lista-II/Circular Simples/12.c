

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






