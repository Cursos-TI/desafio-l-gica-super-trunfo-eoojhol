#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#define MAX_NOME 100
#define MAX_ESTADO 50
#define MAX_CODIGO 20

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafi
    // Variáveis da Carta 1
    char estado1[MAX_ESTADO];
    char codigo1[MAX_CODIGO];
    char nome1[MAX_NOME];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2[MAX_ESTADO];
    char codigo2[MAX_CODIGO];
    char nome2[MAX_NOME];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    char c;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // --- Entrada de dados da Carta 1 ---
    printf("Cadastro da Carta 1:\n");

    printf("Estado (sigla): ");
    scanf("%s", estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    while ((c = getchar()) != '\n' && c != EOF);  // Limpa buffer para fgets
    printf("Nome da Cidade: ");
    fgets(nome1, MAX_NOME, stdin);
    // Remove newline final do fgets
    for (int i = 0; nome1[i] != '\0'; i++) {
        if (nome1[i] == '\n') {
            nome1[i] = '\0';
            break;
        }
    }

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (milhões de R$): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Entrada de dados da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");

    printf("Estado (sigla): ");
    scanf("%s", estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    while ((c = getchar()) != '\n' && c != EOF);
    printf("Nome da Cidade: ");
    fgets(nome2, MAX_NOME, stdin);
    for (int i = 0; nome2[i] != '\0'; i++) {
        if (nome2[i] == '\n') {
            nome2[i] = '\0';
            break;
        }
    }

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (milhões de R$): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // --- Cálculo da densidade populacional ---
    float densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    float densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;

    // --- Cálculo do PIB per capita ---
    float pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1000000) / populacao1 : 0; // PIB em milhões
    float pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1000000) / populacao2 : 0;

    // --- Definir o atributo para comparação ---
    // Altere aqui para trocar o atributo comparado:
    // Possibilidades: "populacao", "area", "pib", "densidade", "pibPerCapita"
    const char* atributoComparar = "pibPerCapita";

    printf("\nComparação de cartas (Atributo: %s):\n\n", atributoComparar);

    // Mostrar valores das cartas para o atributo escolhido
    if (strcmp(atributoComparar, "populacao") == 0) {
        printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }
    else if (strcmp(atributoComparar, "area") == 0) {
        printf("Carta 1 - %s (%s): %.2f km²\n", nome1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", nome2, estado2, area2);
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }
    else if (strcmp(atributoComparar, "pib") == 0) {
        printf("Carta 1 - %s (%s): R$ %.2f milhões\n", nome1, estado1, pib1);
        printf("Carta 2 - %s (%s): R$ %.2f milhões\n", nome2, estado2, pib2);
        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }
    else if (strcmp(atributoComparar, "densidade") == 0) {
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome1, estado1, densidade1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome2, estado2, densidade2);
        // Para densidade, menor valor vence
        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }
    else if (strcmp(atributoComparar, "pibPerCapita") == 0) {
        printf("Carta 1 - %s (%s): R$ %.2f\n", nome1, estado1, pibPerCapita1);
        printf("Carta 2 - %s (%s): R$ %.2f\n", nome2, estado2, pibPerCapita2);
        if (pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }
    else {
        printf("Atributo para comparação inválido!\n");
    }


    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
