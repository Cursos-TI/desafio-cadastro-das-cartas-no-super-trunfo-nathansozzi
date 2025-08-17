#include <stdio.h>

int main() {
    // Carta 1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11f;
    float pib1 = 699.28f; // em bilhões de reais
    int numeroPontosTuristicos1 = 50;

    // Carta 2
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25f;
    float pib2 = 300.50f; // em bilhões de reais
    int numeroPontosTuristicos2 = 30;

    // Atributos derivados
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    float pibPerCapita1 = pib1 * 1e9f / (float) populacao1;
    float pibPerCapita2 = pib2 * 1e9f / (float) populacao2;

    double superPoder1 = (double) populacao1 + area1 + pib1 + numeroPontosTuristicos1 + pibPerCapita1 - densidade1;
    double superPoder2 = (double) populacao2 + area2 + pib2 + numeroPontosTuristicos2 + pibPerCapita2 - densidade2;

    // Menu de atributos
    int escolha1, escolha2;

    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    // Exibir menu dinâmico (sem repetir o primeiro)
    printf("\nEscolha o segundo atributo para comparar:\n");
    for (int i = 1; i <= 7; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
                case 7: printf("7 - Super Poder\n"); break;
            }
        }
    }
    printf("Opção: ");
    scanf("%d", &escolha2);

    // Função auxiliar para pegar valor de atributo
    float valorAtributo1Carta1, valorAtributo1Carta2;
    float valorAtributo2Carta1, valorAtributo2Carta2;

    switch (escolha1) {
        case 1: valorAtributo1Carta1 = (float) populacao1; valorAtributo1Carta2 = (float) populacao2; break;
        case 2: valorAtributo1Carta1 = area1; valorAtributo1Carta2 = area2; break;
        case 3: valorAtributo1Carta1 = pib1; valorAtributo1Carta2 = pib2; break;
        case 4: valorAtributo1Carta1 = (float) numeroPontosTuristicos1; valorAtributo1Carta2 = (float) numeroPontosTuristicos2; break;
        case 5: valorAtributo1Carta1 = densidade1; valorAtributo1Carta2 = densidade2; break;
        case 6: valorAtributo1Carta1 = pibPerCapita1; valorAtributo1Carta2 = pibPerCapita2; break;
        case 7: valorAtributo1Carta1 = (float) superPoder1; valorAtributo1Carta2 = (float) superPoder2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    switch (escolha2) {
        case 1: valorAtributo2Carta1 = (float) populacao1; valorAtributo2Carta2 = (float) populacao2; break;
        case 2: valorAtributo2Carta1 = area1; valorAtributo2Carta2 = area2; break;
        case 3: valorAtributo2Carta1 = pib1; valorAtributo2Carta2 = pib2; break;
        case 4: valorAtributo2Carta1 = (float) numeroPontosTuristicos1; valorAtributo2Carta2 = (float) numeroPontosTuristicos2; break;
        case 5: valorAtributo2Carta1 = densidade1; valorAtributo2Carta2 = densidade2; break;
        case 6: valorAtributo2Carta1 = pibPerCapita1; valorAtributo2Carta2 = pibPerCapita2; break;
        case 7: valorAtributo2Carta1 = (float) superPoder1; valorAtributo2Carta2 = (float) superPoder2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Comparações
    int pontosCarta1 = 0, pontosCarta2 = 0;

    // Regra: densidade vence o menor, os demais vencem o maior
    if (escolha1 == 5) {
        (valorAtributo1Carta1 < valorAtributo1Carta2) ? pontosCarta1++ : pontosCarta2++;
    } else {
        (valorAtributo1Carta1 > valorAtributo1Carta2) ? pontosCarta1++ : pontosCarta2++;
    }

    if (escolha2 == 5) {
        (valorAtributo2Carta1 < valorAtributo2Carta2) ? pontosCarta1++ : pontosCarta2++;
    } else {
        (valorAtributo2Carta1 > valorAtributo2Carta2) ? pontosCarta1++ : pontosCarta2++;
    }

    // Soma final
    float soma1 = valorAtributo1Carta1 + valorAtributo2Carta1;
    float soma2 = valorAtributo1Carta2 + valorAtributo2Carta2;

    printf("\n===== RESULTADO =====\n");
    printf("Carta 1: %s (%c-%s)\n", nomeCidade1, estado1, codigo1);
    printf("Carta 2: %s (%c-%s)\n", nomeCidade2, estado2, codigo2);

    printf("\nAtributo %d -> %s: %.2f vs %.2f\n", escolha1, nomeCidade1, valorAtributo1Carta1, valorAtributo1Carta2);
    printf("Atributo %d -> %s: %.2f vs %.2f\n", escolha2, nomeCidade2, valorAtributo2Carta1, valorAtributo2Carta2);

    printf("\nSoma dos atributos: %.2f (Carta 1) vs %.2f (Carta 2)\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("\n>>> %s venceu!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("\n>>> %s venceu!\n", nomeCidade2);
    } else {
        printf("\n>>> Empate!\n");
    }

    return 0;
}