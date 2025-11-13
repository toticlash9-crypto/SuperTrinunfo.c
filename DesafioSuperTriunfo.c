#include <stdio.h>

int main() {
char estado1,estado2;
int codigo1,codigo2;
char cidade1[20],cidade2[20];
int populacao1,populacao2;
float area1,area2;
float pib1,pib2;
int numero_pontos_turisticos1,numero_pontos_turisticos2;

printf("Cadastre Suas Cartas\n");
// Carta 1
printf("Carta 1:\n");
printf("Estado(A-H):");
scanf(" %c", &estado1);
printf("Codigo(01-08):");
scanf(" %d", &codigo1);
printf("Cidade:");
scanf(" %s",cidade1);
printf("Populacao:");
scanf(" %d", &populacao1);
printf("AreaKM²:");
scanf(" %f", &area1);
printf("PIB-Bilhoes de Reais:");
scanf(" %f", &pib1);
printf("Numero de Pontos Turisticos:");
scanf(" %d", &numero_pontos_turisticos1);


// Carta 2
printf("Carta 2:\n");
printf("Estado(A-H):");
scanf(" %c", &estado2);
printf("Codigo(01-08):");
scanf(" %d", &codigo2);
printf("Cidade:");
scanf(" %s",cidade2);
printf("Populacao:");
scanf(" %d", &populacao2);
printf("AreaKM²:");
scanf(" %f", &area2);
printf("PIB-Bilhoes de Reais:");
scanf(" %f", &pib1);
printf("Numero de Pontos Turisticos:");
scanf(" %d", &numero_pontos_turisticos2);

//Tabela Carta1
printf("\n Tabela Carta 1:\n");

printf("Estado: %c\n",estado1);
printf("Codigo: %c%02d\n",estado1,codigo1);
printf("Cidade: %s\n",cidade1);
printf("Populacao: %d\n",populacao1);
printf("AreaKM²: %.2F\n",area1);
printf("PIB-Bilhoes de Reais: %.2f\n",pib1);
printf("Numero de Pontos Turisticos: %d\n",numero_pontos_turisticos1);

//Tabela Carta2
printf("\n Tabela Carta 2:\n");

printf("Estado: %c\n",estado2);
printf("Codigo: %c%02d\n",estado2,codigo2);
printf("Cidade: %s\n",cidade2);
printf("Populacao: %d\n",populacao2);
printf("AreaKM²: %.2F\n",area2);
printf("PIB-Bilhoes de Reais: %.2f\n",pib2);
printf("Numero de Pontos Turisticos: %d\n",numero_pontos_turisticos2);


















}