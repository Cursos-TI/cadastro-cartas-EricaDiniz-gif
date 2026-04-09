#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 // Dados da primeira carta
 // Carta 1 - Salvador (Bahia)
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nomeCidade1[] = "Salvador";
    int populacao1 = 2886698;
    float area1 = 692.0;
    float pib1 = 67100000000.0; // 67,1 bilhões
    int pontosTuristicos1 = 25;

    // Carta 2 - Angra dos Reis (Rio de Janeiro)
    char estado2 = 'B';
    char codigo2[] = "B02";
    char nomeCidade2[] = "Angra dos Reis";
    int populacao2 = 207044;
    float area2 = 825.1;
    float pib2 = 5200000000.0; // 5,2 bilhões
    int pontosTuristicos2 = 18;

  // Área para entrada de dados
 
  // Área para exibição dos dados da cidade
printf("===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
return 0;
} 
