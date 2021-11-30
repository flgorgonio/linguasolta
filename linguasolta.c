///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///                  Developed by @flgorgonio - 2021.2                      ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "aluno.h"
#include "professor.h"
#include "turma.h"



//////
////// Assinaturas das funções
//////

char telaPrincipal(void);
void telaSobre(void);
void telaEquipe(void);



//////
////// Programa principal
//////

int main(void) {
    char opcao;

    do {
        opcao = telaPrincipal();
        switch(opcao) {
            case '1':   moduloAluno();
                        break;
            case '2':   moduloProfessor();
                        break;
            case '3':   moduloTurma();
                        break;
            case '4':   // Módulo Matrícula
                        break;
            case '5':   // Módulo Relatórios
                        break;
            case '6':   telaSobre();
                        telaEquipe();
                        break;
        } 	
    } while (opcao != '0');

    return 0;
}



//////
////// Funções do Módulo Principal
//////

char telaPrincipal(void) {
    char op;

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Seridó                     ///\n");
    printf("///               Departamento de Computação e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programação                      ///\n");
    printf("///                  Projeto Sistema de Gestão Escolar                      ///\n");
    printf("///                  Developed by @flgorgonio - 2021.2                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///            = = = = = Sistema de Gestão Escolar = = = = =                ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Módulo Aluno                                              ///\n");
    printf("///            2. Módulo Professor                                          ///\n");
    printf("///            3. Módulo Turma                                              ///\n");
    printf("///            4. Módulo Matrícula                                          ///\n");
    printf("///            5. Módulo Relatórios                                         ///\n");
    printf("///            6. Módulo Sobre                                              ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            Escolha a opção desejada: ");
    scanf("%c", &op);
    getchar();
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t<<< ... Aguarde ... >>>\n");
    sleep(1);
    return op;
}


