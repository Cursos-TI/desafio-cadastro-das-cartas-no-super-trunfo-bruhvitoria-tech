int main(){

    char estado1[2], estado2[2];
    char cidade1[50],cidade2[50] ;
    char codigo1[3], codigo2[3];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float  DensidadePopul1,  DensidadePopul2;
    float perCapita1, perCapita2;


    printf("*CARTA 1*\n");
    printf("Digite a incial do Estado:\n");
    scanf("%s", &estado1);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo1);

    printf("Digite a quantidade de população da cidade:\n");
    scanf("%d",&populacao1);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    printf("Digite a área dessa cidade:\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    DensidadePopul1 = populacao1/area1;
    perCapita1 = pib1/populacao1;

    printf("\n***Dados carta 1***\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s - Código: %s\n", cidade1, codigo1);
    printf("Quantidade da população: %d - Área:%.2f\n", populacao1, area1);
    printf("Curiosidades --> Pontos Turisticos:%d - PIB: %.2f\n", pontos_turisticos1, pib1);
    printf("Densidade populacional: %.2f\n", DensidadePopul1);
    printf("PIB per capita: %.5f\n", perCapita1);

    /*DADOS DA CARTA 2!!!!!*/
    printf("\n*CARTA 2*\n");
    printf("Digite a incial do Estado:\n");
    scanf("%s", &estado2);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo2);

    printf("Digite a quantidade de população da cidade:\n");
    scanf("%d",&populacao2);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    printf("Digite a área dessa cidade:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    DensidadePopul2 = populacao2/area2;
    perCapita2 = pib2/populacao2;

    printf("\n***Dados carta 2***\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s - Código: %s\n", cidade2, codigo2);
    printf("Quantidade da população: %d - Área:%.2f\n", populacao2, area2);
    printf("Curiosidades --> Pontos Turisticos:%d - PIB: %.2f\n", pontos_turisticos2, pib2);
    printf("Densidade populacional: %.2f\n", DensidadePopul2);
    printf("PIB per capita: %.2f\n", perCapita2);




    return 0;
}