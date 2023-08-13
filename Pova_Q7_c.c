#include <stdio.h>
// Função recursiva para calcular f(m, n)
int calcularF(int m, int n) {
    if (m <= 1 || n <= 1) {
        return 1; // Valor base quando m <= 1 ou n <= 1
    } else {
        // Chamada recursiva para calcular f(m, n) usando a definição por partes
        return calcularF(m, n - 1) + calcularF(m - 1, n);
    }
}
int main() {
    int m, n; // Variáveis para os valores de m e n
    // Solicita ao usuário que insira os valores de m e n
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    // Calcula o valor de f(m, n) usando a função calcularF
    int resultado = calcularF(m, n);
    // Imprime o resultado da função f(m, n)
    printf("f(%d, %d) = %d\n", m, n, resultado);
    return 0;
}
