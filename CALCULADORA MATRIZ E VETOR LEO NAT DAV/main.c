/*
 CALCULADORA DE MATRIZES E VETORES EM C
 
 Trabalho realizado pelos alunos:
 Davi Fontenele Meira Marçal
 Leonardo Holanda
 Natália Sales Aragão
 
 Cadeira de Introdução à Ciência da Computação 2017.2
 Professor Dr. Leonardo
 
*/

#include <stdio.h>
#include <stdlib.h>

//Função que cria o cabeçalho inicial do aplicativo, informando ao usuário o que fazer
void mostrar_menu_principal(){
    puts("Calculadora de Matrizes e Vetores\n");
    puts("Tecle uma das opções\n");
    puts("1 - Calculadora de matrizes\n");
    puts("2 - Calculadora de vetores\n");
    puts("3 - Sair do programa\n");
}

//Função que chama o menu das matrizes
void menu_matrizes(){
    char EscolhaM[10];
    int OpcaoM = 0;
    
    puts("\nTecle uma das opções\n1 - Ler Matrizes\n2 - Somar duas Matrizes\n3 - Multiplicar duas Matrizes\n4 - Calcular a transposta de uma matriz\n5 - Calcular o determinante de uma matriz\n6 - Verificar se uma matriz é simétrica\n7 - Voltar ao menu anterior");
    
        scanf("%s", EscolhaM);
        OpcaoM = atoi(EscolhaM);
        switch (OpcaoM) {
            case 1:
                printf("teste");
                break;
                
            case 2:
                printf("teste2");
                break;
                
            case 3:
                printf("teste3");
                break;
            case 4:
                printf("teste4");
                break;
                
            case 5:
                printf("teste5");
                break;
                
            case 6:
                printf("teste6");
                break;
                
            case 7:
                return;
                break;
                
            default:
                printf("\nEscolha uma opção válida (Tecla 1, 2 ou 3...)\n");
                break;
        }
}
//Função que chama o menu dos vetores
void menu_vetores(){
    char EscolhaM[10];
    int OpcaoM = 0;
    
    puts("\nTecle uma das opções\n1 - Ler vetores\n2 - Somar dois vetores\n3 - Multiplicar dois vetores por um escalar\n4 - Realizar o produto escalar entre dois vetores\n5 - Voltar ao menu anterior");
    
        scanf("%s", EscolhaM);
        OpcaoM = atoi(EscolhaM);
        switch (OpcaoM) {
            case 1:
                
                break;
                
            case 2:
                
                break;
                
            case 3:
                
                break;
                
            case 4:
                
                break;
                
            case 5:
                return;
                break;
                
            default:
                printf("\nEscolha uma opção válida (Tecla 1, 2 ou 3...)\n");
                break;
        }
}

int main() {
    char Escolha[10];
    int Opcao = 0;
    
    do {
        mostrar_menu_principal();
        
        scanf("%s", Escolha);
        Opcao = atoi(Escolha);
        switch (Opcao) {
            case 1:
                menu_matrizes();//chama o menu de matrizes
                break;
                
            case 2:
                menu_vetores();//chama o menu de vetores
                break;
                
            case 3:
                printf("Já vai? Até a próxima!\n");
                exit(0);//sai do programa
                break;
                
            default:
                printf("\n  Escolha uma opção válida (Tecla 1, 2 ou 3)\n");
                break;
        }
    }while (Opcao != 3);
}



    

