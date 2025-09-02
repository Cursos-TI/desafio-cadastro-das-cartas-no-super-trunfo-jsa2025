#include <stdio.h>

int main() {
    char Carta[20] = "A01";
    char Estado = 'A';
    char Cidade[20] = "Itaporanga";
    int Populacao = 25000; 
    float Area = 5000;  
    double PIB = 250000;
    int PontoTuristico = 3;
    float  DensidadePopulacional;
    float PIBperCapita;
 
    int a = 250000;
    int b = 5000;
    int divisao = a / b;

    int c = 250000;
    int d = 25000;
    int divisao2 = c / d;
    
    
   
         
    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f Milhões de reais\n", PIB);
    printf("Pontos turísticos: %d\n", PontoTuristico);
    printf("Densidade Populacional: %d  km²\n", divisao);
    printf("PIBperCapita: %d Milhões de reais\n", divisao2);
    
    
    return 0;
}