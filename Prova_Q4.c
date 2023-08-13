#include <stdio.h>
// Função para verificar se um número é perfeito
int isPerfect(int num) {
    int somaFatores = 1; // Começa com 1 porque todo número é divisível por 1
    // Loop para encontrar os fatores do número e calcular a soma
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            somaFatores += i;
        }
    }   
    // Verifica se a soma dos fatores é igual ao número
    return (somaFatores == num);
}
int main() {
    printf("Números perfeitos entre 1 e 1000:\n");
    // Loop para verificar e imprimir números perfeitos no intervalo de 1 a 1000
    for (int num = 1; num <= 1000; num++) {
        if (isPerfect(num)) {
            printf("%d: 1", num);
            for (int i = 2; i <= num/2; i++) {
                if (num % i == 0) {
                    printf(" + %d", i);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
