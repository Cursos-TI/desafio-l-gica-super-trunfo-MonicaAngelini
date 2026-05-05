#include <stdio.h>

int main() {
    // --- Definição das Variáveis ---
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;

    // --- Cadastro da Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // --- Cadastro da Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos necessários para a comparação especial
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    // --- Comparação e Exibição dos Resultados ---
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // Comparação por População (Maior vence)
    printf("Atributo: População\n");
    if (populacao1 > populacao2) {
        printf("Vencedor: Carta 1 - %s\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Vencedor: Carta 2 - %s\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("-------------------------------\n");

    // Comparação por Densidade Populacional (Menor vence)
    printf("Atributo: Densidade Populacional\n");
    printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", cidade1, densidade1, cidade2, densidade2);
    
    if (densidade1 < densidade2) {
        printf("Vencedor: Carta 1 - %s\n", cidade1);
    } else if (densidade2 < densidade1) {
        printf("Vencedor: Carta 2 - %s\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    printf("===============================\n");

    return 0;
}
