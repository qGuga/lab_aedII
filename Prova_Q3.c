#include <stdio.h>

int main() {
    int limite;
    // Solicita ao usuário que insira o valor limite para procurar os triplos pitagóricos.
    printf("Digite o valor limite: ");
    scanf("%d", &limite);
    // Exibe um título indicando que os triplos pitagóricos estão sendo buscados.
    printf("Triplos pitagóricos até %d:\n", limite);
    // Loop para percorrer todos os possíveis valores de cateto1.
    for (int cateto1 = 1; cateto1 <= limite; cateto1++) {
        // Loop para percorrer todos os possíveis valores de cateto2, começando de cateto1.
        for (int cateto2 = cateto1; cateto2 <= limite; cateto2++) {
            // Loop para percorrer todos os possíveis valores de hipotenusa, começando de cateto2.
            for (int hipotenusa = cateto2; hipotenusa <= limite; hipotenusa++) {
                // Verifica se a relação pitagórica é satisfeita: cateto1^2 + cateto2^2 = hipotenusa^2.
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    // Se a relação pitagórica for verdadeira, imprime o triplo pitagórico.
                    printf("(%d, %d, %d)\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
    return 0;
}
