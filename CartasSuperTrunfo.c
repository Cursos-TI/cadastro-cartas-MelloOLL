#include <stdio.h>

int main() {
  char estado[2], codigo[4], cidade[50],estado1[2], codigo1[4], cidade1[50];
    float populacao, area, pib,populacao1, area1, pib1;
    int pontos,pontos1;

    printf("Uma letra de A a H representando um dos oito estados: ");
    scanf(" %c", &estado[0]);

    printf("A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo);

    printf("O nome da cidade: ");
    scanf(" %[^\n]", cidade);

    printf("O numero de habitantes da cidade: ");
    scanf("%f", &populacao);

    printf("A area da cidade em quilometros quadrados: ");
    scanf("%f", &area);

    printf("O produto interno bruto da cidade: ");
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos);

    


    printf("Uma letra de A a H representando um dos oito estados: ");
    scanf(" %c", &estado1[0]);

    printf("A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("O nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("O numero de habitantes da cidade: ");
    scanf("%f", &populacao1);

    printf("A area da cidade em quilometros quadrados: ");
    scanf("%f", &area1);

    printf("O produto interno bruto da cidade: ");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos1);

    printf("Carta 01: \n");
    printf("Estado: %c\n", estado[0]);
    printf("Codigo: %s \n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Populacao: %f\n", populacao);
    printf("Area: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);



     printf("Carta 02: \n");
    printf("Estado: %c\n", estado1[0]);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %f\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    return 0;


} 
