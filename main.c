#include <stdio.h>

// =========================
// Funções Recursivas (Nível Mestre)
// =========================
void moverBispoRecursivo(int n) {
    if (n == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(n - 1);
}

void moverTorreRecursivo(int n) {
    if (n == 0) return;
    printf("Direita\n");
    moverTorreRecursivo(n - 1);
}

void moverRainhaRecursivo(int n) {
    if (n == 0) return;
    printf("Esquerda\n");
    moverRainhaRecursivo(n - 1);
}

// =========================
// NÍVEL NOVATO
// =========================
void nivelNovato() {
    const int casas_bispo = 5;
    const int casas_torre = 5;
    const int casas_rainha = 8;
    int i;

    printf("\n===== NÍVEL NOVATO =====\n");

    // BISPO
    printf("\nMovimento do Bispo:\n");
    for(i = 1; i <= casas_bispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // TORRE
    printf("\nMovimento da Torre:\n");
    i = 1;
    while(i <= casas_torre) {
        printf("Direita\n");
        i++;
    }

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= casas_rainha);
}

// =========================
// NÍVEL AVENTUREIRO
// =========================
void nivelAventureiro() {
    int i, j;
    printf("\n===== NIVEL AVENTUREIRO =====\n");
    printf("Movimento do Cavalo (em L):\n");

    // 2 casas para baixo (for)
    for(i = 1; i <= 2; i++) {
        printf("Baixo\n");
    }

    // 1 casa para a esquerda
    j = 1;
    while(j <= 1) {
        printf("Esquerda\n");
        j++;
    }
}

// =========================
// NÍVEL MESTRE
// =========================
void nivelMestre() {
    printf("\n===== NIVEL MESTRE =====\n");

    // BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivo(5);

    // TORRE
    printf("\nMovimento da Torre:\n");
    moverTorreRecursivo(5);

    // RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainhaRecursivo(8);

    // CAVALO
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0, j = 0; i < 3; i++, j++) {
        if (i < 2) {
            printf("Cima\n");
            continue;
        }
        if (i == 2) {
            printf("Direita\n");
            break;
        }
    }
}

// =========================
// FUNÇÃO PRINCIPAL
// =========================
int main() {
    int opcao;

    printf("===== DESAFIO DE XADREZ =====\n");
    printf("Escolha o nivel do desafio:\n");
    printf("1 - Novato\n");
    printf("2 - Aventureiro\n");
    printf("3 - Mestre\n");
    printf("Digite o numero da opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            nivelNovato();
            break;
        case 2:
            nivelAventureiro();
            break;
        case 3:
            nivelMestre();
            break;
        default:
            printf("\nOpcao invalida. Tente novamente.\n");
    }

    printf("\n==============================\n");
    printf("Desafio concluido! \n");
    printf("==============================\n");

    return 0;
}