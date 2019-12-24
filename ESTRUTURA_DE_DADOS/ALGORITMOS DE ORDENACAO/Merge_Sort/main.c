#include "mergesort.h"
#include "mergesort.c"
int main(){
    
    Lista *a  = lista_criar();

   // a = lista_inserir(a,10);
    a = lista_inserir(a,40);
   
    a = lista_inserir(a,33);
    a = lista_inserir(a,20);
    a = lista_inserir(a,9);
   
    a = lista_inserir(a,839);
    a = lista_inserir(a,453);
    
   // a = lista_inserir(a,30);
   // a = lista_inserir(a,50);
  //  a = lista_inserir(a,60);
  //  a = lista_inserir(a,70);
   // a = lista_inserir(a,80);
   // a = lista_inserir(a,90);
    
  	
    // merge(a,b);
  
    
    a = mergesort(a);
    lista_imprimir(a);
    
}
