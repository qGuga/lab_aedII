#include <stdio.h>
// Função para inverter um número de forma recursiva
int inverterNumeroRecursivo(int num, int invertido) {
    if (num == 0) {
        return invertido; // Base da recursão: retorna o número invertido quando num é 0
    } else {
        int digito = num % 10; // Obtém o dígito menos significativo
        invertido = invertido * 10 + digito; // Adiciona o dígito invertido ao número invertido
        return inverterNumeroRecursivo(num / 10, invertido); // Chamada recursiva com o número atualizado
    }
}
int main() {
    int numero = 1234;
    int numeroInvertido = inverterNumeroRecursivo(numero, 0);
    printf("Número invertido (recursivo): %d\n", numeroInvertido);
    return 0;
}
