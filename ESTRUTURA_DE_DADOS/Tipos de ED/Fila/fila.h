typedef struct fila Fila;
Fila *fila_criar();
void fila_insere(Fila *f,int v);
int fila_remove(Fila *f);
int fila_vazia(Fila *f);
void fila_libera(Fila *f);
void fila_imprimir(Fila *f);
