#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontoturistico;

    // Variáveis da carta 2
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;
    
    // Variáveis de cálculo
    int densidade;
    int densidade1;
    float meida;
    float media1;
    int superPoder;
    int superpoder1;
    int superPoderCaluculo = pib + populacao + pontoturistico + meida  / densidade;
    int superPoderCaluculo1 = pib1 + populacao1 + pontoturistico1 + media1  / densidade1;
    /* Variáveis de resultado de vencedor 
    int resultado = pib > pib1;
    int resultadoPT = pontoturistico > pontoturistico1;
    int pibcalculo = meida > media1; */ 

    // Mensagem inicial
    printf("\033[1;31mBem-vindo ao jogo Super Trunfo - Cidades!\033[0m\n");
    printf("Este programa vai cadastrar duas cartas com informações de cidades.\n");
    printf("Você vai digitar os seguintes dados para cada carta:\n");
    printf(". Código da cidade (ex: A01)\n");
    printf(". População\n");
    printf(". Área (em km²)\n");
    printf(". PIB (em bilhões)\n");
    printf(". Número de pontos turísticos\n");

    // Carta 1
    printf("\n--- Carta da Cidade 1 ---\n");
    printf("Informe o código da cidade: ");
    scanf("%s", codigo);

    printf("Informe a população: ");
    scanf("%lu", &populacao);

    printf("Informe a área: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontoturistico);

    // Exibição da carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontoturistico);

    // Carta 2 
    printf("\n--- Carta da Cidade 2 ---\n");
    printf("Informe o código da cidade: ");
    scanf("%s", codigo1);

    printf("Informe a população: ");
    scanf("%d", &populacao1);

    printf("Informe a área: ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontoturistico1);

    // Exibição da carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontoturistico1);

    // Cálculo das médias
    densidade = populacao / area;
    densidade1 = populacao1 / area1;
    meida = (float)(pib / populacao);
    superPoder = superPoderCaluculo > superPoderCaluculo1;
    
    printf("\nPIB per capita da Cidade 1 R$: %.2f\n", meida);

    media1 = (float)(pib1 / populacao1);
    printf("PIB per capita da Cidade 2 R$: %.2f\n", media1);

    // Resultado do vencedor com 1 para verdadeiro e 0 para falso 
    /* printf("\nResultado 1: sua carta venceu (valor maior).\n");
    printf("Resultado 0: sua carta perdeu (valor menor).\n"); */
    printf("\033[1;31mRESULTADO DA PARTIDA\033[0m\n");

    if (meida > media1) {
        printf("PIB PER CAPITA DA CARTA 1 - Você ganhou\n");
    } else {
        printf("PIB PER CAPITA DA CARTA 2 - Você ganhou\n");
    }

    if (pib > pib1) {
        printf("PIB DA CARTA 1 - Ganhou\n");
    } else {
        printf("PIB DA CARTA 2 - Ganhou\n");
    }

    if (pontoturistico > pontoturistico1) {
        printf("PONTOS TURÍSTICOS DA CARTA 1 - Ganhou\n"); 
    } else {
        printf("PONTOS TURÍSTICOS DA CARTA 2 - Ganhou\n");
    }

    if (densidade < densidade1) {
        printf("Densidade ganhadora foi a Carta 2\n");
    } else {
        printf("Densidade ganhadora foi a Carta 1\n");
    }
    if (superPoderCaluculo > superPoderCaluculo1){
        printf("SUOOER TRUNFO O GANHADOR FINAL FOI VOCE CARTA 2 DE CODIGO : %s ", codigo1);
    }else{
        printf("SUEPER TRUNDO O GANHADOR FINAL VOCE CARTA 1 CODIGO : %s", codigo);
    }

    return 0;
}
