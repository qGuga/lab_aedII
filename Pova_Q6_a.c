#include <stdio.h>
// Função para inverter um número de forma não recursiva
int inverterNumeroNaoRecursivo(int num) {
    int invertido = 0;
    // Loop para inverter os dígitos do número
    while (num > 0) {
        int digito = num % 10; // Obtém o dígito menos significativo
        invertido = invertido * 10 + digito; // Adiciona o dígito invertido ao número invertido
        num /= 10; // Remove o dígito menos significativo do número original
    }
    return invertido;
}
int main() {
    int numero = 1234;
    int numeroInvertido = inverterNumeroNaoRecursivo(numero);
    printf("Número invertido (não recursivo): %d\n", numeroInvertido);
    return 0;
}