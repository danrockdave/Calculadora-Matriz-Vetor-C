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
#include "funcoesVet.h"


//cria a struct com as variáveis utilizadas nas funções de vetores
struct vetor{
    int tamanho;
    int *p;
};

struct vetor v1, v2;



//Cadastra vetores para serem usados em outras operações
void Ler_Vetores(){
    int tamanho = 0;
    puts("\nO número de linhas de um vetor é sempre 1.");
    v1.tamanho = tamanho;
    puts("\nDigite o tamanho (número de colunas) do vetor.");
    printf("Tamanho: ");
    scanf("%d", &tamanho);
    v1.tamanho = tamanho;
    v1.p = (int *) malloc(v1.tamanho * sizeof(int));
    
    for(int j = 0; j < v1.tamanho; j++){
        printf("\nDigite o valor dos elementos do vetor 1 [%d]: ",j);
        scanf("%d", &v1.p[j]);
    }
    
    v2.tamanho = tamanho;
    puts("\nDigite o tamanho (número de colunas) do vetor.");
    printf("Tamanho: ");
    scanf("%d", &tamanho);
    v2.tamanho = tamanho;
    v2.p = (int *) malloc(v2.tamanho * sizeof(int));
    
    for(int j = 0; j < v2.tamanho; j++){
        printf("\nDigite o valor dos elementos do vetor 2 [%d]: ",j);
        scanf("%d", &v2.p[j]);
    }
}


//Imprime os vetores cadastrados na leitura:
void Imprimir_Vetores(){
    int j;
    printf("\n\tVetor [A]: [");
    
    for(j = 0; j < v1.tamanho; j++){
        printf(" %d",v1.p[j]);
    }
    printf("]\n");
    
    printf("\n\tVetor [B]: [");
    
    for(j = 0; j < v2.tamanho; j++){
        printf(" %d", v2.p[j]);
    }
    printf("]\n");
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
        printf("\tVetor [A] + [B] = [");
        for(j = 0; j < v1.tamanho; j++){
            printf(" %d;",vSoma[j]);
        }
        printf("]\n\n");
        free(vSoma);
    }
    printf("\n");
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
        printf("\tVetor [A] - [B] = [");
        for(j = 0; j < v1.tamanho; j++){
            printf(" %d;",vSub[j]);
        }
        printf("]\n\n");
        free (vSub);
    }
    printf("\n");
    
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
        printf("\n\tEscalar = [");
        for(j = 0; j < v1.tamanho; j++){
            resultado += vMult[j];
            
        }
        printf(" %d",resultado);
        printf(" ]\n\n");
        free (vMult);
        
        printf("\n");
    }
}

