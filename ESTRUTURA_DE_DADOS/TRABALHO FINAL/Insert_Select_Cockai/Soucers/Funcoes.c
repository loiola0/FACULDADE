#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../Headers/BibliotecaOrdenacao.h"

struct elemento{
	int valor;
	int indice;
	struct elemento *prox, *ant;	
};


struct lista{
	int tam;
	Elemento *head;
	Elemento *tail;
};


Lista *criarListaDP(){
	Lista *ls = (Lista*)malloc(sizeof(Lista));
	ls->head = NULL;
	ls->tam= 0;
	return ls;
}

void append(Lista*l, int v){
	Elemento*aux = l->head;
	l->tam++;
	if(aux==NULL){
		aux = (Elemento*)malloc(sizeof(Elemento));
		aux->valor = v;
		aux->indice = l->tam;
		aux->prox = NULL;
		aux->ant = NULL;
		l->head = l->tail = aux;
		
	}else{
		while(aux->prox!=NULL){
			aux = aux->prox;
		}
		Elemento*novo = (Elemento*)malloc(sizeof(Elemento));
		novo->valor = v;
		novo->indice = l->tam;
		novo->ant = aux;
		novo->prox = NULL;
		aux->prox = novo;
		l->tail = novo;
	}
}
void imprimir(Lista *ls){
	printf("\n\nLista: \n");
	Elemento *aux = ls->head;
	while(aux!=NULL)
	{
		printf("-> %d",aux->valor);
		aux = aux ->prox;
	}
	
}
/////////////////////////////////////
void aleatorios(int qtd, FILE *arq_1, FILE *arq_2, FILE *arq_3, FILE *arq_4, FILE *arq_5, FILE *arq_6, FILE *arq_7, FILE *arq_8,
FILE *arq_9, FILE *arq_10){
	int x, i;
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_1,"%d\n",x);
	}
	fclose(arq_1);
	
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_2,"%d\n",x);
	}
	fclose(arq_2);
	
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_3,"%d\n",x);
	}
	fclose(arq_3);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_4,"%d\n",x);
	}
	fclose(arq_4);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_5,"%d\n",x);
	}
	fclose(arq_5);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_6,"%d\n",x);
	}
	fclose(arq_6);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_7,"%d\n",x);
	}
	fclose(arq_7);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_8,"%d\n",x);
	}
	fclose(arq_8);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_9,"%d\n",x);
	}
	fclose(arq_9);
	
	for(i = 0; i < qtd; i++){
		x = rand()%1001 - 500;
		fprintf(arq_10,"%d\n",x);
	}
	fclose(arq_10);
}

void lerArquivo(int opc, FILE *a1, Lista *l1, FILE *a2, Lista *l2, FILE *a3, Lista *l3, FILE *a4, Lista *l4, FILE *a5, Lista *l5, 
FILE *a6, Lista *l6, FILE *a7, Lista *l7, FILE *a8, Lista *l8, FILE *a9, Lista *l9, FILE *a10, Lista *l10){
	int i, x;
	if(opc == 3){
		a1 = fopen("Doc10_1.txt", "r");
	
		
		for(i = 0; i<10; i++){
		   	fscanf(a1,"%d\n",&x);
		   	append(l1,x);
		}
		fclose(a1);
		a2 = fopen("Doc10_2.txt", "r");
	
		for(i = 0; i<10; i++){
		   	fscanf(a2,"%d\n",&x);
		   	append(l2,x);
		}
		fclose(a2);
		a3 = fopen("Doc10_3.txt", "r");
	
		for(i = 0; i<10; i++){
		   	fscanf(a3,"%d\n",&x);
		   	append(l3,x);
		}
	   	fclose(a3);
	   	a4 = fopen("Doc10_4.txt", "r");
		for(i = 0; i<10; i++){
		   	fscanf(a4,"%d\n",&x);
		   	append(l4,x);
		}
	   	fclose(a4);
	   	a5 = fopen("Doc10_5.txt", "r");
	
		for(i = 0; i<10; i++){
		   	fscanf(a5,"%d\n",&x);
		   	append(l5,x);
	   	}
	   	fclose(a5);
	   	a6 = fopen("Doc10_6.txt", "r");
	
		for(i = 0; i<10; i++){
		   	fscanf(a6,"%d\n",&x);
		   	append(l6,x);
	   	}
	   	fclose(a6);
	   	a7 = fopen("Doc10_7.txt", "r");
	
		for(i = 0; i<10; i++){
		   	fscanf(a7,"%d\n",&x);
		   	append(l7,x);
	   	}
		fclose(a7);
	   	a8 = fopen("Doc10_8.txt", "r");
	
		for(i = 0; i<10; i++){
		   	fscanf(a8,"%d\n",&x);
			append(l8,x);
		}
		fclose(a8);
		a9 = fopen("Doc10_9.txt", "r");
	
		for(i = 0; i<10; i++){
			fscanf(a9,"%d\n",&x);
		   	append(l9,x);
		}
		fclose(a9);
		a10 = fopen("Doc10_10.txt", "r");
	
		for(i = 0; i<10; i++){
			fscanf(a10,"%d\n",&x);
			append(l10,x);
		}
		fclose(a10);
	}
	else if(opc == 6){
		a1 = fopen("Doc100_1.txt", "r") ;
		for(i = 0; i<100; i++){
		   	fscanf(a1,"%d\n",&x);
		   	append(l1,x);
		}
		fclose(a1);
		a2 = fopen("Doc100_2.txt", "r");
	
		for(i = 0; i<100; i++){
		   	fscanf(a2,"%d\n",&x);
		   	append(l2,x);
		}
		fclose(a2);
		a3 = fopen("Doc100_3.txt", "r");
	
		for(i = 0; i<100; i++){
		   	fscanf(a3,"%d\n",&x);
		   	append(l3,x);
		}
	   	fclose(a3);
	   	a4 = fopen("Doc100_4.txt", "r");
		for(i = 0; i<100; i++){
		   	fscanf(a4,"%d\n",&x);
		   	append(l4,x);
		}
	   	fclose(a4);
	   	a5 = fopen("Doc100_5.txt", "r");
	
		for(i = 0; i<100; i++){
		   	fscanf(a5,"%d\n",&x);
		   	append(l5,x);
	   	}
	   	fclose(a5);
	   	a6 = fopen("Doc100_6.txt", "r");
	
		for(i = 0; i<100; i++){
		   	fscanf(a6,"%d\n",&x);
		   	append(l6,x);
	   	}
	   	fclose(a6);
	   	a7 = fopen("Doc100_7.txt", "r");
	
		for(i = 0; i<100; i++){
		   	fscanf(a7,"%d\n",&x);
		   	append(l7,x);
	   	}
		fclose(a7);
	   	a8 = fopen("Doc100_8.txt", "r");
	
		for(i = 0; i<100; i++){
		   	fscanf(a8,"%d\n",&x);
			append(l8,x);
		}
		fclose(a8);
		a9 = fopen("Doc100_9.txt", "r");
	
		for(i = 0; i<100; i++){
			fscanf(a9,"%d\n",&x);
		   	append(l9,x);
		}
		fclose(a9);
		a10 = fopen("Doc100_10.txt", "r");
	
		for(i = 0; i<100; i++){
			fscanf(a10,"%d\n",&x);
			append(l10,x);
		}
		fclose(a10);
	}
	else if(opc == 9){
		   
		a1 = fopen("Doc1000_1.txt", "r");
		for(i = 0; i<1000; i++){
		   	fscanf(a1,"%d\n",&x);
		   	append(l1,x);
		}
		fclose(a1);
		a2 = fopen("Doc1000_2.txt", "r");
	
		for(i = 0; i<1000; i++){
		   	fscanf(a2,"%d\n",&x);
		   	append(l2,x);
		}
		fclose(a2);
		a3 = fopen("Doc1000_3.txt", "r");
	
		for(i = 0; i<1000; i++){
		   	fscanf(a3,"%d\n",&x);
		   	append(l3,x);
		}
	   	fclose(a3);
	   	a4 = fopen("Doc1000_4.txt", "r");
		for(i = 0; i<1000; i++){
		   	fscanf(a4,"%d\n",&x);
		   	append(l4,x);
		}
	   	fclose(a4);
	   	a5 = fopen("Doc1000_5.txt", "r");
	
		for(i = 0; i<1000; i++){
		   	fscanf(a5,"%d\n",&x);
		   	append(l5,x);
	   	}
	   	fclose(a5);
	   	a6 = fopen("Doc1000_6.txt", "r");
	
		for(i = 0; i<1000; i++){
		   	fscanf(a6,"%d\n",&x);
		   	append(l6,x);
	   	}
	   	fclose(a6);
	   	a7 = fopen("Doc1000_7.txt", "r");
	
		for(i = 0; i<1000; i++){
		   	fscanf(a7,"%d\n",&x);
		   	append(l7,x);
	   	}
		fclose(a7);
	   	a8 = fopen("Doc1000_8.txt", "r");
	
		for(i = 0; i<1000; i++){
		   	fscanf(a8,"%d\n",&x);
			append(l8,x);
		}
		fclose(a8);
		a9 = fopen("Doc1000_9.txt", "r");
	
		for(i = 0; i<1000; i++){
			fscanf(a9,"%d\n",&x);
		   	append(l9,x);
		}
		fclose(a9);
		a10 = fopen("Doc1000_10.txt", "r");
	
		for(i = 0; i<1000; i++){
			fscanf(a10,"%d\n",&x);
			append(l10,x);
		}
		fclose(a10);
	
		
	}
	
}

void insertion_sort(Lista *lst){
    Elemento *aux1, *aux2;
    int cont = 0;
    int num;
    for(aux1 = lst->head->prox; aux1!=NULL; aux1 = aux1->prox){
		num = aux1->valor;
		for(aux2 = aux1; aux2 != lst->head && aux2->ant->valor > num; aux2 = aux2->ant){
			aux2->valor = aux2->ant->valor;
			cont++;
		}
		aux2->valor = num;
	}
}
//FUNÇÃO QUE INSERE ELEMENTOS EM ORDEM CRESCENTE OU DECRESCENTE
void inserirCrDr(int opc, Lista *lst){
	int i;
	if(opc == 1){
		
	      	for(i = 1; i <= 10; i++){
			append(lst, i);
		}
	
	}
	else if(opc == 2){
		
		for(i = 10; i >= 1; i--){
			append(lst, i);
		}
		
	}
	else if(opc == 4){
		
		for(i = 1; i <= 100; i++){
			append(lst, i);
		}
		
		
	}
	
	else if(opc == 5){
		
		for(i = 100; i >= 1; i--){
			append(lst, i);
		}
	
	}
	
	
	else if(opc == 7){
	
		for(i = 1; i <= 1000; i++){
			append(lst, i);
		}
		
		
	}
		else if(opc == 8){
		
		for(i = 1000; i >= 1; i--){
			append(lst, i);
		}
		
	}
}
void selection_Sort(Lista *lst){
        Elemento *aux1,*aux2,*menor;
        int troca, n_trocas=0, n_verificacaoe=0;
        for(aux1 = lst->head; aux1!=NULL; aux1=aux1->prox){
			menor = aux1;
            n_verificacaoe+=1;
			for (aux2 = aux1->prox; aux2 !=NULL; aux2=aux2->prox){
                if(aux2->valor < aux1->valor){
                        menor = aux2;   
                }
            }
            if(aux1!=menor){
                troca = aux1->valor;
                aux1->valor = menor->valor;
                menor->valor = troca;
                n_trocas+=1;
            }
            
        }
		// printf("Numero de verificacoes = %d\n",n_verificacaoe );
  //       printf("Numero de trocas = %d\n",n_trocas );
}

void bubble_Sort (Lista *l){
	Elemento *aux = l->head;
	Elemento *x;
	while(aux!=NULL){
		x = aux->prox;
		while(x!=NULL){
			if(aux->valor>x->valor){
				int troca = aux->valor;
				aux->valor = x->valor;
				x->valor = troca;
			}
			x = x->prox;
		}
		aux = aux->prox;
	}
}

Lista *cocktailSort(Lista *l,int trocas, int v){
	Elemento *aux = l -> head,*aux2;
	int x,troca=0;
	do{
		aux2=aux->prox;
		v++;
		if(aux->valor>aux2->valor){
			x=aux->valor;
			aux->valor=aux2->valor;
			aux2->valor=x;
			troca++;
			trocas++;
			
		}
		aux=aux->prox;
	}while(aux->prox!=NULL);
	v++;
	if(aux->prox!=NULL){
		do{
			aux2=aux->ant;
			v++;
			if(aux2->valor>aux->valor){
				x=aux2->valor;
				aux2->valor=aux->valor;
				aux->valor=x;
				trocas++;
				troca++;
			}
			aux=aux->ant;
		}while(aux->ant!=NULL);
	}
	//printf("\ntrocas: %d verificacoes: %d", trocas, v);
	
	if(troca==0){
		
		return l;
	}else{
		
		l=cocktailSort(l,trocas, v);
	}
	
}
//MERGE OU QUICK


int opcaoMenu(){
	int opc = -1;
	do{	
		system("cls");
		printf("1 - dez elementos em ondem crescente \n");
		printf("2 - dez elementos em ordem descrescente \n");
	   	printf("3 - dez elementos em ordem aleatoria \n");
		
	   	printf("\n4 - cem elementos em ondem crescente \n");
	   	printf("5 - cem elementos em ordem descrescente \n");
	   	printf("6 - cem elementos em ordem aleatoria \n");
		
	   	printf("\n7 - mil elementos em ondem crescente \n");
	   	printf("8 - mil elementos em ordem descrescente \n");
	   	printf("9 - mil elementos em ordem aleatoria \n");
	
	   	printf("0 - Voltar\n\n->");
	   	scanf("%d",&opc);
	}while(opc<0 || opc>9);
	return opc;
}
void menu(){
	FILE *arq_1, *arq_2, *arq_3, *arq_4, *arq_5, *arq_6, *arq_7, *arq_8, *arq_9, *arq_10;
	
	 
	 Lista *l1  = criarListaDP();
	 Lista *l2  = criarListaDP();
	 Lista *l3  = criarListaDP();
	 Lista *l4  = criarListaDP();
	 Lista *l5  = criarListaDP();
	 Lista *l6  = criarListaDP();
	 Lista *l7  = criarListaDP();
	 Lista *l8  = criarListaDP();
	 Lista *l9  = criarListaDP();
	 Lista *l10  = criarListaDP();

	//int qtd = 1000;
	//aleatorios(qtd, arq_1, arq_2, arq_3, arq_4, arq_5, arq_6, arq_7, arq_8, arq_9, arq_10);

	int opcPrincipal;
		while(opcPrincipal!=0){

		printf("\nALGORITMOS DE ORDENACAO");
		printf("\n1 - Insertion Sort");
		printf("\n2 - Selection Sort");
		printf("\n3 - Bubble Sort");
		printf("\n4 - (Merge Sort)");
		printf("\n5 - QuickSort");
		printf("\n6 - CockTail");
		printf("\n0 - Sair\n\n->");
		
		scanf("%d",&opcPrincipal);
		
			if(opcPrincipal == 1){
			
				system("cls");
				printf("TESTES COM ALGORITMO DE ORDENACAO INSERTION SORT\n");
				int opcSecundaria = opcaoMenu();
				if(opcSecundaria == 1 || opcSecundaria == 4 || opcSecundaria == 7){
					Lista *lst = criarListaDP();
					inserirCrDr(opcSecundaria, lst);
				   	system("cls");
				   	printf("\n\nElementos da lista: \n");
				   	imprimir(lst);
					printf("\n\nElementos da lista ordenados: \n");
					insertion_sort(lst);
					imprimir(lst);
					system("pause");
					system("cls");
				}
			
				else if(opcSecundaria == 2 || opcSecundaria == 5 || opcSecundaria == 8){
					Lista *lst = criarListaDP();
					inserirCrDr(opcSecundaria, lst);
					system("cls");
					printf("\n\nElementos da lista: \n");
					imprimir(lst);
					printf("\n\nElementos da lista ordenados: \n");
					insertion_sort(lst);
					imprimir(lst);
					system("pause");
					system("cls");  	
				}
			
				else if(opcSecundaria == 3 || opcSecundaria == 6 || opcSecundaria == 9){
					system("cls");
					printf("\nValores aleatorios ja armazenados: \n");
					//"Ler" os valores que estao no arquivo
					lerArquivo(opcSecundaria, arq_1, l1, arq_2, l2, arq_3, l3, arq_4, l4, arq_5, l5, arq_6, l6, arq_7, l7, arq_8, l8, 
					arq_9, l9, arq_10, l10);
				   	//imprimir os valores
				   	imprimir(l1);
				   	imprimir(l2);
				   	imprimir(l3);
				   	imprimir(l4);
				   	imprimir(l5);
				   	imprimir(l6);
				   	imprimir(l7);
				   	imprimir(l8);
				   	imprimir(l9);
				   	imprimir(l10);
				
				   	printf("\n\nValores aleatorios em ordem: \n");
				   	insertion_sort(l1);
				   	imprimir(l1);
				   	insertion_sort(l2);
				   	imprimir(l2);
				   	insertion_sort(l3);
				   	imprimir(l3);
				   	insertion_sort(l4);
				   	imprimir(l4);
				   	insertion_sort(l5);
				   	imprimir(l5);
				   	insertion_sort(l6);
				   	imprimir(l6);
				   	insertion_sort(l7);
				   	imprimir(l7);
				   	insertion_sort(l8);
				   	imprimir(l8);
				   	insertion_sort(l9);
				   	imprimir(l9);
				   	insertion_sort(l10);
				   	imprimir(l10);
				   	system("pause");
				   	system("cls");
					}
			
			}
			else if(opcPrincipal == 2){
			
			
			system("cls");
			printf("TESTES COM ALGORITMO DE ORDENACAO SELECTION SORT\n");
			int opcSecundaria = opcaoMenu();
			if(opcSecundaria == 1 || opcSecundaria == 4 || opcSecundaria == 7){
				Lista *lst = criarListaDP();
				inserirCrDr(opcSecundaria, lst);
				system("cls");
				printf("\n\nElementos da lista: \n");
				imprimir(lst);
				printf("\n\nElementos da lista ordenados: \n");
				selection_Sort(lst);
				imprimir(lst);
				system("pause");
				system("cls");
			}
			
			else if(opcSecundaria == 2 || opcSecundaria == 5 || opcSecundaria == 8){
				Lista *lst = criarListaDP();
				inserirCrDr(opcSecundaria, lst);
				system("cls");
				printf("\n\nElementos da lista: \n");
				imprimir(lst);
				printf("\n\nElementos da lista ordenados: \n");
				selection_Sort(lst);
				imprimir(lst);
				system("pause");
				system("cls");  	
			}
			
			else if(opcSecundaria == 3 || opcSecundaria == 6 || opcSecundaria == 9){
				system("cls");
				printf("\nValores aleatorios ja armazenados: \n");
				//"Ler" os valores que estao no arquivo
				lerArquivo(opcSecundaria, arq_1, l1, arq_2, l2, arq_3, l3, arq_4, l4, arq_5, l5, arq_6, l6, arq_7, l7, arq_8, l8, 
				arq_9, l9, arq_10, l10);
				//imprimir os valores
				imprimir(l1);
				imprimir(l2);
				imprimir(l3);
				imprimir(l4);
				imprimir(l5);
				imprimir(l6);
				imprimir(l7);
				imprimir(l8);
				imprimir(l9);
				imprimir(l10);
				
				printf("\n\nValores aleatorios em ordem: \n");
				selection_Sort(l1);
				imprimir(l1);
				selection_Sort(l2);
				imprimir(l2);
				selection_Sort(l3);
				imprimir(l3);
				selection_Sort(l4);
				imprimir(l4);
				selection_Sort(l5);
				imprimir(l5);
				selection_Sort(l6);
				imprimir(l6);
				selection_Sort(l7);
				imprimir(l7);
				selection_Sort(l8);
				imprimir(l8);
				selection_Sort(l9);
				imprimir(l9);
				selection_Sort(l10);
				imprimir(l10);
				system("pause");
				system("cls");
			}
			
		

		}
			else if(opcPrincipal == 3){
				   
			
			system("cls");
			printf("TESTES COM ALGORITMO DE ORDENACAO BUBBLE SORT\n");
			int opcSecundaria = opcaoMenu();
			if(opcSecundaria == 1 || opcSecundaria == 4 || opcSecundaria == 7){
				Lista *lst = criarListaDP();
				inserirCrDr(opcSecundaria, lst);
				system("cls");
				printf("\n\nElementos da lista: \n");
				imprimir(lst);
				printf("\n\nElementos da lista ordenados: \n");
				bubble_Sort(lst);
				imprimir(lst);
				system("pause");
				system("cls");
			}
			
			else if(opcSecundaria == 2 || opcSecundaria == 5 || opcSecundaria == 8){
				Lista *lst = criarListaDP();
				inserirCrDr(opcSecundaria, lst);
				system("cls");
				printf("\n\nElementos da lista: \n");
				imprimir(lst);
				printf("\n\nElementos da lista ordenados: \n");
				bubble_Sort(lst);
				imprimir(lst);
				system("pause");
				system("cls");  	
			}
			
			else if(opcSecundaria == 3 || opcSecundaria == 6 || opcSecundaria == 9){
				system("cls");
				printf("\nValores aleatorios ja armazenados: \n");
				//"Ler" os valores que estao no arquivo
				lerArquivo(opcSecundaria, arq_1, l1, arq_2, l2, arq_3, l3, arq_4, l4, arq_5, l5, arq_6, l6, arq_7, l7, arq_8, l8, 
				arq_9, l9, arq_10, l10);
				//imprimir os valores
				imprimir(l1);
				imprimir(l2);
				imprimir(l3);
				imprimir(l4);
				imprimir(l5);
				imprimir(l6);
				imprimir(l7);
				imprimir(l8);
				imprimir(l9);
				imprimir(l10);
				
				printf("\n\nValores aleatorios em ordem: \n");
				bubble_Sort(l1);
				imprimir(l1);
				bubble_Sort(l2);
				imprimir(l2);
				bubble_Sort(l3);
				imprimir(l3);
				bubble_Sort(l4);
				imprimir(l4);
				bubble_Sort(l5);
				imprimir(l5);
				bubble_Sort(l6);
				imprimir(l6);
				bubble_Sort(l7);
				imprimir(l7);
				bubble_Sort(l8);
				imprimir(l8);
				bubble_Sort(l9);
				imprimir(l9);
				bubble_Sort(l10);
				imprimir(l10);
				system("pause");
				system("cls");
			}
			
			}
			
			if(opcPrincipal == 6){
				int trocas=0, v = 0;
				system("cls");
				printf("TESTES COM ALGORITMO DE ORDENACAO COCKTAIL SORT\n");
				int opcSecundaria = opcaoMenu();
				if(opcSecundaria == 1 || opcSecundaria == 4 || opcSecundaria == 7){
					Lista *lst = criarListaDP();
					inserirCrDr(opcSecundaria, lst);
				   	system("cls");
				   	printf("\n\nElementos da lista: \n");
				   	imprimir(lst);
					printf("\n\nElementos da lista ordenados: \n");
					cocktailSort(lst, trocas, v);
					imprimir(lst);
					system("pause");
					system("cls");
				}
			
				else if(opcSecundaria == 2 || opcSecundaria == 5 || opcSecundaria == 8){
					Lista *lst = criarListaDP();
					inserirCrDr(opcSecundaria, lst);
					system("cls");
					printf("\n\nElementos da lista: \n");
					imprimir(lst);
					printf("\n\nElementos da lista ordenados: \n");
					cocktailSort(lst, trocas, v);
					imprimir(lst);
					system("pause");
					system("cls");  	
				}
			
				else if(opcSecundaria == 3 || opcSecundaria == 6 || opcSecundaria == 9){
					system("cls");
					printf("\nValores aleatorios ja armazenados: \n");
					//"Ler" os valores que estao no arquivo
					lerArquivo(opcSecundaria, arq_1, l1, arq_2, l2, arq_3, l3, arq_4, l4, arq_5, l5, arq_6, l6, arq_7, l7, arq_8, l8, 
					arq_9, l9, arq_10, l10);
				   	//imprimir os valores
				   	imprimir(l1);
				   	imprimir(l2);
				   	imprimir(l3);
				   	imprimir(l4);
				   	imprimir(l5);
				   	imprimir(l6);
				   	imprimir(l7);
				   	imprimir(l8);
				   	imprimir(l9);
				   	imprimir(l10);
				
				   	printf("\n\nValores aleatorios em ordem: \n");
				   	cocktailSort(l1, trocas, v);
				   	imprimir(l1);
				   	cocktailSort(l2, trocas, v);
				   	imprimir(l2);
				   	cocktailSort(l3, trocas, v);
				   	imprimir(l3);
				   	cocktailSort(l4, trocas, v);
				   	imprimir(l4);
				   	cocktailSort(l5, trocas, v);
				   	imprimir(l5);
				   	cocktailSort(l6, trocas, v);
				   	imprimir(l6);
				   cocktailSort(l7, trocas, v);
				   	imprimir(l7);
				   	cocktailSort(l8, trocas, v);
				   	imprimir(l8);
				   	cocktailSort(l9, trocas, v);
				   	imprimir(l9);
				   	cocktailSort(l10, trocas, v);
				   	imprimir(l10);
				   	system("pause");
				   	system("cls");
					}
			
			}
			
			
			
		}
		
	
}