#include <stdio.h>
#include "funcoes.h"

#define TAM3 50

int main()
{
    int vet[TAM3]; 

    printf("BUBBLE SORT\n");

    gerar_crescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    bubble_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM3,2); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    bubble_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    bubble_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("SELECTION SORT\n");

    gerar_crescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    selection_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM3,2); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    selection_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    selection_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n");

        printf("\n"); 
 

    printf("INSERTION SORT\n");

    gerar_crescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    insertion_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM3,2); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    insertion_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    insertion_sort(vet,TAM3); 
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 

    printf("\n"); 

    printf("MERGE SORT\n");

    gerar_crescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    merge(vet,0,TAM3-1,TAM3);  
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM3,2); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    merge(vet,0,TAM3-1,TAM3);  
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    merge(vet,0,TAM3-1,TAM3);  
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 
    printf("\n"); 

    
    printf("QUICK SORT\n");

    gerar_crescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    quicksort(vet,0,TAM3-1);  
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    carrega_vetor_aleatorio(vet,TAM3,2); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    quicksort(vet,0,TAM3-1);  
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 


    gerar_decrescente(vet,TAM3); 
    imprime_vetor(vet,TAM3); 

    printf("\n"); 


    quicksort(vet,0,TAM3-1);  
    imprime_vetor(vet,TAM3); 


    printf("--------------------------------------------------------------------\n"); 



    return 0;
}
