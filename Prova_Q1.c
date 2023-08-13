#include <stdio.h>
int main() {
    int contador = 0; // Variável para rastrear o número de caracteres impressos por linha
    for (int i = 0; i <= 127; i++) { // Loop para iterar através dos valores ASCII de 0 a 127
        printf("%3d: %c   ", i, i); // Imprime o valor ASCII e o caractere correspondente
        contador++; // Incrementa o contador de caracteres impressos
        // Verifica se já foram impressos 10 caracteres (uma linha)
        if (contador == 10) {
            printf("\n"); // Quebra a linha após 10 caracteres
            contador = 0; // Reinicia o contador para a próxima linha
        }
    }
    return 0;
}