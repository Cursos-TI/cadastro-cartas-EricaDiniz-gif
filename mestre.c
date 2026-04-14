#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis para Carta 1
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1;
    unsigned int pontosTuristicos1;
    double densidade1, pibCapita1;
    float superPoder1;

    // Declaração das variáveis para Carta 2
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    unsigned int pontosTuristicos2;
    double densidade2, pibCapita2;
    float superPoder2;

    // Entrada de dados da Carta 1
    printf("Digite o nome da Carta 1: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0'; // remove o \n

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km): ");
    scanf("%f", &area1);
    printf("PIB (milhoes): ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%u", &pontosTuristicos1);

    getchar(); // consome o \n deixado pelo scanf

    // Entrada de dados da Carta 2
    printf("Digite o nome da Carta 2: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0'; // remove o \n

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km): ");
    scanf("%f", &area2);
    printf("PIB (milhoes): ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%u", &pontosTuristicos2);

    // Cálculos
    densidade1 = (double)populacao1 / area1;
    densidade2 = (double)populacao2 / area2;

    pibCapita1 = (double)pib1 / populacao1;
    pibCapita2 = (double)pib2 / populacao2;

    // Super Poder: soma de todos os atributos numéricos
    superPoder1 = (float)(populacao1 + area1 + pib1 + pontosTuristicos1 + pibCapita1 + (1.0 / densidade1));
    superPoder2 = (float)(populacao2 + area2 + pib2 + pontosTuristicos2 + pibCapita2 + (1.0 / densidade2));

    // Exibição dos cálculos
    printf("\n=== Resultados ===\n");
    printf("%s -> Densidade: %.2lf | PIB per capita: %.2lf | Super Poder: %.2f\n",
           nome1, densidade1, pibCapita1, superPoder1);
    printf("%s -> Densidade: %.2lf | PIB per capita: %.2lf | Super Poder: %.2f\n",
           nome2, densidade2, pibCapita2, superPoder2);

    // Comparações (sem if, apenas operadores relacionais)
    printf("\n=== Comparacoes ===\n");
    printf("Populacao: Carta1 vence? %d\n", populacao1 > populacao2);
    printf("Area: Carta1 vence? %d\n", area1 > area2);
    printf("PIB: Carta1 vence? %d\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta1 vence? %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("PIB per capita: Carta1 vence? %d\n", pibCapita1 > pibCapita2);
    printf("Densidade (menor vence): Carta1 vence? %d\n", densidade1 < densidade2);
    printf("Super Poder: Carta1 vence? %d\n", superPoder1 > superPoder2);

    return 0;
}
