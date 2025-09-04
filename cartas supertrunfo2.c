#include <stdio.h>

int main() {
    char Carta[20] = "A01";
    char Estado = 'A';
    char Cidade[20] = "Itaporanga";
    int Populacao = 25000; 
    float Area = 1000;  
    double PIB = 25000;
    int PontoTuristico = 3;
    float  DensidadePopulacional;
    float PIBperCapita;

   
    char Carta2[20] = "A02";
    char Estado2 = 'B';
    char Cidade2[20] = "Boa Ventura";
    int Populacao2 = 10000; 
    float Area2 = 500;  
    double PIB2 = 2500;
    int PontoTuristico2 = 2;
    float  DensidadePopulacional2;
    float PIBperCapita2;
  
         
    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f Milhões de reais\n", PIB);
    printf("Pontos turísticos: %d\n", PontoTuristico);
    printf("Carta: %s\n", Carta2);
    printf("Estado: %c\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Area);
    printf("PIB2: %.2f Milhões de reais\n", PIB2);
    printf("Pontos turísticos: %d\n", PontoTuristico2);
    
    return 0;
}