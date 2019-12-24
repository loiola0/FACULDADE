#include <stdio.h>
#include <stdlib.h>
typedef struct lista Lista;
typedef struct head Head;
void selectionSort(Lista *l);

Lista *buscar(Lista *l,int v);
Lista *lista_criar();
Lista *lista_libera();
Lista *lista_inserir(Lista *l,int valor);
Lista *lista_remover(Lista *l,int v);
int lista_vazia(Lista *l);
void lista_imprimir(Lista *l);
void menu();