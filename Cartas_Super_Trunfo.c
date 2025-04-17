#include <stdio.h>

//Códigos para entrada de dados
int main(){
char estado1[50];
char codigo1[50];
char cidade1[50];
int populacao1;
int turismo1;
float area1;
float pib1;
float densidade_populacional1;
float pib_per_capita1;
float super_poder1;

printf("*** Senhoras e Senhores, Sejam Bem vindos ao Super Trunfo!!! ***\n");
printf("Estado: ");
scanf("%s", estado1);

printf("Código da carta: ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf("%s", cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Aréa: ");
scanf("%f", &area1);

printf("Pontos Turisticos: ");
scanf("%d", &turismo1);

printf("PIB: ");
scanf("%f", &pib1);

densidade_populacional1 = (float) populacao1 / area1;

pib_per_capita1 = (float) pib1 / populacao1;

//Segunda carta.

//Códigos para entrada de dados
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    int turismo;
    float area;
    float pib;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
    
    printf("Estado: ");
    scanf("%s", estado);
    
    printf("Código da carta: ");
    scanf("%s", codigo);
    
    printf("Nome da cidade: ");
    scanf("%s", cidade);
    
    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Aréa: ");
    scanf("%f", &area);
    
    printf("Pontos Turisticos: ");
    scanf("%d", &turismo);
    
    printf("PIB: ");
    scanf("%f", &pib);

    densidade_populacional = (float) populacao / area;

    pib_per_capita = (float) pib / populacao;
    
    system("clear");

    //Códigos para saída de dados 1
    printf("Informações da cidade: \n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Túristicos: %d\n", turismo1);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("Pib Per Capita: %.2f reais\n", pib_per_capita1);

    //Cógidos para saída de dados 2]
    printf("\n");
    printf("Informações da cidade: \n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Túristicos: %d\n", turismo);
    printf("Dencidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("Pib Per Capita: R$ %.2f reais\n", pib_per_capita);
return 0;
}

