#include <stdio.h>
#include <stdlib.h>
#include "arv.c"

int main()
{
    Arv *a1 = arv_cria('d',arv_criaVazia(),arv_criaVazia());
    Arv *a8 = arv_cria('g',arv_criaVazia(),arv_criaVazia());
    Arv *a2 = arv_cria('b',a8,a1);
    Arv *a3 = arv_cria('e',arv_criaVazia(),arv_criaVazia());
    Arv *a4 = arv_cria('f',arv_criaVazia(),arv_criaVazia());
    Arv *a5 = arv_cria('c',a3,a4);
    Arv *a6 = arv_cria('a',a2,a5);

    arv_imprimir(a6);
    //printf("%d\n",arv_pertence(a6,'f'));
    printf("\n");

}
