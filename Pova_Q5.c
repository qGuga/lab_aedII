#include<stdio.h>
#include<stdlib.h>
// Função recursiva para calcular a multiplicação de dois números inteiros
int multiplicacaoRecursiva(int x1, int x2) {
    // Caso base: se um dos números for zero, o resultado é zero
    if (x1 == 0 || x2 == 0) {
        return 0;
    }
    // Caso base: se x2 for 1, o resultado é x1
    if (x2 == 1) {
        return x1;
    }
    // Caso geral: a multiplicação é a soma de x1 por x2-1
    return x1 + multiplicacaoRecursiva(x1, x2 - 1);
}
int main() {
    int x1, x2;
    printf("Digite dois números inteiros: "); // Solicita entrada do usuário
    scanf("%d %d", &x1, &x2); // Lê os valores de x1 e x2
    int resultado = multiplicacaoRecursiva(x1, x2); // Chama a função recursiva
    printf("O resultado da multiplicação é: %d\n", resultado); // Imprime o resultado
    return 0;
}