
typedef struct elemento Elemento;
typedef struct lista Lista;

Lista *criarListaDP();
void append(Lista *lst, int v);
void imprimir(Lista *ls);

void aleatorios(int qtd, FILE *arq_1, FILE *arq_2, FILE *arq_3, FILE *arq_4, FILE *arq_5, FILE *arq_6, FILE *arq_7, FILE *arq_8,
FILE *arq_9, FILE *arq_10);
void lerArquivo(int opc, FILE *a1, Lista *l1, FILE *a2, Lista *l2, FILE *a3, Lista *l3, FILE *a4, Lista *l4, FILE *a5, Lista *l5, 
FILE *a6, Lista *l6, FILE *a7, Lista *l7, FILE *a8, Lista *l8, FILE *a9, Lista *l9, FILE *a10, Lista *l10);

void inserirCrDr(int opc, Lista *lst);

void insertion_Sort(Lista *lst);
void selection_Sort(Lista *lst);
void bubble_Sort (Lista *lst);
Lista* cocktailSort(Lista *l,int trocas, int v);

int opcaoMenu();
void menu();