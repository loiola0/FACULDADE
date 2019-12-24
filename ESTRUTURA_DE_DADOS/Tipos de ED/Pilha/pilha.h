typedef struct lista Lista;
typedef struct pilha Pilha;

Pilha *criarPilha();
void push(Pilha *p,float v);
float pop(Pilha *p);
int vazia(Pilha *p);
void liberarPilha(Pilha *p);
float topo(Pilha *p);
