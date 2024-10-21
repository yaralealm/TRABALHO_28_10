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

void gerar_crescente(int arr[], int size) {
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
	
	for(i=1, digitos = 10; i < qtd_digitos; i++){
		digitos *= 10;
	}
	
	srand( (unsigned) time(NULL) );
	for(i=0; i < tamanho; i++){
		colecao[i] = rand() % digitos;
	}
	
}



void gerar_decrescente(int arr[], int size) {
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

void insert_sort(int colecao[], int tamanho){
	
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