#include <stdio.h>

int main() {
    char Carta[20] = "A02";
    char Estado = 'A';
    char Cidade[20] = "Boa Ventura";
    int Populacao = 10000; 
    float Area = 1021.11;  
    double PIB = 9345.67;
    int PontoTuristico = 2; 

    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f reais\n", PIB);
    printf("Pontos turísticos: %d\n", PontoTuristico);

    return 0;
}