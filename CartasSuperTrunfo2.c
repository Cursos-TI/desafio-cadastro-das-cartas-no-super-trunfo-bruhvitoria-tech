int main(){

    char estado[2];
    char cidade[10];
    char codigo[3];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

    printf("Digite a incial do Estado:\n");
    scanf("%s", &estado);
   
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo);

    printf("Digite a quantidade de população da cidade:\n");
    scanf("%d",&populacao);

    printf("Quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("Digite a área dessa cidade:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("Estado: %s\n", estado);
    printf("Nome da cidade: %s - Código: %s\n",cidade, codigo);
    printf("Quantidade da população: %d - Área:%f\n", populacao, area);
    printf("Curiosidades --> Pontos Turisticos:%d - PIB: %f", pontos_turisticos, pib);
    
}