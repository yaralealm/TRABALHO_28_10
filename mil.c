#include <stdio.h>
#include "funcoes.h"

#define TAM 50

int main()
{
    int vet[TAM]; 

    printf("BUBBLE SORT\n");

    gerar_crescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    bubble_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM,2); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    bubble_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    bubble_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("SELECTION SORT\n");

    gerar_crescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    selection_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM,2); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    selection_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    selection_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n");

        printf("\n"); 
 

    printf("INSERTION SORT\n");

    gerar_crescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    insertion_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM,2); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    insertion_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    insertion_sort(vet,TAM); 
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("MERGE SORT\n");

    gerar_crescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    merge(vet,0,TAM-1,TAM);  
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM,2); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    merge(vet,0,TAM-1,TAM);  
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    merge(vet,0,TAM-1,TAM);  
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 
    printf("\n"); 

    
    printf("QUICK SORT\n");

    gerar_crescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    quicksort(vet,0,TAM-1);  
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM,2); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    quicksort(vet,0,TAM-1);  
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM); 
    imprime_vetor(vet,TAM); 

    printf("\n"); 


    quicksort(vet,0,TAM-1);  
    imprime_vetor(vet,TAM); 


    printf("--------------------------------------------------------------------\n"); 



    return 0;
}
