//CEM MIL!!

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

double cont_bubble = 0; 
gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

clock_t start = clock();
bubble_sort(vet, TAM2);
clock_t end = clock();
contador.bubble_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
cont_bubble += contador.bubble_sort_time; 

printf("TEMPO: %lf\n", contador.bubble_sort_time); 
printf("FIM BUBBLE SORT - VETOR CRESCENTE"); 

printf("----------------\n"); 
system("pause"); 

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

contador.bubble_sort_time = 0; 
carrega_vetor_aleatorio(vet, TAM2, 2);
imprime_vetor(vet, TAM2);

start = clock();
bubble_sort(vet, TAM2);
end = clock();
contador.bubble_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
cont_bubble += contador.bubble_sort_time; 

printf("TEMPO: %lf\n", contador.bubble_sort_time); 
printf("FIM BUBBLE SORT - VETOR ALEAT"); 

printf("----------------\n"); 
system("pause"); 
printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

 contador.bubble_sort_time = 0; 

gerar_decrescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
bubble_sort(vet, TAM2);
end = clock();
contador.bubble_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
cont_bubble += contador.bubble_sort_time; 

printf("TEMPO: %lf\n", contador.bubble_sort_time); 
printf("FIM BUBBLE SORT - VETOR DECRESC."); 


printf("----------------\n"); 
system("pause"); 
printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

printf("\nSELECTION SORT\n");
double cont_selec = 0; 

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
selection_sort(vet, TAM2);
end = clock();
contador.selection_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
cont_selec += contador.selection_sort_time;

printf("TEMPO: %lf\n", contador.selection_sort_time); 
printf("FIM SELECTION SORT - VETOR CRESCENTE"); 

printf("----------------\n"); 
system("pause"); 
printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

contador.selection_sort_time = 0; 

carrega_vetor_aleatorio(vet, TAM2, 2);
imprime_vetor(vet, TAM2);

start = clock();
selection_sort(vet, TAM2);
end = clock();
contador.selection_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
cont_selec += contador.selection_sort_time; 

printf("TEMPO: %lf\n", contador.selection_sort_time); 
printf("FIM SELECTION SORT - VETOR ALEAT."); 



printf("----------------\n"); 
system("pause");
printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

contador.selection_sort_time = 0; 

gerar_decrescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
selection_sort(vet, TAM2);
end = clock();
contador.selection_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
cont_selec += contador.selection_sort_time; 


printf("TEMPO: %lf\n", contador.selection_sort_time); 
printf("FIM SELECTION SORT - VETOR DECRESC."); 


printf("----------------\n"); 


system("pause"); 
printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

printf("\nINSERTION SORT\n");

double cont_ins = 0; 

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

 start = clock();
 insertion_sort(vet, TAM2);
 end = clock();
 contador.insertion_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
 cont_ins += contador.insertion_sort_time;

 printf("TEMPO: %lf\n", contador.insertion_sort_time);
 printf("FIM INSERTION SORT - VETOR CRESCENTE"); 

  printf("----------------\n"); 

 system("pause"); 
 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

 contador.insertion_sort_time = 0; 

 carrega_vetor_aleatorio(vet, TAM2, 2);
 imprime_vetor(vet, TAM2);

start = clock();
insertion_sort(vet, TAM2);
end = clock();
contador.insertion_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
cont_ins += contador.selection_sort_time; 

 printf("TEMPO: %lf\n", contador.insertion_sort_time);
  printf("FIM INSERTION SORT - VETOR ALEAT."); 


printf("----------------\n"); 
system("pause"); 
printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("--------------------------------------------------------------------\n");

contador.insertion_sort_time = 0; 

 gerar_decrescente(vet, TAM2);
 imprime_vetor(vet, TAM2);

 start = clock();
 insertion_sort(vet, TAM2);
 end = clock();
 contador.insertion_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
 cont_ins += contador.insertion_sort_time; 

printf("TEMPO: %lf\n", contador.insertion_sort_time);
 printf("FIM INSERTION SORT - VETOR DECRESC."); 



 printf("----------------\n"); 
system("pause"); 
 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

 printf("--------------------------------------------------------------------\n");

 printf("\nMERGE SORT\n");

 double cont_merge = 0; 

comparacoes = 0; 
trocas = 0; 

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
merge(vet, 0, TAM2 - 1, TAM2, &comparacoes, &trocas);
 end = clock();
contador.merge_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
cont_merge += contador.merge_sort_time; 


 printf("----------------\n"); 

printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("TEMPO: %lf\n", contador.merge_sort_time); 
printf("FIM MERGE SORT - VETOR CRESCENTE"); 
system("pause"); 
printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 
contador.merge_sort_time = 0; 

carrega_vetor_aleatorio(vet, TAM2,2);
imprime_vetor(vet, TAM2);

start = clock();
merge(vet, 0, TAM2 - 1, TAM2, &comparacoes, &trocas);
 end = clock();
contador.merge_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
cont_merge += contador.merge_sort_time; 


 printf("----------------\n"); 


printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("TEMPO: %lf\n", contador.merge_sort_time); 
printf("FIM MERGE SORT - VETOR ALEAT."); 
system("pause"); 
printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 
contador.merge_sort_time = 0; 

gerar_decrescente(vet, TAM2);
imprime_vetor(vet, TAM2);

 start = clock();
 merge(vet, 0, TAM2 - 1, TAM2, &comparacoes, &trocas);
 end = clock();
contador.merge_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
cont_merge += contador.merge_sort_time; 



 printf("----------------\n"); 


printf("VETOR ORDENADO\n"); 
imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("TEMPO: %lf\n", contador.merge_sort_time); 
printf("FIM MERGE SORT - VETOR DECRESC."); 
system("pause"); 
printf("--------------------------------------------------------------------\n");

printf("\nQUICK SORT\n");

double cont_quick = 0; 
comparacoes = 0; 
trocas = 0; 

gerar_crescente(vet, TAM2);
imprime_vetor(vet, TAM2);

start = clock();
quicksort(vet, 0, TAM2 - 1, &comparacoes, &trocas);
end = clock();
printf("----------------\n"); 
 contador.quick_sort_time = (double)(end - start) / CLOCKS_PER_SEC;
 cont_quick += contador.quick_sort_time; 

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("TEMPO: %lf\n", contador.quick_sort_time); 
printf("FIM QUICK SORT - VETOR CRESCENTE"); 
system("pause"); 
printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 
contador.quick_sort_time = 0; 

 carrega_vetor_aleatorio(vet, TAM2, 2);
 imprime_vetor(vet, TAM2);

 start = clock();
 quicksort(vet, 0, TAM2 - 1, &comparacoes, &trocas);
 end = clock();
 printf("----------------\n"); 
 contador.quick_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
 cont_quick += contador.quick_sort_time; 

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

    printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
    printf("TEMPO: %lf\n", contador.quick_sort_time); 
    printf("FIM QUICK SORT - VETOR ALEAT."); 
    system("pause"); 

 printf("--------------------------------------------------------------------\n");

comparacoes = 0; 
trocas = 0; 
contador.quick_sort_time = 0; 

gerar_decrescente(vet, TAM2);
 imprime_vetor(vet, TAM2);

start = clock();
quicksort(vet, 0, TAM2 - 1,&comparacoes, &trocas);
end = clock();
printf("----------------\n"); 
 contador.quick_sort_time += (double)(end - start) / CLOCKS_PER_SEC;
 cont_quick += contador.quick_sort_time; 

 printf("VETOR ORDENADO\n"); 
 imprime_vetor(vet, TAM2);

printf("COMPARACOES: %d\nTROCAS: %d\n", comparacoes, trocas);
printf("TEMPO: %lf\n", contador.quick_sort_time); 
printf("FIM QUICK SORT - VETOR DECRESC."); 
system("pause"); 

printf("--------------------------------------------------------------------\n");

// Imprime os tempos totais para cada método de ordenação
 printf("Tempos totais:\n");
 printf("Bubble Sort: %lf segundos\n", cont_bubble);
 printf("Selection Sort: %lf segundos\n", cont_selec);
 printf("Insertion Sort: %lf segundos\n", cont_ins);
 printf("Merge Sort: %lf segundos\n", cont_merge);
 printf("Quick Sort: %lf segundos\n", cont_quick);

 return 0;
}