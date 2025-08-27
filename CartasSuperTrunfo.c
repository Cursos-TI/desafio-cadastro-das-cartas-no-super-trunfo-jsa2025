#include <stdio.h>
 
int main() {
    char Carta[20] = "A01";
    char Estado = 'A';
    char Cidade[20] = "Itaporanga";
    int  População = 25000;
    float Àrea  =  1521.11;
    double PIB = 12345.67;
    int pontoturistico = 3;
    
    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Àrea: %.2f km²\n", Àrea);
    printf("PIB: %.2f reais\n",PIB);
    printf("ponto turistico: %d\n", pontoturistico);
    
    
 
 
    return 0;
    
}
