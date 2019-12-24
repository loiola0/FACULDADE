#include "lista.h"

struct elemento{
	int infor;
	struct elemento *prox;
	struct elemento *ant;	
};

struct lista{ 
	Elemento *inicio;
	Elemento *fim;
	
};

Lista *lista_criar(){
	Lista *l = (Lista*)malloc(sizeof(Lista));
	l->inicio = l->fim = NULL;

	return l;


}

int lista_vazia(Lista *l){

	return (l->inicio==NULL);
}

void lista_inserir(Lista *l,int v){
		Elemento *p = l->inicio;

		if(p==NULL){
			p = (Elemento*)malloc(sizeof(Elemento));
			l->inicio = p;
			l->fim = p;

			p->infor = v;
			p->prox = NULL;
			p->ant = NULL;



		}else{
			while(p->ant!=NULL){
				p = p->ant;
			}
			Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
			p->ant = novo;
			novo->infor = v;
			novo->prox = p;
			novo->ant = NULL;
			l->inicio = novo;
			l->fim = p;

		}



}

Lista *buscar(Lista *l,int x){
	Elemento *p;

	for(p=l->inicio;p!=NULL;p=p->prox){
		if(p->infor == x){
			
			return l;
		}

	}
	return NULL;
	
}

Lista *lista_remover(Lista *l,int v){
	Elemento *aux;
	Elemento *aux2=l->inicio;

	
	if(aux2==NULL){//não achou o elemento, retorna lista inalterada

		return l;
	}
	if(l->inicio->infor=aux2->infor){//testa se é o primeiro elemento
		l->inicio = aux2->prox;

	}else{
		aux2->ant->prox = aux2->prox;

	}
	if(aux2->prox!=NULL){//testa se é o último elemento
		aux2->prox->ant = aux2->ant;

	}
	
	free(aux2);
	return l;

}



Lista *liberar(Lista *l){
	Elemento * p = l->inicio;
	while(p!=NULL){
		Elemento *t = p->prox;
		free(p);
		p = t;
	}


}

void imprimir(Lista *l){
	Elemento *p;

	for (p= l->inicio; p!=NULL; p=p->prox){
	
		printf("%d\n",p->infor);
	}


}
