typedef struct lista Lista;
void imprimir(Lista *l);
Lista *buscar(Lista *l,int x,int y);
Lista *lista_criar();
Lista *lista_libera();
Lista *lista_inserir(Lista *l,int x,int y);
Lista *lista_remover(Lista *l,int x,int y);
int lista_vazia(Lista *l);
void lista_imprimir(Lista *l);
void reflexiva(int num_conj[],Lista *l,Lista *elem);
void menu();