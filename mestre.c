#include <stdio.h>

// Função auxiliar para exibir o menu de atributos
void exibirMenu(int atributoJaEscolhido) {
    printf("\nEscolha um atributo para comparar:\n");
    if (atributoJaEscolhido != 1) printf("1 - População\n");
    if (atributoJaEscolhido != 2) printf("2 - Área\n");
    if (atributoJaEscolhido != 3) printf("3 - PIB\n");
    if (atributoJaEscolhido != 4) printf("4 - Pontos Turísticos\n");
    if (atributoJaEscolhido != 5) printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção: ");
}

int main() {
    // Dados da Carta 1
    char nome1[] = "A01";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1839000.0; 
    int pontosTur1 = 50;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2
    char nome2[] = "B02";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 450000.0; 
    int pontosTur2 = 35;
    float densidade2 = populacao2 / area2;

    int atributo1 = 0, atributo2 = 0;

    printf("=== Super Trunfo - Desafio Final ===\n");

    // Escolha do primeiro atributo
    do {
        exibirMenu(0);
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 5) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (atributo1 < 1 || atributo1 > 5);

    // Escolha do segundo atributo (diferente do primeiro)
    do {
        exibirMenu(atributo1);
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (atributo2 < 1 || atributo2 > 5 || atributo2 == atributo1);

    // Funções auxiliares para obter os valores dos atributos
    float valor1A = 0, valor2A = 0;
    float valor1B = 0, valor2B = 0;

    // Pegar os valores do primeiro atributo
    switch (atributo1) {
        case 1: valor1A = populacao1; valor2A = populacao2; break;
        case 2: valor1A = area1; valor2A = area2; break;
        case 3: valor1A = pib1; valor2A = pib2; break;
        case 4: valor1A = pontosTur1; valor2A = pontosTur2; break;
        case 5: valor1A = densidade1; valor2A = densidade2; break;
        default: break;
    }

    // Pegar os valores do segundo atributo
    switch (atributo2) {
        case 1: valor1B = populacao1; valor2B = populacao2; break;
        case 2: valor1B = area1; valor2B = area2; break;
        case 3: valor1B = pib1; valor2B = pib2; break;
        case 4: valor1B = pontosTur1; valor2B = pontosTur2; break;
        case 5: valor1B = densidade1; valor2B = densidade2; break;
        default: break;
    }

    // Comparação por atributo (com lógica invertida para densidade)
    int vitoria1A = (atributo1 == 5) ? (valor1A < valor2A) : (valor1A > valor2A);
    int vitoria1B = (atributo2 == 5) ? (valor1B < valor2B) : (valor1B > valor2B);

    // Soma dos atributos
    float soma1 = valor1A + valor1B;
    float soma2 = valor2A + valor2B;

    // Resultado final
    printf("\n=== Resultado da Comparação ===\n");
    printf("Cartas: %s x %s\n", nome1, nome2);

    // Mostra nomes dos atributos comparados
    char* nomeAtributo1;
    char* nomeAtributo2;

    switch (atributo1) {
        case 1: nomeAtributo1 = "População"; break;
        case 2: nomeAtributo1 = "Área"; break;
        case 3: nomeAtributo1 = "PIB"; break;
        case 4: nomeAtributo1 = "Pontos Turísticos"; break;
        case 5: nomeAtributo1 = "Densidade Demográfica"; break;
    }

    switch (atributo2) {
        case 1: nomeAtributo2 = "População"; break;
        case 2: nomeAtributo2 = "Área"; break;
        case 3: nomeAtributo2 = "PIB"; break;
        case 4: nomeAtributo2 = "Pontos Turísticos"; break;
        case 5: nomeAtributo2 = "Densidade Demográfica"; break;
    }

    printf("\nAtributos comparados:\n");
    printf("- %s: %.2f (%s) vs %.2f (%s)\n", nomeAtributo1, valor1A, nome1, valor2A, nome2);
    printf("- %s: %.2f (%s) vs %.2f (%s)\n", nomeAtributo2, valor1B, nome1, valor2B, nome2);

    printf("\nSoma dos Atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    // Vencedor final
    if (soma1 > soma2) {
        printf("\nResultado: %s venceu a rodada!\n", nome1);
    } else if (soma1 < soma2) {
        printf("\nResultado: %s venceu a rodada!\n", nome2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
