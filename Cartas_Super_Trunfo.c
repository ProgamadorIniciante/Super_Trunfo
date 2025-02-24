#include <stdio.h>


//códigos para entrada de dados
int main(){
char estado[50];
char codigo[50];
char cidade[50];
float populacao;
int turismo;
float area;
float pib;


printf("Estado: ");
scanf("%s", estado);

printf("Código da carta: ");
scanf("%s", codigo);

printf("Nome da cidade: ");
scanf("%s", cidade);

printf("População: ");
scanf("%f", &populacao);

printf("Aréa: ");
scanf("%f", &area);

printf("Pontos Turisticos: ");
scanf("%d", &turismo);

printf("PIB: ");
scanf("%f", &pib);

system("clear");

//códigos para saída de dados
printf("Informações da cidade: \n");
printf("Código da Carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %.3f\n", populacao);
printf("Área: %.3f km²\n", area);
printf("PIB: %.1f bilhões de reais\n", pib);
printf("Pontos Túristicos: %d\n", turismo);

return 0;
}

