#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[5];
    char cod_cart[5]; 
    char cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int qtd_pt_turstc;

  // Saudação
    printf("Olá! Seja bem-vindo ao jogo \n>>>> SUPER TRUNFO <<<<\nVamos começar com as informações da carta 01!\n");


  // Área para entrada de dados carta 01
    printf("\n > Digite o código da carta (A letra do estado seguida de um número de 01 a 04 - ex: A01, B03)\n");
    scanf("%s", cod_cart);
    printf("\n > Digite o estado da carta (ex: RJ, SP, etc...)\n");
    scanf("%s", estado);
    printf("\n > Digite a cidade da carta:\n");
    scanf("%s", cidade);
    printf("\n > Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("\n > Digite a área da cidade em km²:\n");
    scanf("%f", &area_km2);
    printf("\n > Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("\n > Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &qtd_pt_turstc);

  // Área para exibição dos dados da carta 01
    printf("\n\n --- CARTA 01 ---\n");
    printf("Código da carta: %s\n", cod_cart);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área (km²): %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pt_turstc);

  // Área para entrada de dados carta 02
    printf("\n____________________________________________\n");
    printf("Agora vamos para a carta 02!");
    printf("\n____________________________________________\n");
    printf("\n > Digite o codigo da carta (A letra do estado seguida de um número de 01 a 04 - ex: A01, B03)\n");
    scanf("%s", cod_cart);
    printf("\n > Digite o estado da carta (ex: SP, RJ, etc...)\n");
    scanf("%s", estado);
    printf("\n > Digite a cidade da carta:\n");
    scanf("%s", cidade);
    printf("\n > Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("\n > Digite a área da cidade em km²:\n");
    scanf("%f", &area_km2);
    printf("\n > Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("\n > Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &qtd_pt_turstc);

    // Área para exibição dos dados da carta 02
    printf("\n\n --- CARTA 02 ---\n");
    printf("Código da carta: %s\n", cod_cart);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área (km²): %.2f\n", area_km2);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pt_turstc);
    printf("\n____________________FIM______________________\n");


return 0;
} 
