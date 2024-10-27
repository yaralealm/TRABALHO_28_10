#include <time.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

void carrega_vetor_aleatorio(int colecao[], int tamanho, int qtd_digitos);

void gerar_crescente(int arr[], int size); 
  
void gerar_decrescente(int arr[], int size);

void imprime_vetor(int colecao[], int tamanho);

void bubble_sort(int[], int);

void selection_sort(int[], int);

void insertion_sort(int[], int);

void merge(int colecao[], int inicio, int fim, int tam, int *comparacoes, int *trocas);

void intercala(int colecao[], int inicio, int fim, int meio, int TAM, int *comparacoes, int *trocas);

void partition(int x[], int lb, int ub, int *j, int *comparacoes, int *trocas);

void quicksort(int x[], int lb, int ub, int *comparacoes, int *trocas);

void comparacoes_e_trocas(int c, int t); 

void comparacoes_e_trocas(int c, int t) {
printf("COMPARACOES: %d\nTROCAS: %d\n", c, t);
}

void gerar_crescente(int arr[], int size) {
    printf("CRESCENTE\n"); 
    srand((unsigned)time(NULL));

    arr[0] = rand() % 100;
    for(int i = 1; i < size; i++) {
        arr[i] = arr[i-1] + (rand() % 9);
    }
}

void imprime_vetor(int colecao[], int tamanho){
	int i=0;
	for(i=0; i < tamanho; i++){
		printf("%d, ", colecao[i]);
	}
	printf("\n");
}


void carrega_vetor_aleatorio(int colecao[], int tamanho, int qtd_digitos){
	int i, digitos;

    printf("ALEATORIO\n"); 

	
	for(i=1, digitos = 10; i < qtd_digitos; i++){
		digitos *= 10;
	}
	
	srand( (unsigned) time(NULL) );
	for(i=0; i < tamanho; i++){
		colecao[i] = rand() % digitos;
	}
	
}



void gerar_decrescente(int arr[], int size) {
    printf("DECRESCENTE\n"); 
    arr[0] = size;
    for(int i = 1; i < size; i++) {
        arr[i] = arr[i-1] - (rand() % 9);
    }
}



void bubble_sort(int colecao[], int tamanho){
	int comparacoes = 0;
	int trocas = 0; 
	int i, j, elemento_auxiliar;
	int trocou = TRUE;
	
	for(i=0; i<tamanho && trocou; i++){
		trocou = FALSE;
		for(j=0; j < tamanho-(1+i); j++){
			comparacoes++; 
			if(colecao[j] > colecao[j+1]){
				elemento_auxiliar = colecao[j];
				colecao[j] = colecao[j+1];
				colecao[j+1] = elemento_auxiliar;
				trocas++; 
				trocou = TRUE;
			}
		}		
	}

	comparacoes_e_trocas(comparacoes,trocas); 
}

void insertion_sort(int colecao[], int tamanho){
	
	int comparacoes = 0; 
	int trocas = 0; 
	int i, j, elemento_auxiliar;
	for(i=1; i<tamanho; i++){
		comparacoes++; 
		elemento_auxiliar = colecao[i];
		
		for(j = i-1; j >= 0 && colecao[j] > elemento_auxiliar; j--){
			colecao[j+1] = colecao[j];
			trocas++; 
		}
		colecao[j+1] = elemento_auxiliar;
		comparacoes++; 
	}
	comparacoes_e_trocas(comparacoes,trocas); 
}

void selection_sort(int colecao[], int tamanho){
	int comparacoes = 0;
	int trocas = 0;  
	int i, j, pos_menor, elemento_auxiliar;
	
	for(i=0; i<tamanho; i++){
		pos_menor = i;
		for(j=i+1; j<tamanho; j++){
			comparacoes++; 
			if(colecao[j] < colecao[pos_menor]){
				pos_menor = j;
			}
		}
		elemento_auxiliar = colecao[i];
		colecao[i] = colecao[pos_menor];
		colecao[pos_menor] = elemento_auxiliar;
		trocas++; 
	}

	comparacoes_e_trocas(comparacoes,trocas); 
}

void partition(int x[], int lb, int ub, int *j, int *comparacoes, int *trocas) {
    int a, down, up, temp;
    a = x[lb];
    down = lb;
    up = ub;

    while (down < up) {
        while (x[down] <= a && down < ub) {
            (*comparacoes)++;
            down++;
        }
        while (x[up] > a) {
            (*comparacoes)++;
            up--;
        }
        if (down < up) {
            temp = x[down];
            x[down] = x[up];
            x[up] = temp;
            (*trocas)++;
        }
    }

    x[lb] = x[up];
    x[up] = a;
    (*trocas)++;
    *j = up;
}

void quicksort(int x[], int lb, int ub, int *comparacoes, int *trocas) {
    if (lb >= ub) return;

    int j = -1;
    partition(x, lb, ub, &j, comparacoes, trocas);

    quicksort(x, lb, j - 1, comparacoes, trocas);
    quicksort(x, j + 1, ub, comparacoes, trocas);
}

void intercala(int colecao[], int inicio, int fim, int meio, int TAM, int *comparacoes, int *trocas) {
    int pos_livre, inicio_arquivo1, inicio_arquivo2, i;
    int arquivo_aux[TAM];

    inicio_arquivo1 = inicio;
    inicio_arquivo2 = meio + 1;
    pos_livre = inicio;

    while (inicio_arquivo1 <= meio && inicio_arquivo2 <= fim) {
        (*comparacoes)++;
        if (colecao[inicio_arquivo1] <= colecao[inicio_arquivo2]) {
            arquivo_aux[pos_livre] = colecao[inicio_arquivo1++];
        } else {
            arquivo_aux[pos_livre] = colecao[inicio_arquivo2++];
        }
        pos_livre++;
        (*trocas)++;
    }

    for (i = inicio_arquivo1; i <= meio; i++, pos_livre++) {
        arquivo_aux[pos_livre] = colecao[i];
        (*trocas)++;
    }

    for (i = inicio_arquivo2; i <= fim; i++, pos_livre++) {
        arquivo_aux[pos_livre] = colecao[i];
        (*trocas)++;
    }

    for (i = inicio; i <= fim; i++) {
        colecao[i] = arquivo_aux[i];
        (*trocas)++;
    }
}

void merge(int colecao[], int inicio, int fim, int tam, int *comparacoes, int *trocas) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        merge(colecao, inicio, meio, tam, comparacoes, trocas);
        merge(colecao, meio + 1, fim, tam, comparacoes, trocas);
        intercala(colecao, inicio, fim, meio, tam, comparacoes, trocas);
    }
}