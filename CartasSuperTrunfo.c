#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int estadob, total;
  char estadA, estadB, estadC, estadD, estadE, estadF, estadG, estadH;
  char codeA [3] = "01", codeB [3] = "02", codeC [3] = "03", codeD [3] = "04", codeE [3] = "05", codeF [3] = "06", codeG [3] = "07", codeH [3] = "08";
  char cidadA [20], cidadB [20], cidadC [20], cidadD [20], cidadE [20], cidadF [20], cidadG [20], cidadH [20];
  int  populA, populB, populC, populD, populE, populF, populG, populH;   
  float km2A, km2B, km2C, km2D, km2E, km2F, km2G, km2H;
  float pibA, pibB, pibC, pibD, pibE, pibF, pibG, pibH;
  int turistA, turistB, turistC, turistD, turistE, turistF, turistG, turistH;
  char cartaA, cartaB, cartaC, cartaD, cartaE, cartaF, cartaG, cartaH;



  // Área para entrada de dados
  printf("Digite o estado: \n");
  scanf ("%s", &estadA);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidadA);
  printf("Digite a quantidade de habitantes: \n");
  scanf("%d", &populA);
  printf("Digite a área em km²: \n");
  scanf("%f", &km2A);
  printf("Digite o PIB: \n");
  scanf("%f", &pibA);
  printf("Digite a quantidade de pontos turisticos: \n");
  scanf("%d", &turistA);
  // Área para exibição dos dados da cidade

return 0;
} 
