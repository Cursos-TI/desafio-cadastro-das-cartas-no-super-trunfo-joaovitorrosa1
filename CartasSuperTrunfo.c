#include <stdio.h>

int main(){
    //Variaveis que serão utilizadas pra carta 1:
    int populacao_carta1, pontos_turisticos_carta1;
    float area_carta1, pib_carta1;
    char estado_carta1;
    char codigo_carta1[4];
    char nome_cidade_carta1[50];

    //Variaveis que serão utilizadas pra carta 2:
    int populacao_carta2, pontos_turisticos_carta2;
    float area_carta2, pib_carta2;
    char estado_carta2;
    char codigo_carta2[4];
    char nome_cidade_carta2[50];

    //Inserir fnformações da carta 1:
    printf("Bem vindo ao Super Trunfo, digite as informações da carta 1\n");    

    printf("\nEstado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta1);

    printf("Código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A03, B04)): ");
    scanf("%s", &codigo_carta1);

    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade_carta1);

    printf("População da cidade: ");
    scanf("%d", &populacao_carta1);

    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area_carta1);

    printf("O PIB da cidade: ");
    scanf("%f", &pib_carta1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    //Inserir informações da carta 2:
    printf("\nDigite agora as informações da carta 2");    

    printf("\nEstado (Uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado_carta2);

    printf("Código da carta (A letra do estado seguida de um número de 01 a 04 (ex: A03, B04)): ");
    scanf("%s", &codigo_carta2);

    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade_carta2);

    printf("População da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Área da cidade em quilômetros quadrados: ");
    scanf("%f", &area_carta2);

    printf("O PIB da cidade: ");
    scanf("%f", &pib_carta2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Impressão das informações da carta 1:
    printf("\nInformações da carta 1:\n");

    printf("Estado: %c\n", estado_carta1 );
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", nome_cidade_carta1);
    printf("População da cidade: %d\n", populacao_carta1);
    printf("Área: %.2f km²\n", area_carta1);
    printf("PIB: %.2f bilhões de reais\n", pib_carta1);
    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos_carta1);

    // Impressão das informações da carta 2:
    printf("\nInformações da carta 2:\n");

    printf("Estado: %c\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s\n", nome_cidade_carta2);
    printf("População da cidade: %d\n", populacao_carta2);
    printf("Área: %.2f km²\n", area_carta2);
    printf("PIB: %.2f bilhões de reais\n", pib_carta2);
    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos_carta2);    

    return 0;

}
