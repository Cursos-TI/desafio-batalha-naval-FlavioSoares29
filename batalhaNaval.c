#include <stdio.h>

#define BATALHA NAVAL

// Função para exibir as coordenadas dos navios
void exibirCoordenadas(int navio[][2], int tamanho, const char *nomeNavio) {
    printf("Coordenadas do %s:\n", nomeNavio);
    for (int i = 0; i < tamanho; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, navio[i][0], navio[i][1]);
    }
    printf("\n");
}

int main() {
    // Definindo o tamanho dos navios
    int tamanhoNavioVertical = 3;
    int tamanhoNavioHorizontal = 4;

    // Posicionando o navio verticalmente
    int navioVertical[3][2] = {
        {2, 2}, // Parte 1 do navio vertical
        {2, 3}, // Parte 2 do navio vertical
        {2, 4}  // Parte 3 do navio vertical
    };

    // Posicionando o navio horizontalmente
    int navioHorizontal[4][2] = {
        {5, 5}, // Parte 1 do navio horizontal
        {6, 5}, // Parte 2 do navio horizontal
        {7, 5}, // Parte 3 do navio horizontal
        {8, 5}  // Parte 4 do navio horizontal
    };

    // Exibindo as coordenadas dos navios
    exibirCoordenadas(navioVertical, tamanhoNavioVertical, "Navio Vertical");
    exibirCoordenadas(navioHorizontal, tamanhoNavioHorizontal, "Navio Horizontal");

    return 0;
}