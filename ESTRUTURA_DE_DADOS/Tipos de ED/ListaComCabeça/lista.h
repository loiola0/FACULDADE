#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct elemento Elemento;
typedef struct lista Lista;
Lista *lista_criar();
int lista_vazia(Lista *l);
void lista_inserir(Lista *l, int valor);
void imprimir(Lista *l);
Lista *liberar(Lista *l);
Lista *buscar(Lista *l,int x);
Lista *lista_remover(Lista *l,int v);