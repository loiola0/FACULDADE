#include <stdio.h>
#include <stdlib.h>
#include "fila.c"
int main()
{
    Fila *f = fila_criar();
    fila_insere(f,10);
    fila_insere(f,70);
    fila_insere(f,80);
    fila_insere(f,40);
    fila_remove(f);
    fila_imprimir(f);

}
