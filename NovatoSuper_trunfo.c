#include <stdio.h>

int main (){
    // ----- CARTA 1 -----
    char estado1;            // uma letra de A até H
    char codigo1[4];         // ex: A01
    char nomeCidade1[50];    // nome da cidade (sem espaço)
    int populacao1;          // número inteiro
    float area1;             // número decimal
    float pib1;              // número decimal
    int pontosTuristicos1;   // número inteiro

    // ----- CARTA 2 -----
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    
    // entrada de dados carta1;

    printf("=== Cadastro da Carta 1 ===\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB : ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ----- ENTRADA DE DADOS DA CARTA 2 -----

    printf("=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado2: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta2: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade2: ");
    scanf("%s", &nomeCidade2);

    printf("Digite a populacao2:");
    scanf("%f", &populacao2);

    printf("Digite a area2: ");
    scanf("%f", &area2);

    printf("Digite o PIB2: ");
    scanf("%s", &pib2);

    printf("Digite o numero de pontos turisticos2: ");
    scanf("%d", & pontosTuristicos2 );

    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Resultado Carta 2

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;


}
