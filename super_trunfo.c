#include <stdio.h>

int main(){

     char estado1;
     char codigo1[4];
     char cidade1[50];
     int populacao1;
     float area1;
     float pib1;
     int pontos1;
     float densidade1 = populacao1 / area1;
     float riqueza1 = pib1 / populacao1;

     printf("Cadastro da carta 1\n");

     printf("Estado (A-H): ");
     scanf(" %c", &estado1);

     printf("Codigo: ");
     scanf(" %s", codigo1);

     printf("Nome da cidade: ");
fgets(cidade1, 50, stdin);

     printf("Populacao: ");
     scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2 = populacao2 / area2;
    float riqueza2 = pib2 / populacao2;

    printf("Cadastro da carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

 printf("Nome da cidade: ");
fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    printf("\n\nCartas cadastradas\n");

      printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
   printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
     printf("PIB per Capita: %.2f reais\n", riqueza1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
      printf("PIB per Capita: %.2f reais\n", riqueza2);
    return 0;
}