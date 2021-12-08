///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                  Developed by @flgorgonio - 2021.2                      ///
///////////////////////////////////////////////////////////////////////////////


#include <time.h>
#include <stdlib.h>
#include <string.h>



//////
////// Funções do Módulo Utilitário
//////



///
/// Faz uma pausa por n segundos, com n sendo passado como parâmetro
///
void delay(int segundos) {
    int tempo = 1000 * segundos;
    clock_t inicio = clock();
    while (clock() < inicio + tempo) {
        // não faz nada, apenas gasta tempo
    }
}



///
/// Limpa a tela; funciona em Linux / MacOS / Windows
///
void limpaTela(void) {
    if (system("clear") || system("cls")) {
        // limpa a tela, Linux, Mac e Windows
    }
}



///
/// Retorna 1 se o caractere recebido for um dígito (entre 0 e 9)
/// retorna 0 caso contrário
///
int ehDigito(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}



///
/// Retorna 1 se string recebido corresponde a um número de celular válido 
/// (apenas dígitos) ou retorna 0 caso contrário
///
int validaFone(char* fone) {
    int tam;
    tam = strlen(fone);
    if (tam != 11) {
        return 0;
    }
    for (int i = 0; i < tam; i++) {
        if (!ehDigito(fone[i])) {
            return 0;
        }
    }
    return 1;
}