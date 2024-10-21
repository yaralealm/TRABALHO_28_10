#include <stdio.h> 
#include "funcoes.h"
#define tam1 50
#define tam2 50
#define tam3 50



int main()
{

    //BUBBLE SORT 
    // MIL 
    int vet[tam1]; 

    printf("VETOR EM ORDEM CRESCENTE\n"); 


   gerar_crescente(vet,tam1); 

   imprime_vetor(vet,tam1); 

    printf("\n"); 

   bubble_sort(vet,tam1); 

   imprime_vetor(vet,tam1);  

     printf("--------------------------------------------------------------------\n"); 

    printf("VETOR EM ORDEM DECRESCENTE\n"); 


    gerar_decrescente(vet,tam1); 

    imprime_vetor(vet,tam1); 

    printf("\n"); 

    bubble_sort(vet,tam1); 

    imprime_vetor(vet,tam1); 

     printf("--------------------------------------------------------------------\n"); 

    printf("VETOR EM ORDEM ALEATORIA\n"); 


     carrega_vetor_aleatorio(vet,tam1,2); 

        imprime_vetor(vet,tam1); 

        printf("\n"); 

     bubble_sort(vet,tam1); 

     imprime_vetor(vet,tam1); 

    printf("--------------------------------------------------------------------\n"); 


   // DEZ MIL


   //UM MILHAO
  
    return 0;
}
