#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis Carta 01
    char estado1[5];
    char cod_cart1[5]; 
    char cidade1[50];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int qtd_pt_turstc1;
    double dens_populacional1;
    double pib_per_capita1;
    double dens_populacional_inversa1;

  // Área para definição das variáveis Carta 02
    char estado2[5];
    char cod_cart2[5];
    char cidade2[50];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int qtd_pt_turstc2;
    double dens_populacional2;
    double pib_per_capita2;
    double dens_populacional_inversa2;

  // Área para definição das variáveis de comparação
    int Resultado_populacao;
    int Resultado_area;
    int Resultado_pib;
    int Resultado_qtd_pt_turstc;
    int Resultado_dens_populacional;
    int Resultado_pib_per_capita;
    int Resultado_super_poder;

  // Saudação
    printf("Olá! Seja bem-vindo ao jogo \n>>>> SUPER TRUNFO <<<<\nVamos começar com as informações da carta 01!\n");


  // Área para entrada de dados carta 01
    printf("\n > Digite o código da carta (A letra do estado seguida de um número de 01 a 04 - ex: A01, B03)\n");
    scanf("%s", cod_cart1);
    printf("\n > Digite o estado da carta (ex: RJ, SP, etc...)\n");
    scanf("%s", estado1);
    printf("\n > Digite a cidade da carta:\n");
    scanf("%s", cidade1);
    printf("\n > Digite a população da cidade:\n");
    scanf("%lu", &populacao1);
    printf("\n > Digite a área da cidade em km²:\n");
    scanf("%lf", &area1);
    printf("\n > Digite o PIB da cidade:\n");
    scanf("%lf", &pib1);
    printf("\n > Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &qtd_pt_turstc1);

  // Calculando a densidade populacional e o PIB per capita da CARTA 01
    dens_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

  // Área para exibição dos dados da carta 01
    printf("\n\n --- CARTA 01 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", cod_cart1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área (km²): %.3f\n", area1);
    printf("PIB: R$%.2f\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pt_turstc1);
    printf("Densidade populacional: %.2f habitantes/km²\n", dens_populacional1);
    printf("PIB per capita: R$%.2f\n", pib_per_capita1);

  // Calculando o super poder da carta 01
  dens_populacional_inversa1 = 1 / dens_populacional1;
  double super_poder_carta_01 = populacao1 + area1 + pib1 + qtd_pt_turstc1 + dens_populacional_inversa1 + pib_per_capita1;
  printf("Super poder da carta 01: %.2f\n", super_poder_carta_01);

  // Área para entrada de dados carta 02
    printf("\n____________________________________________\n");
    printf("Agora vamos para a carta 02!");
    printf("\n____________________________________________\n");
    printf("\n > Digite o codigo da carta (A letra do estado seguida de um número de 01 a 04 - ex: A01, B03)\n");
    scanf("%s", cod_cart2);
    printf("\n > Digite o estado da carta (ex: SP, RJ, etc...)\n");
    scanf("%s", estado2);
    printf("\n > Digite a cidade da carta:\n");
    scanf("%s", cidade2);
    printf("\n > Digite a população da cidade:\n");
    scanf("%lu", &populacao2);
    printf("\n > Digite a área da cidade em km²:\n");
    scanf("%lf", &area2);
    printf("\n > Digite o PIB da cidade:\n");
    scanf("%lf", &pib2);
    printf("\n > Digite a quantidade de pontos turísticos da cidade:\n");
    scanf("%d", &qtd_pt_turstc2);

  // Calculando a densidade populacional e o PIB per capita da CARTA 02
    dens_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // Área para exibição dos dados da carta 02
    printf("\n\n --- CARTA 02 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", cod_cart2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área (km²): %.3f\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", qtd_pt_turstc2);
    printf("Densidade populacional: %.2f habitantes/km²\n", dens_populacional2);
    printf("PIB per capita: R$%.2f\n", pib_per_capita2);
    printf("\n____________________FIM______________________\n");

    // Calculando o super poder da carta 02
    dens_populacional_inversa2 = 1 / dens_populacional2;
    double super_poder_carta_02 = populacao2 + area2 + pib2  + qtd_pt_turstc2 + dens_populacional_inversa2 + pib_per_capita2;
    printf("Super poder da carta 02: %.2f\n", super_poder_carta_02);

    // Comparando carta 01 e carta 02
    Resultado_populacao = (populacao1 > populacao2);
    Resultado_area = (area1 > area2);
    Resultado_pib = (pib1 > pib2);
    Resultado_qtd_pt_turstc = (qtd_pt_turstc1 > qtd_pt_turstc2);
    Resultado_dens_populacional = (dens_populacional_inversa1 < dens_populacional_inversa2);
    Resultado_pib_per_capita = (pib_per_capita1 > pib_per_capita2);
    Resultado_super_poder = (super_poder_carta_01 > super_poder_carta_02);

    // Exibindo os resultados da comparação
    printf("\nComparação entre as cartas:\n");
    printf("População: %d\n", Resultado_populacao);
    printf("Área: %d\n", Resultado_area);
    printf("PIB: %d\n", Resultado_pib);
    printf("Quantidade de pontos turísticos: %d\n", Resultado_qtd_pt_turstc);
    printf("Densidade populacional (inversa): %d\n", Resultado_dens_populacional);
    printf("PIB per capita: %d\n", Resultado_pib_per_capita);
    printf("Super poder: %d\n", Resultado_super_poder);


return 0;
} 
