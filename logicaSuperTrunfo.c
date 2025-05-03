#include <stdio.h>
#include <string.h>

int main() {
    // Dados da Carta 1
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    char estado1[30], codigo1[20], cidade1[35];

    // Dados da Carta 2
    int populacao2, pontos_turisticos2;
    float area2, pib2;
    char estado2[30], codigo2[20], cidade2[35];

    // -------- CARTA 1 --------
    printf("Carta 1:\n");

    printf("Insira a letra do estado: \n");
    scanf("%s", estado1);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo1);

    getchar(); // Limpa buffer antes do fgets
    printf("Insira o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Insira a população: \n");
    scanf("%d", &populacao1);

    printf("Insira a Área: \n");
    scanf("%f", &area1);

    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // -------- CARTA 2 --------
    printf("\nCarta 2:\n");

    printf("Insira a letra do estado: \n");
    scanf("%s", estado2);

    printf("Insira o código da carta: \n");
    scanf("%s", codigo2);

    getchar(); // Limpa buffer antes do fgets
    printf("Insira o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Insira a população: \n");
    scanf("%d", &populacao2);

    printf("Insira a Área: \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2);

    // -------- CÁLCULOS --------
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // -------- EXIBIÇÃO --------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s \n",estado1);
    printf("Código da carta: %s \n",codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s \n",estado2);
    printf("Código da carta: %s \n",codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    // -------- COMPARAÇÃO POR PIB PER CAPITA --------
    printf("\nComparação de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s: %.2f\n", cidade1, pib_per_capita1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pib_per_capita2);

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
