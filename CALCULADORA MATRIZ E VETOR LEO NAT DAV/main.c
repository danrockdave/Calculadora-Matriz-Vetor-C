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
#include <locale.h>

void Mostrar_menu_principal(void);
void Menu_matrizes(void);
void Menu_vetores(void);
void Ler_Matrizes(void);
void Ler_Vetores(void);
void Imprimir_Matrizes(void);
void Imprimir_Vetores(void);
void Somar_Matrizes(void);
void Somar_Vetores(void);
void Subtracao_Matrizes(void);
void Subtrair_Vetores(void);
void Produto_Escalar(void);

struct vetor{
    int tamanho;
    int *p;
};

struct matriz {
    int linhas;
    int colunas;
    int **p;
};
 
struct matriz m1, m2;

struct vetor v1, v2;

//Cadastra vetores para serem usados em outras operações
void Ler_Vetores(){
    int tamanho = 0;
    puts("\nO número de linhas de um vetor é sempre 1.");
    v1.tamanho = tamanho;
    puts("\nDigite o numero de colunas do vetor.");
    printf("Tamanho: ");
    scanf("%d", &tamanho);
    v1.tamanho = tamanho;
    v1.p = (int *) malloc(v1.tamanho * sizeof(int));
    
        for(int j = 0; j < v1.tamanho; j++){
            printf("\nDigite o valor dos elementos do vetor 1[%d]: ",j);
            scanf("%d", &v1.p[j]);
        }
    
    v2.tamanho = tamanho;
    puts("\nDigite o numero de colunas do vetor.");
    printf("Tamanho: ");
    scanf("%d", &tamanho);
    v2.tamanho = tamanho;
    v2.p = (int *) malloc(v2.tamanho * sizeof(int));
    
        for(int j = 0; j < v2.tamanho; j++){
            printf("\nDigite o valor dos elementos do vetor 2[%d]: ",j);
            scanf("%d", &v2.p[j]);
        }
    return Menu_vetores();
}
//Imprime os vetores cadastrados na leitura:
void Imprimir_Vetores(){
    int j;
    printf("\n\tVetor [A] : [");
    
        for(j = 0; j < v1.tamanho; j++){
            printf(" %d",v1.p[j]);
        }
    printf(" ]\n");
    
    printf("\n\tVetor [B] : [");
   
        for(j = 0; j < v2.tamanho; j++){
            printf(" %d", v2.p[j]);
        }
    printf(" ]\n");
    }

//Realiza a soma entre dois vetores de mesma dimensão:
void Somar_Vetores(){
    int j;
    //Vetor resultante:
    int *vSoma;
    
    if(v1.tamanho != v2.tamanho){
        //condição de existência da soma:
        printf("\n\n\tOs vetores [A] e [B] precisam ter a mesma dimensão\n");
    }else{
        // Operação da soma:
        vSoma = (int*) malloc(v1.tamanho * sizeof(int));
        for(j = 0; j < v1.tamanho; j++){
            vSoma[j] = v1.p[j] + v2.p[j];
        }
        
        Imprimir_Vetores();
        //Imprime o resultado
        printf("\tVetor [A] + [B] = [ ");
        for(j = 0; j < v1.tamanho; j++){
            printf(" %d;",vSoma[j]);
        }
        printf(" ]\n\n");
        free (vSoma);
    }
    printf("\n");
   // return Menu_vetores();
}
//Realiza a soma entre dois vetores de mesma dimensão:
void Subtrair_Vetores(){
    int j;
    //Vetor resultante:
    int *vSub;
    
    if(v1.tamanho != v2.tamanho){
        //condição de existência da soma:
        printf("\n\n\tOs vetores [A] e [B] precisam ter a mesma dimensão\n");
    }else{
        // Operação da soma:
        vSub = (int*) malloc(v1.tamanho * sizeof(int));
        for(j = 0; j < v1.tamanho; j++){
            vSub[j] = v1.p[j] - v2.p[j];
        }
        
        Imprimir_Vetores();
        //Imprime o resultado
        printf("\tVetor [A] - [B] = ");
        for(j = 0; j < v1.tamanho; j++){
            printf(" %d;",vSub[j]);
        }
        printf(")\n\n");
        free (vSub);
    }
    printf("\n");
    //return Menu_vetores();
}

void Multiplicar_Vetores(){
    int j;
    int escalar;
    //Vetor resultante:
    int *vMult;
    
    printf("Digite o valor da escalar\n");
    scanf("%d", &escalar);
    
        Imprimir_Vetores();
        // Operação da soma:
        vMult = (int*) malloc(v1.tamanho * sizeof(int));
        for(j = 0; j < v1.tamanho; j++){
            vMult[j] = v1.p[j] * escalar;
        }
        //Imprime o resultado
        printf("\tVetor [A] * escalar = [");
        for(j = 0; j < v1.tamanho; j++){
        printf(" %d",vMult[j]);
        }
        printf("]\n\n");
        vMult = (int*) malloc(v2.tamanho * sizeof(int));
        for(j = 0; j < v2.tamanho; j++){
        vMult[j] = v2.p[j] * escalar;
        }
    
    
        printf("\tVetor [B] * escalar = [");
        for(j = 0; j < v2.tamanho; j++){
        printf(" %d",vMult[j]);
        }
        printf("]\n\n");
        free (vMult);
    
    printf("\n");
    //return Menu_vetores();
}

void Produto_Escalar(){
    int j;
    //Vetor resultante:
    int *vMult;
    
    int resultado = 0;
    
    if(v1.tamanho != v2.tamanho){
        //condição de existência da soma:
        printf("\n\n\tOs vetores [A] e [B] precisam ter a mesma dimensão\n");
    }else{
        Imprimir_Vetores();
        // Operação do produto:
        vMult = (int*) malloc(v1.tamanho * sizeof(int));
        for(j = 0; j < v1.tamanho; j++){
            vMult[j] = v1.p[j] * v2.p[j];
        }
        //Imprime o resultado
        printf("\tEscalar = ");
        for(j = 0; j < v1.tamanho; j++){
            resultado += vMult[j];
            
        }
        printf(" %d",resultado);
        printf("\n\n");
        free (vMult);
        
        printf("\n");
        // return Menu_vetores();
    }
}

void Ler_Matrizes(){
    int linhas = 0, colunas = 0;
    puts("\nDigite o número de linhas da primera matriz.");
    printf("Linhas: ");
    
    scanf("%d", &linhas);
    m1.linhas = linhas;
    puts("\nDigite o numero de colunas da primeira matriz.");
    printf("Colunas: ");
    scanf("%d", &colunas);
    m1.colunas = colunas;
    m1.p = (int **) malloc(m1.linhas*sizeof(int));
    
    for(int i = 0; i < m1.linhas ; i++){
        m1.p[i] = (int *) malloc(m1.colunas * sizeof(int));
        for(int j = 0; j < m1.colunas; j++){
            printf("Digite o valor do elemento da matriz 1[%d][%d]: ",i,j);
            scanf("%d", &m1.p[i][j]);
        }
    }
    puts("\nDigite o número de linhas da segunda matriz.\n");
    printf("Linhas: ");
    scanf("%d",&linhas);
    m2.linhas = linhas;
    puts("\nDigite o número de colunas da segunda matriz.\n");
    printf("Colunas: ");
    scanf("%d", &colunas);
    m2.colunas = colunas;
    m2.p = (int **) malloc(m2.linhas*sizeof(int));
    for(int i = 0; i < m2.linhas; i++){
        m2.p[i] = (int *) malloc(m2.colunas*sizeof(int));
        for(int j = 0; j < m2.colunas; j++){
            printf("Digite o valor do elemento da matriz 2 [%d][%d]: ", i,j);
            scanf("%d", &m2.p[i][j]);
        }
    }
    return Menu_matrizes();
}

void Imprimir_Matrizes(){
    int i,j;
   
    printf("\n\tMatriz [A] : \n");
    for(i = 0; i < m1.linhas ; i++){
        printf("\t| ");
        for(j = 0; j < m1.colunas; j++){
            printf(" %d",m1.p[i][j]);
        }
        printf(" |\n");
    }
    
    printf("\n\n\tMatriz [B] : \n");
    for(i = 0; i < m2.linhas; i++){
        printf("\t| ");
        for(j = 0; j < m2.colunas; j++){
            printf(" %d",m2.p[i][j]);
        }
        printf(" |\n");
    }
    printf("\n");
}

//Realiza a soma entre duas matrizes de mesmas dimensões
void Soma_Matrizes(){
    int i,j;
    // matriz resultante :
    int **mSoma;
    
    if(m1.linhas != m2.linhas || m1.colunas != m2.colunas){
        // condicao de existencia da soma :
        printf("\n\n\tAs matrizes [A] e [B] precisam ter a mesma dimensão\n");
        return Menu_matrizes();
    }else{
        Imprimir_Matrizes();
        
        // Operação da soma:
        mSoma = (int **) malloc(m1.linhas * sizeof(int));
        for(i = 0; i < m1.linhas; i++){
            mSoma[i] = (int *) malloc(m1.linhas * sizeof(int));
            for(j = 0; j < m1.colunas; j++){
                mSoma[i][j] = m1.p[i][j] + m2.p[i][j];
            }
        
        
        //Imprime matriz resultante :
        printf("\tVetor Resultante [A] + [B] :\n\t");
        for(i = 0; i < m1.linhas; i++){
            printf("|");
            for(j = 0; j < m1.colunas; j++){
                printf(" %d ",mSoma[i][j]);
            }
            printf(" |\n\t");
        }
        free(mSoma);
    }
    printf("\n");
    }
    return Menu_matrizes();
    
}

//Realiza a soma entre duas matrizes de mesmas dimensões
void Subtracao_Matrizes(){
    int i,j;
    // matriz resultante :
    int **mSub;
    
    if(m1.linhas != m1.colunas || m2.linhas != m2.colunas){
        // condicao de existencia da soma :
        printf("\n\n\tAs matrizes [A] e [B] precisam ter a mesma dimensão\n");
    }else{
        Imprimir_Matrizes();
        //Operação da soma:
        mSub = (int **) malloc(m1.linhas * sizeof(int));
        for(i = 0; i < m1.linhas; i++){
            mSub[i] = (int *) malloc(m1.linhas * sizeof(int));
            for(j = 0; j < m1.colunas; j++){
                mSub[i][j] = m1.p[i][j] - m2.p[i][j];
            }
        }
        
        //Imprime matriz resultante :
        printf("\tMatriz Resultante [A] + [B] :\n\t");
        for(i = 0; i < m1.linhas; i++){
            printf("|");
            for(j = 0; j < m1.colunas; j++){
                printf(" %d ",mSub[i][j]);
            }
            printf(" |\n\t");
        }
        free(mSub);
    }
    printf("\n");
    return Menu_matrizes();
}
//Realiza uma multiplicação entre duas matrizes de mesma dimensão
void Multiplicar_Matrizes(){
    int i, j, l;
    int **mMult;
    int armazenar = 0;
    if(m1.linhas != m1.colunas || m2.linhas != m2.colunas){
        // condicao de existencia da soma :
        printf("\n\n\tAs matrizes [A] e [B] precisam ter a mesma dimensão\n");
    }else{
        Imprimir_Matrizes();
        mMult = (int **) malloc(m1.linhas * sizeof(int));
        for(i = 0; i < m1.linhas; i++){
            mMult[i] = (int *) malloc(m1.linhas * sizeof(int));
            for(j = 0; j < m1.linhas; j++){
                for(l = 0; l < m1.linhas; l++){
                    armazenar += m1.p[i][l] * m2.p[l][j];
                }
                mMult[i][j] = armazenar;
                printf(" %d ",armazenar);
                armazenar = 0;
            }
            printf("\n");
        }
    }
}

//Função que cria o cabeçalho inicial do aplicativo, informando ao usuário o que fazer
void Mostrar_menu_principal(){
    puts("Calculadora de Matrizes e Vetores\n");
    puts("Tecle uma das opções\n");
    puts("1 - Calculadora de matrizes\n");
    puts("2 - Calculadora de vetores\n");
    puts("3 - Sair do programa\n");
}


//Função que chama o menu das matrizes
void Menu_matrizes(){
    char EscolhaM[10];
    int OpcaoM = 0;
    
    puts("\nTecle uma das opções\n1 - Ler Matrizes\n2 - Imprimir Matrizes\n3 - Somar duas Matrizes\n4 - Subtração de Matrizes\n5 - Multiplicar duas Matrizes\n6 - Calcular a transposta de uma matriz\n7 - Calcular o determinante de uma matriz\n7 - Verificar se uma matriz é simétrica\n8 - Voltar ao menu anterior");
    
        scanf("%s", EscolhaM);
        OpcaoM = atoi(EscolhaM);
        switch (OpcaoM) {
            case 1:
                Ler_Matrizes();
                break;
                
            case 2:
               Imprimir_Matrizes();
                break;
                
            case 3:
                Soma_Matrizes();
                break;
            case 4:
                Subtracao_Matrizes();
                break;
                
            case 5:
                Multiplicar_Matrizes();
                break;
                
            case 6:
                printf("teste6");
                break;
                
            case 7:
                return;
                break;
            case 8:
                break;
                
            default:
                printf("\nEscolha uma opção válida (Tecla 1, 2 ou 3...)\n");
                break;
        }
}





//Função que chama o menu dos vetores
void Menu_vetores(){
    char EscolhaM[10];
    int OpcaoM = 0;
    
    puts("\nTecle uma das opções\n1 - Ler Vetores\n2 - Imprimir Vetores\n3 - Somar dois vetores\n4 - Subtrair dois vetores\n5 - Multiplicar dois vetores por um escalar\n6 - Realizar o produto escalar entre dois vetores\n7 - Voltar ao menu anterior");
    
        scanf("%s", EscolhaM);
        OpcaoM = atoi(EscolhaM);
        switch (OpcaoM) {
            case 1:
                Ler_Vetores();
                break;
                
            case 2:
                Imprimir_Vetores();
                Menu_vetores();
                break;
                
            case 3:
                Somar_Vetores();
                break;
                
            case 4:
                Subtrair_Vetores();
                
                break;
                
            case 5:
                Multiplicar_Vetores();
                break;
            case 6:
                Produto_Escalar();
                break;
            case 7:
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
        Mostrar_menu_principal();
        
        scanf("%s", Escolha);
        Opcao = atoi(Escolha);
        switch (Opcao) {
            case 1:
                Menu_matrizes();//chama o menu de matrizes
                break;
                
            case 2:
                Menu_vetores();//chama o menu de vetores
                break;
                
            case 3:
                puts("Já vai? Até a próxima!");
               //sai do programa
                break;
                
            default:
                puts("\nEscolha uma opção válida (Tecla 1, 2 ou 3)");
                break;
        }
    }while (Opcao != 3);
}



    

