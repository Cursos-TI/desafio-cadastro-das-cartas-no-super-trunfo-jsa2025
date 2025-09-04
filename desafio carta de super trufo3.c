#include <stdio.h>

int main() {
    char codigo_carta[20] = "A01";
    char Estado = 'A';
    char nome_cidade[20] = "Itaporanga";
    int populacao = 25000; 
    float area = 1000;  
    double pib = 25000;
    int numero_pontos_turisticos = 3;
    float  densidade;
    float pib_per_capita;
    float  superpoder;


   
    char codigo_carta2[20] = "A02";
    char estado2 = 'B';
    char nome_cidade2[20] = "Boa Ventura";
    int populacao2 = 10000; 
    float area2 = 500;  
    double pib2 = 2500;
    int numero_pontos_turisticos2 = 2;
    float  DensidadePopulacional2;
    float  densidade2;
    float pib_per_capita2;
    float  superpoder2;

    printf("---[Cadastrando | Carta 1]\n");
    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c",&Estado);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta);
    printf("Nome da Cidade:\n");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade, sizeof(nome_cidade), stdin); //Cadastra o nome da cidade
    nome_cidade[strcspn(nome_cidade, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes:\n");
    scanf("%lu", &populacao);
    printf("A area da cidade em Quilometros Quadrados:\n");
    scanf("%f",&area);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f",&pib);
    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &numero_pontos_turisticos);
    densidade = populacao/area;
    pib_per_capita = pib/populacao;
    superpoder = (float)populacao+area+pib+(float)numero_pontos_turisticos+pib_per_capita+(1.0/densidade);


    // Carta 2
    printf("---[Cadastrando | Carta 2]\n");
    printf("Digite o Estado (Letra 'A' a 'H'):\n");
    scanf(" %c",&estado2);
    printf("Codigo da Carta (ex: A01, B03):\n");
    scanf(" %3s", &codigo_carta2);
    printf("Nome da Cidade:\n");
    getchar(); //Limpa o \n do buffer antes de fgets
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin); //Cadastra o nome da cidade
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; // remove \n do final
    printf("O numero de Habitantes:\n");
    scanf("%lu", &populacao2);
    printf("A area da cidade em Quilometros Quadrados:\n");
    scanf("%f",&area2);
    printf("O Produto Interno Bruto da cidade:\n");
    scanf("%f",&pib2);
    printf("A quantidade de Pontos Turisticos na cidade:\n");
    scanf("%d", &numero_pontos_turisticos2);
    densidade2 = populacao2/area2;
    pib_per_capita2 = pib2/populacao2;
    superpoder2 = (float)populacao2+area2+pib2+(float)numero_pontos_turisticos2+pib_per_capita2+(1.0/densidade2);
            
    printf("Carta: %s\n", codigo_carta);
    printf("Estado: %c\n", Estado);
    printf("Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Milhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", numero_pontos_turisticos);
    
    printf("Carta: %s\n", codigo_carta2);
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Milhões de reais\n",pib2);
    printf("Pontos turísticos: %d\n", numero_pontos_turisticos2);
    
    return 0;
}