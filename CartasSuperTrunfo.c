#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
// Carta 1
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// Carta 2
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

// Entrada de dados da carta 1
printf("=== Cadastro da Carta 1 ===\n");
printf("Estado (uma letra): ");
scanf(" %c", &estado1);

printf("Codigo da carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf(" %[^\n]", nomeCidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("Area: ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Pontos turisticos: ");
scanf("%d", &pontosTuristicos1);

// Entrada de dados da carta 2
printf("\n=== Cadastro da Carta 2 ===\n");
printf("Estado (uma letra): ");
scanf(" %c", &estado2);

printf("Codigo da carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da cidade: ");
scanf(" %[^\n]", nomeCidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area: ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Pontos turisticos: ");
scanf("%d", &pontosTuristicos2);

// Exibição carta 1
printf("\n===== CARTA 1 =====\n");
printf("Estado: %c\n", estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Cidade: %s\n", nomeCidade1);
printf("Populacao: %d habitantes\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: R$ %.2f\n", pib1);
printf("Pontos Turisticos: %d\n", pontosTuristicos1);

// Exibição carta 2
printf("\n===== CARTA 2 =====\n");
printf("Estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Cidade: %s\n", nomeCidade2);
printf("Populacao: %d habitantes\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: R$ %.2f\n", pib2);
printf("Pontos Turisticos: %d\n", pontosTuristicos2);

return 0;
}