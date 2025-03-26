#include <stdio.h>
#include <string.h>

int main() {
    //Declaração das variáveis para armazenar os atributos das cartas
    char estado1, estado2;
    char codigoc1[4], codigoc2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; 
    int turismo1, turismo2;
    float pib1, pib2, area1, area2;
    float densidade1, densidade2, pibcapita1, pibcapita2;
    float superpoder1, superpoder2;

    // Menssagem de introdução do jogo  
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Regras para Determinar a carta vencedora:\n");
    printf(" - Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.\n");
    printf(" - Para Densidade Populacional, a carta com o menor valor vence.\n");
    printf("Vamos começar!\n");
    printf("Para começar o jogo, defina as características das cartas!\n");

    //Entrada de dados para a primeira carta
    printf("\nCriando a Carta 1 \n");

    printf("Digite uma letra de 'A' a 'Z' para representar o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o código da cidade: ");
    scanf("%s", codigoc1);

    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer
    fgets(cidade1, sizeof(cidade1), stdin);  // Usando fgets para permitir caracteres especiais
    cidade1[strcspn(cidade1, "\n")] = 0;  // Remove o '\n' que fgets pode adicionar

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos(1-100): ");
    scanf("%d", &turismo1);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibcapita1 = (pib1 * 1000000000) / populacao1; // Converter o PIB da cidade em bilhões
    superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibcapita1 + densidade1; // Somatoria dos atributos


    printf("\nTodos os dados foram definidas para a Carta 1. Agora defina os dados para a Carta 2.\n");

    //Entrada de dados para a segunda carta
    printf("\nCriando a Carta 2 \n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigoc2);

    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer
    fgets(cidade2, sizeof(cidade2), stdin);  // Usando fgets para permitir caracteres especiais
    cidade2[strcspn(cidade2, "\n")] = 0;  // Remove o '\n' que fgets pode adicionar

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pibcapita2 = (pib2 * 1000000000) / populacao2; // Converter o PIB da cidade em bilhões
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibcapita2 + densidade2; // Somatoria dos atributos

    //Saída de dados da carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigoc1, cidade1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao1, area1, pib1, turismo1, densidade1, pibcapita1, superpoder1);

    //Saída de dados da carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado2, codigoc2, cidade2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao2, area2, pib2, turismo2, densidade2, pibcapita2, superpoder2);

    // Comparação de cartas (Atributo: População)
    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s):  %lu\n", cidade1, codigoc1, populacao1);
    printf("Carta 2 - %s (%s):  %lu\n", cidade2, codigoc2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de cartas (Atributo: Área)
    printf("\nComparação de cartas(Atributo: Área):\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, codigoc1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, codigoc2, area2);

    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de cartas (Atributo: PIB)
    printf("\nComparação de cartas(Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %.2f bilhões\n", cidade1, codigoc1, pib1);
    printf("Carta 2 - %s (%s): %.2f bilhões\n", cidade2, codigoc2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de cartas (Atributo: Pontos turísticos)
    printf("\nComparação de cartas(Atributo: Pontos turísticos):\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigoc1, turismo1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigoc2, turismo2);

    if (turismo1 > turismo2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de cartas (Atributo: Densidade populacional)
    printf("\nComparação de cartas(Atributo: Densidade populacional):\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, codigoc1, densidade1);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, codigoc2, densidade2);

    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de cartas (Atributo: PIB per capita)
    printf("\nComparação de cartas(Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", cidade1, codigoc1, pibcapita1);
    printf("Carta 2 - %s (%s): %.2f reais\n", cidade2, codigoc2, pibcapita2);

    if (pibcapita1 > pibcapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    // Comparação de cartas (Atributo: Super Poder)
    printf("\nComparação de cartas(Atributo: Super Poder):\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, codigoc1, superpoder1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, codigoc2, superpoder2);

    if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}