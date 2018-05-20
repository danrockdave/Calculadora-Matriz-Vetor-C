/*
 Trabalho realizado pelos alunos:
 Davi Fontenele Meira Marçal
 Leonardo Holanda
 Natália Sales Aragão
 
 Cadeira de Introdução à Ciência da Computação 2017.2
 Professor Dr. Leonardo Sampaio
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoesVet.h"
#include "funcoesMat.h"

void Mostrar_menu_principal(void);
void Menu_matrizes(void);
void Menu_vetores(void);


//Função que chama o menu das Matrizes
void Menu_matrizes(){
    
    char EscolhaM[10];
    //Variável que armazena o valor da opção selecionada pelo usuário
    int OpcaoM = 0;
    
    //Imprime na tela as opções do menu de Matrizes
    puts("\nTecle uma das opções");
    puts("1 - Ler Matrizes");
    puts("2 - Imprimir Matrizes");
    puts("3 - Somar duas Matrizes");
    puts("4 - Subtração de Matrizes");
    puts("5 - Multiplicar duas Matrizes");
    puts("6 - Calcular a transposta de uma Matriz");
    puts("7 - Calcular o determinante de uma Matriz");
    puts("8 - Verificar se uma matriz é simétrica");
    puts("9 - Voltar ao menu anterior");
    
        //Lê o valor digitado pelo usuário
        scanf("%s", EscolhaM);
        OpcaoM = atoi(EscolhaM);
        switch (OpcaoM) {
            case 1:
                Ler_Matrizes();
                Menu_matrizes();
                break;
                
            case 2:
               Imprimir_Matrizes();
                Menu_matrizes();
                break;
                
            case 3:
                Somar_Matrizes();
                Menu_matrizes();
                break;
            case 4:
                Subtracao_Matrizes();
                Menu_matrizes();
                break;
                
            case 5:
                Multiplicar_Matrizes();
                Menu_matrizes();
                break;
                
            case 6:
                Transposta_Matriz();
                Menu_matrizes();
                break;
                
            case 7:
                Determinante_Matriz();
                Menu_matrizes();
                break;
            case 8:
                Simetria_Matriz();
                Menu_matrizes();
                break;
            case 9:
                return;
                break;
                
            default:
                printf("\nEscolha uma opção válida (Teclas de 1 a 8)\n");
                break;
        }
}

//Função que chama o menu dos Vetores
void Menu_vetores(){
    
    char EscolhaM[10];
    //Variável que armazena o valor da opção selecionada pelo usuário
    int OpcaoM = 0;
    
    //Imprime na tela as opções do Menu de Vetores
    puts("Tecle uma das opções");
    puts("1 - Ler Vetores");
    puts("2 - Imprimir Vetores");
    puts("3 - Somar dois vetores");
    puts("4 - Subtrair dois vetores");
    puts("5 - Multiplicar dois vetores por um escalar");
    puts("6 - Realizar o produto escalar entre dois vetores");
    puts("7 - Voltar ao menu anterior");
    
        //Lê o valor digitado pelo usuário
        scanf("%s", EscolhaM);
        OpcaoM = atoi(EscolhaM);
        switch (OpcaoM) {
            case 1:
                Ler_Vetores();
                Menu_vetores();
                break;
                
            case 2:
                Imprimir_Vetores();
                Menu_vetores();
                break;
                
            case 3:
                Somar_Vetores();
                Menu_vetores();
                break;
                
            case 4:
                Subtrair_Vetores();
                Menu_vetores();
                break;
                
            case 5:
                Multiplicar_Vetores();
                Menu_vetores();
                break;
            case 6:
                Produto_Escalar();
                Menu_vetores();
                break;
            case 7:
                return;
                break;
            default:
                printf("\nEscolha uma opção válida (Teclas de 1 a 7)\n");
                break;
        }
}

//função principal que chama os Menus das outras funções
int main() {
    
    setlocale(LC_ALL, "Portuguese");
    char Escolha[10];
    //Variável que armazena o valor da opção selecionada pelo usuário
    int Opcao = 0;
    
    do {
        //Imprime na tela as opções do Menu Principal
        puts("Calculadora de Matrizes e Vetores\n");
        puts("Tecle uma das opções\n");
        puts("1 - Calculadora de matrizes\n");
        puts("2 - Calculadora de vetores\n");
        puts("3 - Sair do programa\n");
        
        //Lê o valor digitado pelo usuário
        scanf("%s", Escolha);
        Opcao = atoi(Escolha);
        switch (Opcao) {
            case 1:
                //Chama o menu de Matrizes
                Menu_matrizes();
                break;
                
            case 2:
                //Chama o menu de Vetores
                Menu_vetores();
                break;
                
            case 3:
                //Sai do Programa
                puts("Já vai? Até a próxima!");
                break;
                
            default:
                //Caso o usuário digite uma opção inválida, printa um aviso sobre quais são as teclas válidas.
                puts("\nEscolha uma opção válida (Tecla 1, 2 ou 3)\n");
                break;
        }
    }while (Opcao != 3);
}



    

