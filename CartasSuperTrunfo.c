#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char Estado1, Estado2;
char Codigo1[20], Codigo2[20];
char Cidade1[20], Cidade2[20];
int Populacao1, Populacao2;
float Area1, Area2;
float PIB1,PIB2;
int Turistico1, Turistico2;

  // Área para entrada de dados Carta 1
printf("Digite o estado: \n");
scanf("%c", &Estado1);

printf("Digite o código da carta: \n");
scanf("%s", &Codigo1);

printf("Digite a cidade: \n");
scanf("%s", &Cidade1);

printf("Digite a população: \n");
scanf("%d", &Populacao1);

printf("Digite a àrea KM: \n");
scanf("%f", &Area1);

printf("Digite o PIB: \n");
scanf("%f", &PIB1);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &Turistico1);

  // Área para exibição dos dados Carta 1
printf("Estado: %c\n", Estado1);
printf("Código da carta: %s\n", Codigo1);
printf("Nome da cidade: %s\n", Cidade1);
printf("População: %d\n", Populacao1);
printf("Área: %f\n", Area1);
printf("PIB: %f\n", PIB1);
printf("Número de pontos turísticos: %d\n", Turistico1);

  // Área para entrada de dados Carta 2
printf("Digite o estado: \n");
scanf(" %c", &Estado2);

printf("Digite o código da carta: \n");
scanf("%s", &Codigo2);

printf("Digite a cidade: \n");
scanf("%s", &Cidade2);

printf("Digite a população: \n");
scanf("%d", &Populacao2);

printf("Digite a àrea KM: \n");
scanf("%f", &Area2);

printf("Digite o PIB: \n");
scanf("%f", &PIB2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &Turistico2);

  // Área para exibição dos dados Carta 2
printf("Estado: %c\n", Estado2);
printf("Código da carta: %s\n", Codigo2);
printf("Nome da cidade: %s\n", Cidade2);
printf("População: %d\n", Populacao2);
printf("Área: %f\n", Area2);
printf("PIB: %f\n", PIB2);
printf("Número de pontos turísticos: %d\n", Turistico2);

return 0;
} 
