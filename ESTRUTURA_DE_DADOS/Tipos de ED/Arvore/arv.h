typedef struct arv Arv;
Arv *arv_criaVazia();
Arv *arv_cria(char c,Arv *sae,Arv *sad);//retorna o endereço do nó raiz
int arv_vazia(Arv *a);
Arv *arv_libera(Arv *a);//retorna uma árvore vazia
int arv_pertence(Arv *a,char c);
void arv_imprimir(Arv *a);
