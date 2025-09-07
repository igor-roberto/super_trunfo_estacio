#include <stdio.h>
#include <stdlib.h> // Para a função fflush

int main()
{
    char estado[3], codcarta[3], nome_cidade[50];
    int populacao, pt_turisticos;
    float area, pib;

    char estado1[3], codcarta1[3], nome_cidade1[50];
    int populacao1, pt_turisticos1;
    float area1, pib1;

    printf("Escolha uma letra de A a H: ");
    scanf("%s", estado);
    fflush(stdin);

    printf("Escolha um numero de 01 a 04: ");
    scanf("%s", codcarta);
    fflush(stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade,50, stdin);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao);
    fflush(stdin);

    printf("Digite a area em km²: ");
    scanf("%f", &area);
    fflush(stdin);

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    fflush(stdin);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pt_turisticos);
    fflush(stdin);

    //Carta 2 abaixo:
    printf("\n");
    printf("Escolha uma letra de A a H: ");
    scanf("%s", estado1);
    fflush(stdin);

    printf("Escolha um numero de 01 a 04: ");
    scanf("%s", codcarta1);
    fflush(stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1,50, stdin);

    printf("Digite o numero da populacao: ");
    scanf("%d", &populacao1);
    fflush(stdin);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    fflush(stdin);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    fflush(stdin);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pt_turisticos1);
    fflush(stdin);


    //Saída
    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo da Carta: %s%s\n", estado, codcarta);
    printf("Nome da cidade: %s", nome_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pt_turisticos);
    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s%s\n", estado1, codcarta1);
    printf("Nome da cidade: %s", nome_cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pt_turisticos1);

    return 0;
}