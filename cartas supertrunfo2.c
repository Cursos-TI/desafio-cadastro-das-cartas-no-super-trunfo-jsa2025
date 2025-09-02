#include <stdio.h>

int main() {
    char Carta[20] = "A02";
    char Estado = 'B';
    char Cidade[20] = "Boa Ventura";
    int Populacao = 10000; 
    float Area = 500;  
    double PIB = 2500;
    int PontoTuristico = 2;
    float  DensidadePopulacional;
    float PIBperCapita;
 
    int a = 100000;
    int b = 500;
    int divisao = a / b;

    int c = 2500;
    int d = 1000;
    int divisao2 = c / d;
    
    
   
         
    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f Milhões de reais\n", PIB);
    printf("Pontos turísticos: %d\n", PontoTuristico);
    printf("Densidade Populacional: %d  km²\n", divisao);
    printf("PIBperCapita: %d  Milhões de reais\n", divisao2);
    
    
    return 0;
}