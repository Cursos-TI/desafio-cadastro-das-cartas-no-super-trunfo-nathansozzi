#include <stdio.h>

int main () {

    // CARTA 1 - DECLARAÇÃO DE VARIÁVEIS
    char estado1;
    char numeroCodigo1[3];      // "01".."04"
    char codigoCarta1[4];       // Ex: "A01"
    char nomeCidade1[60];
    int  populacao1;
    int  numeroPontosTuristicos1;
    float area1;
    float pib1;

    // COLETA DE DADOS DA CARTA 1
    printf("\n\nVamos começar pela Carta 1\n\n");

    // Estado
    printf("Defina o estado da primeira carta \n(Utilize uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado1);

    // Código da Carta (somente número 01 a 04)
    printf("Qual o número do código da carta? (Defina entre 01 e 04) \n");
    scanf(" %2s", numeroCodigo1);

    // Monta o código completo (ex: A01)
    sprintf(codigoCarta1, "%c%s", estado1, numeroCodigo1);

    // Nome da Cidade
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    // População
    printf("População: \n");
    scanf("%d", &populacao1);

    // Área (Km2)
    printf("Área da cidade (km²): \n");
    scanf("%f", &area1);

    // PIB
    printf("Qual o PIB (Produto Interno Bruto)? \n");
    scanf("%f", &pib1);

    // Número de Pontos Turísticos
    printf("Quantidade de pontos turísticos nesta cidade: \n");
    scanf("%d", &numeroPontosTuristicos1);


    // CARTA 2 - DECLARAÇÃO DE VARIÁVEIS
    char estado2;
    char numeroCodigo2[3];
    char codigoCarta2[4];
    char nomeCidade2[60];
    int  populacao2;
    int  numeroPontosTuristicos2;
    float area2;
    float pib2;

    // COLETA DE DADOS DA CARTA 2
    printf("\n\nAgora vamos para o cadastro da Carta 2\n\n");

    // Estado
    printf("Defina o estado da segunda carta \n(Utilize uma letra de 'A' a 'H'): \n");
    scanf(" %c", &estado2);

    // Código da Carta
    printf("Qual o número do código da carta? (Defina entre 01 e 04) \n");
    scanf(" %2s", numeroCodigo2);

    sprintf(codigoCarta2, "%c%s", estado2, numeroCodigo2);

    // Nome da Cidade
    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    // População
    printf("População: \n");
    scanf("%d", &populacao2);

    // Área (Km2)
    printf("Área da cidade (km²): \n");
    scanf("%f", &area2);

    // PIB
    printf("Qual o PIB (Produto Interno Bruto)? \n");
    scanf("%f", &pib2);

    // Número de Pontos Turísticos
    printf("Quantidade de pontos turísticos nesta cidade: \n");
    scanf("%d", &numeroPontosTuristicos2);


    // MOSTRAR DADOS DAS CARTAS CADASTRADAS

    // CARTA 1
    printf("\n\n-- CARTA 1 --\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);

    // CARTA 2
    printf("\n\n-- CARTA 2 --\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);

    return 0;

}
