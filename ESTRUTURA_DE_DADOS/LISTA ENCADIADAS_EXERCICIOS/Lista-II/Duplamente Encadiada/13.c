

Lista *intercalar(Lista *primeira_lista,Lista *segunda_lista,Lista *intersao_listas){
        Lista *p1=primeira_lista;
        Lista *p2=segunda_lista;
        Lista *p3 = intersao_listas;


        while(p1!=NULL){

            p3 = inserir_lista(p3,p1->valor);

            while(p2!=NULL){

            p3 = inserir_lista(p3,p2->valor);



            p2=p2->prox;


        }






            p1=p1->prox;


        }






return p3;

}




