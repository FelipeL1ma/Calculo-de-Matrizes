#include <stdio.h>
#include <locale.h>

#define tam_max 3

//Realizar o calculo de duas matrizes.


//declaração das funções
void somarMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]);
void subtrairMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]);
void multiplicarMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]);
void dividirMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]);

int main(){
    setlocale(LC_ALL,"portuguese");
    int matrizA[tam_max][tam_max], matrizB[tam_max][tam_max], matrizResultante[tam_max][tam_max];
    char expressao;
    
    //Receber os valores da 1° matriz 
    printf("\n\n------ Inserindo os valores da 1° matriz ------\n\n");
    for(int i=0;i<tam_max;++i){
        for(int j=0;j<tam_max;++j){
            printf("Insira um valor para a linha %d, coluna %d: \n", i+1, j+1);
            scanf("%d", &matrizA[i][j]);
        }
        printf("\n");
    }

    //Receber os valores da 2° matriz
    printf("\n\n------ Inserindo os valores para a 2° matriz ------\n\n");
    for(int i=0;i<tam_max;++i){
        for(int j=0;j<tam_max;++j){
            printf("Insira um valor para a linha %d, coluna %d: \n", i+1, j+1);
            scanf("%d", &matrizB[i][j]);
        }
        printf("\n");
    }
    
    //Estrutura para receber o operador
    for(int c=0;c<3;c++){
        printf("\n\nInsira a expressão numérica desejada: (+, -, *, /)\n");
        scanf(" %c", &expressao);
        if(expressao != '+' && expressao != '-' && expressao != '*' && expressao != '/'){
            printf("Operador numérico inválido! \nTente novamente\n\n");
            c-=1;
        }
        else{
            break;
        }
    }

    //Estrutura para calcular as matrizes
    switch (expressao)
    {
    case '+':
        somarMatrizes(matrizA, matrizB, matrizResultante);
        break;
    case '-':
        subtrairMatrizes(matrizA, matrizB, matrizResultante);
        break;
    case '*':
        multiplicarMatrizes(matrizA, matrizB, matrizResultante);
        break;
    case '/':
        dividirMatrizes(matrizA, matrizB, matrizResultante);
        break;
    default:
        break;
    }

    //Mostrando os Resultados Obtidos
    printf("\n\n------ Os resultados obtidos foram ------\n\n");
    for(int k=0;k<tam_max;++k){
        for(int l=0;l<tam_max;++l){
            printf("Linha %d, coluna %d = %d\n", k+1, l+1, matrizResultante[k][l]);
        }
        printf("\n");
    }
    return 0;
}

void somarMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]){
    for(int i=0;i<tam_max;++i){
        for(int j=0;j<tam_max;++j){
            matrizResultante[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void subtrairMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]){
    for(int i=0;i<tam_max;++i){
        for(int j=0;j<tam_max;++j){
            matrizResultante[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

void multiplicarMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]){
    for(int i=0;i<tam_max;++i){
        for(int j=0;j<tam_max;++j){
            matrizResultante[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }
}

void dividirMatrizes(int matrizA[][tam_max], int matrizB[][tam_max], int matrizResultante[][tam_max]){
    for(int i=0;i<tam_max;++i){
        for(int j=0;j<tam_max;++j){
            matrizResultante[i][j] = matrizA[i][j] / matrizB[i][j];
        }
    }
}