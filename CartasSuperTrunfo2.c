int main(){

    char estado1[2], estado2[2];
    char cidade1[10];
    char codigo1[3];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float pib1;


    printf("CARTA 1:\n");
    printf("Digite a incial do Estado:\n");
    scanf("%s %s", &estado1, &estado2);
   
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

    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s - Código: %s\n", cidade1, codigo1);
    printf("Quantidade da população: %d - Área:%f\n", populacao1, area1);
    printf("Curiosidades --> Pontos Turisticos:%d - PIB: %f", pontos_turisticos1, pib1);

    return 0;
}