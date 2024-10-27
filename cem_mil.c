#include <stdio.h>
#include <time.h>
#include "funcoes.h"

#define TAM2 100000


typedef struct {
 double bubble_sort_time;
 double selection_sort_time;
 double insertion_sort_time;
 double merge_sort_time;
 double quick_sort_time;
} Contador;

int main() {
int vet[TAM2];
 Contador contador = {0}; 

int comparacoes = 0, trocas = 0;


printf("BUBBLE SORT\n");

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

clock_t start = clock();
bubble_sort(vet, TAM2);
clock_t end = clock();
printf("----------------\n"); 
contador.bubble_sort_time = (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

carrega_vetor_aleatorio(vet, TAM2, 2);
imprime_vetor(vet, TAM2);

start = clock();
bubble_sort(vet, TAM2);
end = clock();
printf("----------------\n"); 
contador.bubble_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

gerar_decrescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
bubble_sort(vet, TAM2);
end = clock();
printf("----------------\n"); 
contador.bubble_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

printf("\nSELECTION SORT\n");

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
selection_sort(vet, TAM2);
end = clock();
printf("----------------\n"); 
contador.selection_sort_time = (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

carrega_vetor_aleatorio(vet, TAM2, 2);
imprime_vetor(vet, TAM2);

start = clock();
selection_sort(vet, TAM2);
end = clock();
printf("----------------\n"); 
contador.selection_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

gerar_decrescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
selection_sort(vet, TAM2);
end = clock();
printf("----------------\n"); 
contador.selection_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

printf("\nINSERTION SORT\n");

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

 start = clock();
 insertion_sort(vet, TAM2);
 end = clock();
 printf("----------------\n"); 
 contador.insertion_sort_time = (double)(end - start) / CLOCKS_PER_SEC;

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

 carrega_vetor_aleatorio(vet, TAM2, 2);
 imprime_vetor(vet, TAM2);

start = clock();
insertion_sort(vet, TAM2);
end = clock();
printf("----------------\n"); 
contador.insertion_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

 gerar_decrescente(vet, TAM2);
 imprime_vetor(vet, TAM2);

 start = clock();
 insertion_sort(vet, TAM2);
 end = clock();
 printf("----------------\n"); 
 contador.insertion_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

 printf("\nMERGE SORT\n");

comparacoes = 0; 
trocas = 0; 

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
merge(vet, 0, TAM2 - 1, TAM2, &comparacoes, &trocas);
 end = clock();
 printf("----------------\n"); 
contador.merge_sort_time = (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 

carrega_vetor_aleatorio(vet, TAM2,2);
imprime_vetor(vet, TAM2);

start = clock();
merge(vet, 0, TAM2 - 1, TAM2, &comparacoes, &trocas);
 end = clock();
 printf("----------------\n"); 
contador.merge_sort_time = (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 

gerar_decrescente(vet, TAM2);
imprime_vetor(vet, TAM2);

 start = clock();
 merge(vet, 0, TAM2 - 1, TAM2, &comparacoes, &trocas);
 end = clock();
 printf("----------------\n"); 
contador.merge_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("--------------------------------------------------------------------\n");

printf("\nQUICK SORT\n");

comparacoes = 0; 
trocas = 0; 

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
quicksort(vet, 0, TAM2 - 1, &comparacoes, &trocas);
end = clock();
printf("----------------\n"); 
 contador.quick_sort_time = (double)(end - start) / CLOCKS_PER_SEC;

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 

 carrega_vetor_aleatorio(vet, TAM2, 2);
 imprime_vetor(vet, TAM2);

 start = clock();
 quicksort(vet, 0, TAM2 - 1, &comparacoes, &trocas);
 end = clock();
 printf("----------------\n"); 
 contador.quick_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

    printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
 printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 

gerar_decrescente(vet, TAM2);
 imprime_vetor(vet, TAM2);

start = clock();
quicksort(vet, 0, TAM2 - 1,&comparacoes, &trocas);
end = clock();
printf("----------------\n"); 
 contador.quick_sort_time += (double)(end - start) / CLOCKS_PER_SEC;

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("--------------------------------------------------------------------\n");

// Imprime os tempos totais para cada método de ordenação
 printf("Tempos totais:\n");
 printf("Bubble Sort: %f segundos\n", contador.bubble_sort_time);
 printf("Selection Sort: %f segundos\n", contador.selection_sort_time);
 printf("Insertion Sort: %f segundos\n", contador.insertion_sort_time);
 printf("Merge Sort: %f segundos\n", contador.merge_sort_time);
 printf("Quick Sort: %f segundos\n", contador.quick_sort_time);

 return 0;
}