#include <stdio.h>
#include <string.h>

int main() {
    // Dados fixos de duas cartas (países) cadastradas previamente
    char nome1[] = "A01";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1839000.0;        
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    char nome2[] = "B02";
    int populacao2 = 45000000;
    float area2 = 2780400.0;
    float pib2 = 450000.0;         
    int pontosTuristicos2 = 35;
    float densidade2 = populacao2 / area2;

    int escolha;
    
    printf("=== Super Trunfo - Comparação de Países ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("0 - Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 0) {
        printf("Programa finalizado.\n");
        return 0;
    }

    printf("\nComparando %s x %s\n", nome1, nome2);

    switch (escolha) {
        case 1: {  // População
            printf("Atributo: População\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 2: {  // Área
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area1 < area2) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 3: {  // PIB
            printf("Atributo: PIB (milhões USD)\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib1 < pib2) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 4: {  // Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontosTuristicos1);
            printf("%s: %d\n", nome2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        case 5: {  // Densidade Demográfica - regra invertida
            printf("Atributo: Densidade Demográfica (hab/km²)\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade1 > densidade2) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        }
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
            break;
    }

    return 0;
}
