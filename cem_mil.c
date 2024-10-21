#include <stdio.h>
#include "funcoes.h"

#define TAM2 50

int main()
{
    int vet[TAM2]; 

    printf("BUBBLE SORT\n");

    gerar_crescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    bubble_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM2,2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    bubble_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    bubble_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("SELECTION SORT\n");

    gerar_crescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    selection_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM2,2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    selection_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    selection_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n");

        printf("\n"); 
 

    printf("INSERTION SORT\n");

    gerar_crescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    insertion_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM2,2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    insertion_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    insertion_sort(vet,TAM2); 
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("MERGE SORT\n");

    gerar_crescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    merge(vet,0,TAM2-1,TAM2);  
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM2,2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    merge(vet,0,TAM2-1,TAM2);  
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    merge(vet,0,TAM2-1,TAM2);  
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 
    printf("\n"); 

    
    printf("QUICK SORT\n");

    gerar_crescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    quicksort(vet,0,TAM2-1);  
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM2,2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    quicksort(vet,0,TAM2-1);  
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM2); 
    imprime_vetor(vet,TAM2); 

    printf("\n"); 


    quicksort(vet,0,TAM2-1);  
    imprime_vetor(vet,TAM2); 


    printf("--------------------------------------------------------------------\n"); 



    return 0;
}
