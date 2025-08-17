#include <stdio.h>

int main () {
    
    //CARTA 1 - INÍCIO
    //DECLARAÇÃO DE VARIÁVEIS
    //char estado1;
    //char numeroCodigo1[3];      // "01".."04"
    //char codigoCarta1[4];       // Ex: "A01"
    //char nomeCidade1[60];
    //long int  populacao1;
    //int  numeroPontosTuristicos1;
    //float area1;
    //float pib1;

    // COLETA DE DADOS
    //printf("\n\nVamos começar pela Carta 1\n\n");
    // Estado
    //printf("Defina o estado da primeira carta \n(Utilize uma letra de 'A' a 'H'): \n");
    //scanf(" %c", &estado1);
    // Código da Carta (somente número 01 a 04)
    //printf("Qual o número do código da carta? (Defina entre 01 e 04) \n");
    //scanf(" %2s", numeroCodigo1);
    // Monta o código completo (ex: A01)
    //sprintf(codigoCarta1, "%c%s", estado1, numeroCodigo1);
    // Nome da Cidade
    //printf("Nome da Cidade: \n");
    //scanf(" %[^\n]", nomeCidade1);
    // População
    //printf("População: \n");
    //scanf("%ld", &populacao1);
    // Área (Km2)
    //printf("Área da cidade (km²): \n");
    //scanf("%f", &area1);
    // PIB
    //printf("Qual o PIB (Produto Interno Bruto)? \n");
    //scanf("%f", &pib1);
    // Número de Pontos Turísticos
    //printf("Quantidade de pontos turísticos nesta cidade: \n");
    //scanf("%d", &numeroPontosTuristicos1);
    //Densidade Populacional
    //float densidadePopulacional1 = (float) populacao1 / area1;
    //PIB per Capita
    //float pibPerCapita1 = pib1 * 1e9f / (float) populacao1;
    //Super Poder
    //double superPoder1 = (double) populacao1 + (double) area1 + (double) pib1 +  (double) numeroPontosTuristicos1 + (double) pibPerCapita1 + ((double) densidadePopulacional1 * -1);
    //CARTA 1 - FIM

    // CARTA 2 - INÍCIO
    //DECLARAÇÃO DE VARIÁVEIS
    //char estado2;
    //char numeroCodigo2[3];
    //char codigoCarta2[4];
    //char nomeCidade2[60];
    //long int  populacao2;
    //int  numeroPontosTuristicos2;
    //float area2;
    //float pib2;

    // COLETA DE DADOS DA CARTA 2
    //printf("\n\nAgora vamos para o cadastro da Carta 2\n\n");
    // Estado
    //printf("Defina o estado da segunda carta \n(Utilize uma letra de 'A' a 'H'): \n");
    //scanf(" %c", &estado2);
    // Código da Carta
    //printf("Qual o número do código da carta? (Defina entre 01 e 04) \n");
    //scanf(" %2s", numeroCodigo2);
    //sprintf(codigoCarta2, "%c%s", estado2, numeroCodigo2);
    // Nome da Cidade
    //printf("Nome da Cidade: \n");
    //scanf(" %[^\n]", nomeCidade2);
    // População
    //printf("População: \n");
    //scanf("%ld", &populacao2);
    // Área (Km2)
    //printf("Área da cidade (km²): \n");
    //scanf("%f", &area2);
    // PIB
    //printf("Qual o PIB (Produto Interno Bruto)? \n");
    //scanf("%f", &pib2);
    // Número de Pontos Turísticos
    //printf("Quantidade de pontos turísticos nesta cidade: \n");
    //scanf("%d", &numeroPontosTuristicos2);
    //Densidade Populacional
    //float densidadePopulacional2 = (float) populacao2 / area2;
    //PIB per Capita
    //float pibPerCapita2 = pib2 * 1e9f / (float) populacao2;
    //Super Poder
    //double superPoder2 = (double) populacao2 + (double) area2 + (double) pib2 +  (double) numeroPontosTuristicos2 + (double) pibPerCapita2 + ((double) densidadePopulacional2 * -1);
    //CARTA 2 - FIM

    //DECLARAÇÃO DE VALORES DAS CARTAS
     // CARTA 1 - São Paulo
    char estado1 = 'A';
    char codigoCarta1[4] = "A01";
    char nomeCidade1[60] = "São Paulo";
    long int populacao1 = 12325000;
    int numeroPontosTuristicos1 = 50;
    float area1 = 1521.11f;
    float pib1 = 699.28f;  // bilhões

    float densidadePopulacional1 = (float) populacao1 / area1;
    float pibPerCapita1 = pib1 * 1e9f / (float) populacao1;
    double superPoder1 = (double) populacao1 + area1 + pib1 +
                         numeroPontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;

    // CARTA 2 - Rio de Janeiro
    char estado2 = 'B';
    char codigoCarta2[4] = "B02";
    char nomeCidade2[60] = "Rio de Janeiro";
    long int populacao2 = 6748000;
    int numeroPontosTuristicos2 = 30;
    float area2 = 1200.25f;
    float pib2 = 300.50f;  // bilhões

    float densidadePopulacional2 = (float) populacao2 / area2;
    float pibPerCapita2 = pib2 * 1e9f / (float) populacao2;
    double superPoder2 = (double) populacao2 + area2 + pib2 +
                         numeroPontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;


    //VALIDAÇÃO DE DADOS
    // Validar se foi inserido nos valores de Área um valor zerado
    if (area1 <= 0.0f || area2 <= 0.0f) {
        printf("Erro: área deve ser > 0 para calcular densidade.\n");
        return 1;
    }

    
    // MOSTRAR DADOS DAS CARTAS CADASTRADAS
    // CARTA 1
    printf("\n\n-- CARTA 1 --\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f por habitante\n", pibPerCapita1);
    printf("Super poder: %.2f \n", superPoder1);

    // CARTA 2
    printf("\n\n-- CARTA 2 --\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f por habitante\n", pibPerCapita2);
    printf("Super poder: %.2f \n", superPoder2);

    //SWITCH
    int opcao;
    printf("\n\n-- PREPARE-SE PARA A BATALHA! --\n");
    printf("Escolha com qual atributo você vai competir!\n\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n\n");

    printf("Escolha com cautela...\n\n");

    printf("Selecione qual será o seu atributo: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            //POPULAÇÃO
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: População\n");
            printf("Carta 1 - %s (%c): %ld habitantes\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %ld habitantes\n", nomeCidade2, estado2, populacao2);

            if (populacao1==populacao2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (populacao1>populacao2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 2:
            //ÁREA
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Área\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);

            if (area1==area2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (area1>area2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 3:
            //PIB
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Produto Interno bruto (PIB)\n");
            printf("Carta 1 - %s (%c): R$ %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): R$ %.2f bilhões\n", nomeCidade2, estado2, pib2);

            if (pib1==pib2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (pib1>pib2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 4:
            //NÚMERO DE PONTOS TURÍSTICOS
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("Carta 1 - %s (%c): %d pontos turísticos\n", nomeCidade1, estado1, numeroPontosTuristicos1);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nomeCidade2, estado2, numeroPontosTuristicos2);

            if (numeroPontosTuristicos1==numeroPontosTuristicos2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (numeroPontosTuristicos1>numeroPontosTuristicos2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        case 5:
            //DENSIDADE DEMOGRÁFICA
            //Impressão dos Valores das Comparações
            printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
            printf("Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

            if (densidadePopulacional1==densidadePopulacional2){
                printf("Empate! Ambas as cidades têm valores iguais de força neste atributo");
            } else {
                if (densidadePopulacional1<densidadePopulacional2) {
                    printf("Resultado: Carta 1 (%s) venceu!", nomeCidade1);
                } else {
                    printf("Resultado: Carta 2 (%s) venceu!", nomeCidade2);
                }
            }
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    //COMPARAÇÃO DAS CARTAS
    //Variáveis de Comparação
    // int comparacaoPOP = populacao1 > populacao2;
    // int comparacaoAREA = area1 > area2;
    // int comparacaoPIB = pib1 > pib2;
    // int comparacaoNPT = numeroPontosTuristicos1 > numeroPontosTuristicos2;
    // int comparacaoDP = densidadePopulacional1 < densidadePopulacional2;
    // int comparacaoPIBpC = pibPerCapita1 > pibPerCapita2;
    // int comparacaoSP = superPoder1 > superPoder2;

    //Impressão dos Valores das Comparações
    //printf("\n\n-- COMPARAÇÃO DAS CARTAS --\n");
    //printf("População: %d\n", comparacaoPOP);
    //printf("Área: %d\n", comparacaoAREA);
    //printf("PIB: %d\n", comparacaoPIB);
    //printf("Número de Pontos Turísticos: %d\n", comparacaoNPT);
    //printf("Densidade Populacional: %d\n", comparacaoDP);
    //printf("PIB per Capita: %d\n", comparacaoPIBpC);
    //printf("Super Poder: %d\n", comparacaoSP);
    //printf("\nLEGENDA:\n");
    //printf("Se o resultado da comparação for 1, a carta 1 ganhou.\n");
    //printf("Se o resultado for 0, a carta 2 venceu!\n");

    

    //ESPAÇAMENTO DE FORMATAÇÃO
    printf("\n\n");


    return 0;

}