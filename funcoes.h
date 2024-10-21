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

void merge(int colecao[], int inicio, int fim, int tam);

void intercala(int colecao[], int inicio, int fim, int meio, int TAM);

void partition(int x[], int lb, int ub, int *j);

void quicksort(int x[], int lb, int ub); 

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
	int i, j, elemento_auxiliar;
	int trocou = TRUE;
	
	for(i=0; i<tamanho && trocou; i++){
		trocou = FALSE;
		for(j=0; j < tamanho-(1+i); j++){
			if(colecao[j] > colecao[j+1]){
				elemento_auxiliar = colecao[j];
				colecao[j] = colecao[j+1];
				colecao[j+1] = elemento_auxiliar;
				trocou = TRUE;
			}
		}		
	}
}

void insertion_sort(int colecao[], int tamanho){
	
	int i, j, elemento_auxiliar;
	for(i=1; i<tamanho; i++){
		elemento_auxiliar = colecao[i];
		
		for(j = i-1; j >= 0 && colecao[j] > elemento_auxiliar; j--){
			colecao[j+1] = colecao[j];
		}
		colecao[j+1] = elemento_auxiliar;
	}
}

void selection_sort(int colecao[], int tamanho){
	int i, j, pos_menor, elemento_auxiliar;
	
	for(i=0; i<tamanho; i++){
		pos_menor = i;
		for(j=i+1; j<tamanho; j++){
			if(colecao[j] < colecao[pos_menor]){
				pos_menor = j;
			}
		}
		elemento_auxiliar = colecao[i];
		colecao[i] = colecao[pos_menor];
		colecao[pos_menor] = elemento_auxiliar;
	}
}


void intercala(int colecao[], int inicio, int fim, int meio, int TAM){
	int pos_livre, inicio_arquivo1, inicio_arquivo2, i;
	int arquivo_aux[TAM];
	inicio_arquivo1 = inicio;
	inicio_arquivo2 = meio + 1;
	pos_livre = inicio;
	while(inicio_arquivo1 <= meio && inicio_arquivo2 <= fim){
		if(colecao[inicio_arquivo1] <= colecao[inicio_arquivo2]){
			arquivo_aux[pos_livre] = colecao[inicio_arquivo1];
			inicio_arquivo1 += 1;
		} 
		else
		{
			arquivo_aux[pos_livre] = colecao[inicio_arquivo2];
			inicio_arquivo2 += 1;
		}
		pos_livre += 1;
	}
	for(i=inicio_arquivo1; i<= meio; i++, pos_livre++){
		arquivo_aux[pos_livre] = colecao[i];
	}
	for(i=inicio_arquivo2; i<= fim; i++, pos_livre++){
		arquivo_aux[pos_livre] = colecao[i];
	}
	for(i=inicio; i <= fim; i++){
		colecao[i] = arquivo_aux[i];
	}
}

void merge(int colecao[], int inicio, int fim, int tam){
	int meio;
	if(inicio < fim){
		meio = (inicio + fim) / 2;
		merge(colecao, inicio, meio, tam);
		merge(colecao, meio+1, fim, tam);
		intercala(colecao, inicio, fim, meio, tam);
	}
}

void quicksort(int x[], int lb, int ub){

    int j = -1;

    if(lb >= ub)
        return;                     /* Vetor está classificado */

    partition(x, lb, ub, &j);       /* Particiona os elementos do subvetor
                                     * de modo que um dos elementos seja alocado
                                     * em sua posição correta. A variável j é a
                                     * posição onde este elemento foi alocada
                                     */

    quicksort(x, lb, j-1);          /* Classifica de forma recursiva o subvetor
                                     * entre a posição lb e j-1
                                     */

    quicksort(x, j+1, ub);          /* Classifica de forma recursiva o subvetor
                                     * entre a posição j+1 e ub
                                     */

}


void partition(int x[], int lb, int ub, int *j){

    int a, down, up, temp;
    
    /*
     * a é o elemento cuja posição 
     * final é procurada (pivô)
     */
    a = x[lb];

    /*
     * Inicialização dos ponteiros
     */
    up = ub;
    down = lb;

    while(down < up){
        while(x[down] <= a && down < ub){
            /*
             * Sobe no vetor
             */
            down++;
        }
        while(x[up] > a){
            /*
             * Desce no vetor
             */
            up--;
        }
        if(down < up){
            temp = x[down];
            x[down] = x[up];
            x[up] = temp;
        }
    }
    x[lb] = x[up];
    x[up] = a;
    *j = up;
}