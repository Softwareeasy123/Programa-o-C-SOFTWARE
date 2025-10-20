#include <stdio.h>

int main(){

    // Carta 1
    char estado1[3];
    char codigo1;
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapital1;

    // Carta 2

    char estado2[3];
    char codigo2;
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapital2;

    // Entrada de dados -- carta1
    printf("Digite o nome da cidade da carta1: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite o codigo da cidade: ");
    scanf(" %s", &codigo1);

    printf("Digite o estado da cidade: ");
    scanf(" %s", &estado1);

    printf("Digite a populacao1: ");
    scanf(" %d", &populacao1);
    
    printf("Digite a area da cidade: ");
    scanf(" %f", &area1);

    printf("Digite o pib (em bilhoes de reais): ");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos1);

    // Calculos da Carta 1

    densidadepopulacional1 = populacao1 / area1;
    pibpercapital1 = (pib1 * 1000000000) / populacao1;  //converter pib para reais
    
    // Entrada de dados -- carta2
    printf("Digite o nome da cidade da carta2");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite o codigo da cidade: ");
    scanf(" %s", &codigo2);

    printf("Digite o estado da cidade: ");
    scanf(" %s", &estado2);

    printf("Digite a populacao1: ");
    scanf(" %d", &populacao2);
    
    printf("Digite a area da cidade: ");
    scanf(" %f", &area2);

    printf("Digite o pib (em bilhoes de reais): ");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf(" %d", &pontosturisticos2);

    // Calculos da Carta 2

    densidadepopulacional2 = populacao2 / area2;
    pibpercapital2 = (pib2 * 1000000000) / populacao2;  //converter pib para reais

    // exibiçao dos Resultados 

    
    printf("\n---Carta1---\n");

    printf("estado: %s\n", estado1);
    printf("codigo: %d\n", codigo1);
    printf("nome da cidade: %s\n", nomecidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km²\n",area1);
    printf("pib: %.2f bilhoes de reais\n",pib1);
    printf("numero de pontos turisticos: %d\n", pontosturisticos1);
    printf("densidade populacional: %.2f hab/km²\n",densidadepopulacional1);
    printf("pib per cap: %.2f reais\n", pibpercapital1);


    printf("\n---Carta2---\n");

    printf("estado: %s\n", estado2);
    printf("codigo: %d\n", codigo2);
    printf("nome da cidade: %s\n", nomecidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km²\n",area2);
    printf("pib: %.2f bilhoes de reais\n",pib2);
    printf("numero de pontos turisticos: %d\n", pontosturisticos2);
    printf("densidade populacional: %.2f hab/km²\n",densidadepopulacional2);
    printf("pib per cap: %.2f reais\n", pibpercapital2);

    return 0;


    
} 
