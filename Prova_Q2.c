#include <stdio.h>
// Definição de uma estrutura para representar uma data
struct Data {
    int dia;
    int mes;
    int ano;
};
// Função para calcular o número de dias de aula entre duas datas
int diasDeAula(struct Data hoje, struct Data ultimoDiaSemestre) {
    int diasTotal = 0;
    // Calcula o total de dias baseado nas diferenças de dia, mês e ano
    diasTotal += (ultimoDiaSemestre.ano - hoje.ano) * 365; // Adiciona dias por anos completos
    diasTotal += (ultimoDiaSemestre.mes - hoje.mes) * 30; // Adiciona dias por meses completos (30 dias por mês)
    diasTotal += ultimoDiaSemestre.dia - hoje.dia; // Adiciona dias restantes
    return diasTotal;
}
int main() {
    // Define a data de hoje e o último dia do semestre como exemplos
    struct Data hoje = {10, 8, 2023}; // Dia de hoje (exemplo)
    struct Data ultimoDiaSemestre = {20, 12, 2023}; // Último dia do semestre (exemplo)
    // Chama a função para calcular o total de dias de aula entre as datas
    int totalDiasAula = diasDeAula(hoje, ultimoDiaSemestre);
    // Imprime o total de dias de aula de laboratório
    printf("Total de dias de aula de laboratório restante: %d\n", totalDiasAula);
    return 0;
}