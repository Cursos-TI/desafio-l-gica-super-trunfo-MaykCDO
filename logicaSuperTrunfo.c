#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    //Declaração das variáveis para armazenar os atributos das cartas
    char letra1, letra2;
    char codigop1[4], codigop2[4];
    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2; 
    int turismo1, turismo2;
    float pib1, pib2, area1, area2;
    float densidade1, densidade2, pibcapita1, pibcapita2;
    float superpoder1, superpoder2;
    int escolhaAtributo;

    // Menssagem de introdução do jogo  
    printf("Bem-vindo ao jogo Super Trunfo!\n");
    printf("Regras para Determinar a carta vencedora:\n");
    printf(" - Para todos os atributos, exceto Densidade Populacional, a carta com o maior valor vence.\n");
    printf(" - Para Densidade Populacional, a carta com o menor valor vence.\n");
    printf("Vamos começar!\n");
    printf("Para começar o jogo, defina as características das cartas!\n");

    //Entrada de dados para a primeira carta
    printf("\nCriando a Carta 1 \n");

    printf("Digite uma letra de 'A' a 'Z' para representar o País: ");
    scanf(" %c", &letra1);

    printf("Digite o código da pais: ");
    scanf("%s", codigop1);

    printf("Digite o nome da pais: ");
    getchar(); // Limpa o buffer
    fgets(pais1, sizeof(pais1), stdin);  // Usando fgets para permitir caracteres especiais
    pais1[strcspn(pais1, "\n")] = 0;  // Remove o '\n' que fgets pode adicionar

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da pais (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da pais (bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos(1-100): ");
    scanf("%d", &turismo1);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pibcapita1 = (pib1 * 1000000000) / populacao1; // Converter o PIB da pais em bilhões
    superpoder1 = populacao1 + area1 + pib1 + turismo1 + pibcapita1 + densidade1; // Somatoria dos atributos


    printf("\nTodos os dados foram definidas para a Carta 1. Agora defina os dados para a Carta 2.\n");

    //Entrada de dados para a segunda carta
    printf("\nCriando a Carta 2 \n");

    printf("Digite uma letra de 'A' a 'H' para representar o estado: ");
    scanf(" %c", &letra2);

    printf("Digite o código da pais: ");
    scanf("%s", codigop2);

    printf("Digite o nome da pais: ");
    getchar(); // Limpa o buffer
    fgets(pais2, sizeof(pais2), stdin);  // Usando fgets para permitir caracteres especiais
    pais2[strcspn(pais2, "\n")] = 0;  // Remove o '\n' que fgets pode adicionar

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da pais: ");
    scanf("%f", &area2);

    printf("Digite o PIB da pais: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &turismo2);

    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pibcapita2 = (pib2 * 1000000000) / populacao2; // Converter o PIB do pais em bilhões
    superpoder2 = populacao2 + area2 + pib2 + turismo2 + pibcapita2 + densidade2; // Somatoria dos atributos

    //Saída de dados da carta 1
    printf("\nCarta 1: \n");
    printf("Letra representante: %c\nCódigo: %s\nPaís: %s\n", letra1, codigop1, pais1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao1, area1, pib1, turismo1, densidade1, pibcapita1, superpoder1);

    //Saída de dados da carta 2
    printf("\nCarta 2: \n");
    printf("Letra representante: %c\nCódigo: %s\npais: %s\n", letra2, codigop2, pais2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\nSuper Poder: %.2f\n", populacao2, area2, pib2, turismo2, densidade2, pibcapita2, superpoder2);


    // Menu para seleção de comparação de atributos
    printf("\nEscolha qual atributo deseja comparar das duas cartas.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    scanf("%d", &escolhaAtributo);
    

    switch(escolhaAtributo){
        case 1:
       // Comparação de cartas (Atributo: População)
        printf("\nComparação de cartas (Atributo: População):\n");
        printf("Carta 1 - %s (%s):  %lu\n", pais1, codigop1, populacao1);
        printf("Carta 2 - %s (%s):  %lu\n", pais2, codigop2, populacao2);

            if (populacao1 > populacao2){
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (populacao1 == populacao2){
                printf("Resultado: Carta 1 e Carta 2 Empatou (%s)(%s)\n", pais1, pais2);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }
                break;

        case 2:
        // Comparação de cartas (Atributo: Área)
        printf("\nComparação de cartas(Atributo: Área):\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", pais1, codigop1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", pais2, codigop2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (area1 == area2){
                printf("Resultado: Carta 1 e Carta 2 Empatou (%s)(%s)\n", pais1, pais2);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }
                break;

        case 3:
        // Comparação de cartas (Atributo: PIB)
        printf("\nComparação de cartas(Atributo: PIB):\n");
        printf("Carta 1 - %s (%s): %.2f bilhões\n", pais1, codigop1, pib1);
        printf("Carta 2 - %s (%s): %.2f bilhões\n", pais2, codigop2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pib1 == pib2){
                printf("Resultado: Carta 1 e Carta 2 Empatou (%s)(%s)\n", pais1, pais2);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }

                break;

        case 4:
         // Comparação de cartas (Atributo: Pontos turísticos)
        printf("\nComparação de cartas(Atributo: Pontos turísticos):\n");
        printf("Carta 1 - %s (%s): %d\n", pais1, codigop1, turismo1);
        printf("Carta 2 - %s (%s): %d\n", pais2, codigop2, turismo2);

            if (turismo1 > turismo2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (turismo1 == turismo2){
                printf("Resultado: Carta 1 e Carta 2 Empatou (%s)(%s)\n", pais1, pais2);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }
    
        case 5:
        // Comparação de cartas (Atributo: Densidade populacional)
        printf("\nComparação de cartas(Atributo: Densidade populacional):\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", pais1, codigop1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", pais2, codigop2, densidade2);

            if (densidade1 < densidade2) 
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (densidade1 == densidade2){
                printf("Resultado: Carta 1 e Carta 2 Empatou (%s)(%s)\n", pais1, pais2);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            }
            default:
                printf("Opção Inválida!");
            break;
        }


    return 0;
        
}
    