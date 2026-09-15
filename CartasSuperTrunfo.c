#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int estadob, total;
  char estadA, estadB, estadC, estadD, estadE, estadF, estadG, estadH;
  int codeA, codeB, codeC, codeD, codeE, codeF, codeG, codeH;
  char cidadA [20], cidadB [20], cidadC [20], cidadD [20], cidadE [20], cidadF [20], cidadG [20], cidadH [20];
  int  populA, populB, populC, populD, populE, populF, populG, populH;   
  float km2A, km2B, km2C, km2D, km2E, km2F, km2G, km2H;
  float pibA, pibB, pibC, pibD, pibE, pibF, pibG, pibH;
  int turistA, turistB, turistC, turistD, turistE, turistF, turistG, turistH;
  char cartaA [25], cartaB [25], cartaC [25], cartaD [25], cartaE [25], cartaF [25], cartaG [25], cartaH [25];



  // Área para entrada de dados da carta A
  printf("Carta A\n");
  printf("Digite o numero da carta: ");
  scanf(" %d", &codeA);
  printf("Digite o estado (Entre A-H): ");
  scanf(" %c", &estadA);
  printf("Digite o nome da cidade: ");
  scanf(" %25[^\n]", cidadA);
  printf("Digite a quantidade de habitantes: ");
  scanf("%d", &populA);
  printf("Digite a área em km²: ");
  scanf("%f", &km2A);
  printf("Digite o PIB: ");
  scanf("%f", &pibA);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &turistA);

  // Área para exibição dos dados da carta A

  printf("\n\nCarta A\n");
  printf("\nEstado: %c\n", estadA);
  printf("Codigo: %c%02d\n", estadA, codeA);  // %02d para exibir o número com dois dígitos, preenchendo com zero à esquerda se necessário, no caso para colocar o código da carta no formato correto.
  printf("Cidade: %s\n", cidadA);
  printf("População: %d\n", populA);
  printf("Área: %.2f km²\n", km2A);
  printf("PIB: %.2f\n", pibA);
  printf("Pontos Turisticos: %d\n", turistA);


  // Área para entrada de dados da carta B
  printf("\nCarta B\n");
  printf("Digite o numero da carta: ");
  scanf(" %d", &codeB);
  printf("Digite o estado (Entre A-H): ");
  scanf(" %c", &estadB);
  printf("Digite o nome da cidade: ");
  scanf(" %25[^\n]", cidadB);
  printf("Digite a quantidade de habitantes: ");
  scanf("%d", &populB);
  printf("Digite a área em km²: ");
  scanf("%f", &km2B);
  printf("Digite o PIB: ");
  scanf("%f", &pibB);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &turistB);

  // Área para exibição dos dados da cidade B

  printf("\nCarta B \n");
  printf("\nEstado: %c\n", estadB);
  printf("Codigo: %c%02d\n", estadB, codeB);
  printf("Cidade: %s\n", cidadB);
  printf("População: %d\n", populB);
  printf("Área: %.2f km²\n", km2B);
  printf("PIB: %.2f\n", pibB);
  printf("Pontos Turisticos: %d\n", turistB);
return 0;
} 
