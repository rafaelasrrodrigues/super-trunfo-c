#include <stdio.h>

int main(){

     char estado1;
     char codigo1[4];
     char cidade1[50];
     unsigned long int populacao1;
     float area1;
     float pib1;
     int pontos1;
     float densidade1 = populacao1 / area1;
     float riqueza1 = pib1 / populacao1;
     float superPoder1 = (float) populacao1 + (float) pontos1 + area1 + pib1 + riqueza1 + (1 \ densidade1);

     printf("Cadastro da carta 1\n");

     printf("Estado (A-H): ");
     scanf(" %c", &estado1);

     printf("Codigo: ");
     scanf(" %s", codigo1);

     printf("Nome da cidade: ");
fgets(cidade1, 50, stdin);

     printf("Populacao: ");
     scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2 = populacao2 / area2;
    float riqueza2 = pib2 / populacao2;
    float superPoder2 = (float) populacao2 + (float) pontos2 + area2 + pib2 + riqueza2 + (1 \ densidade1);

    printf("Cadastro da carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

 printf("Nome da cidade: ");
fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    int rPop, rArea, rPib, rPontos, rRiqueza, rDensidade, rSuper;

    rPop = populacao1 > populacao2;

    rArea = area1 > area2;

    rPib = pib1 > pib2;

    rPontos = pontos1 > pontos2;

    rRiqueza = riqueza11 > riqueza2;

    rDensidade = densidade1 < densidade2;

    rSuper = superPoder1 > superPoder2;

    printf("\n\nCARTAS CADASTRADAS\n");

      printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
   printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
     printf("PIB per Capita: %.2f reais\n", riqueza1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
      printf("PIB per Capita: %.2f reais\n", riqueza2);
   
    printf("\nRESULTADO DAS COMPARACOES\n");

    printf("Populacao: %d\n", rPop);
    printf("Area: %d\n", rArea);
    printf("PIB: %d\n", rPib);
    printf("Pontos Turisticos: %d\n", rPontos);
    printf("PIB per Capita:: %d\n", rRiqueza);
    printf("Densidade Populacional: %d\n", rDensidade);
    printf("Super Poder: %d\n", rSuper);

     return 0;
}