#include <stdio.h>
 
int main() {
    char Carta[20] = "A02";
    char Estado = 'B';
    char Cidade[20] = "Boa Ventura-PB";
    int  População = 15000;
    float Àrea  =  1000;
    double PIB = 10000;
    int pontoturistico = 1;
    
    printf("Carta: %s\n", Carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", População);
    printf("Àrea: %.2f km²\n", Àrea);
    printf("PIB: %.2f reais\n",PIB);
    printf("ponto turistico: %d\n", pontoturistico);
    
    
 
 
    return 0;
    
}
