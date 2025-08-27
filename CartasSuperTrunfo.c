#include <stdio.h>

int main() {
    char Carta[20] = "A01";
    char Estado = 'A';
    char Cidade[20] = "Itaporanga";
    int Populacao = 25000; // Corrigido o uso de caracteres especiais no nome da variável
    float Area = 1521.11;  // Corrigido o uso de caracteres especiais no nome da variável
    double PIB = 12345.67;
    int PontoTuristico = 3; // Ajustado para seguir o padrão de nomenclatura

    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f reais\n", PIB);
    printf("Pontos turísticos: %d\n", PontoTuristico);

    return 0;
}
