#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void Bispo(int casas){
    if(casas > 0){
        printf("Cima\n");
        printf("Direita\n");
        Bispo(casas - 1);
    }
}

void Torre (int casas){
    if (casas > 0){
        printf("Direita\n");
        Torre(casas - 1);
    }
}

void Rainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        Rainha(casas - 1);
    }
}

void Cavalo(int casas){
    // valor inicial 4 casas, 3 casas ele vai para cima e 1 casa para direita.
    if(casas > 1){
        printf("Cima\n");
        Cavalo(casas - 1);
    }else if(casas == 1){
        printf("Direita");
    }
}

int main() {
    // printf("Cima\n"); printf("Baixo\n"); printf("Esquerda\n"); printf("Direita\n");
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5; // superior direita
    int torre = 5; // direita
    int rainha = 8; // esquerda
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Sem utilizar recursividade:\n");
    printf("Movimentação do Bispo: \n");
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Cima\n");
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentação do Torre: \n");
    do
    {
        printf("Direita\n");
        torre--;
    } while (torre != 0);
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação do Rainha: \n");
    while (rainha != 0){
        printf("Esquerda\n");
        rainha--;
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentação do Cavalo: \n");
    int baixo = 3;
    int esquerda = 1;
    // O for está 1 para esquerda pois ele so vai terminar quando o while descer 3 casas
    for (i = esquerda; i != 0; i--)
    {
        while (baixo != 0)
        {
            printf("Baixo\n");
            baixo--;
        }
        printf("Esquerda\n");
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("Utilizando recursividade:\n");
    printf("Movimentação do Bispo:\n");
    Bispo(5);
    printf("Movimentação do Torre:\n");
    Torre(5);
    printf("Movimentação do Rainha:\n");
    Rainha(8);
    printf("Movimentação do Cavalo:\n");
    Cavalo(4); // Cavalo anda 4 casas

    return 0;
}
