#include "lista.c"

int  main(){



		Lista *l = lista_criar();
		
		lista_inserir(l,1);
		lista_inserir(l,2);
		lista_inserir(l,3);
		lista_inserir(l,4);
		lista_inserir(l,5);
		lista_inserir(l,6);
		imprimir(l);
		l = lista_remover(l,6);
		imprimir(l);


}

	
	
	
