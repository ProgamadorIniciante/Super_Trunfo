#include <stdio.h>

//Códigos para entrada de dados
int main(){
char estado1[50];
char codigo1[50];
char cidade1[50];
float populacao1;
int turismo1;
float area1;
float pib1;

printf("Estado: ");
scanf("%s", estado1);

printf("Código da carta: ");
scanf("%s", codigo1);

printf("Nome da cidade: ");
scanf("%s", cidade1);

printf("População: ");
scanf("%f", &populacao1);

printf("Aréa: ");
scanf("%f", &area1);

printf("Pontos Turisticos: ");
scanf("%d", &turismo1);

printf("PIB: ");
scanf("%f", &pib1);

//Segunda carta.

//Códigos para entrada de dados
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

    //Códigos para saída de dados 1
    printf("Informações da cidade: \n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.3f\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Pontos Túristicos: %d\n", turismo1);

    //Cógidos para saída de dados 2
    printf("Informações da cidade: \n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %.3f\n", populacao);
    printf("Área: %.3f km²\n", area);
    printf("PIB: %.1f bilhões de reais\n", pib);
    printf("Pontos Túristicos: %d\n", turismo);
return 0;
}

