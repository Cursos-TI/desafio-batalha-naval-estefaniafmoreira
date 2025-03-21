#include <stdio.h>

#define TAMANHO 10
#define TAM_NAVIO 3

int main() {
    // 1. Criar e inicializar o tabuleiro diretamente com 0's representando a água
    int tabuleiro[TAMANHO][TAMANHO] = {0};

    // 2. Posicionar um navio horizontalmente (linha 2, começando na coluna 3)
    int linhaH = 2, colunaH = 3;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // 3. Posicionar um navio verticalmente (coluna 7, começando na linha 5)
    int linhaV = 5, colunaV = 7;
    for (int i = 0; i < TAM_NAVIO; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }
    
    //4. Posicionar um navio na diágonal principal(canto superior esquerdo) 
    int linhaD1 = 1, colunaD1 = 1;
    for (int i = 0; i < TAM_NAVIO; i++){
        if (linhaD1 + i < TAMANHO && colunaD1 + i < TAMANHO){
           tabuleiro[linhaD1 + i] [colunaD1 + i] = 3;
        }
    }
    
    // 5. Posicionar um navio na diagonal secundária(canto superior direito)
    int linhaD2 = 1 , colunaD2 = 8;
    for (int i = 0; i < TAM_NAVIO; i++){
        if (linhaD2 + i < TAMANHO && colunaD2 - i >= 0){
            tabuleiro[linhaD2 + i] [colunaD2 - i] = 3;
        }
    } 

    // 6. Exibir o tabuleiro
    printf("\n  TABULEIRO BATALHA NAVAL\n\n");

    // Imprimir a matriz com letras colunas (A-J)
    printf("   ");
    for (char letra = 'A'; letra < 'A' + TAMANHO; letra++) {
        printf("%c ", letra);
    }
    printf("\n");

    // Imprimir a matriz com números das linhas (1-10)
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    










    return 0;
}
