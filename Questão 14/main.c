#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)// fornecemos para a funçao dois ponteiros const void
{
   return ( *(int*)a - *(int*)b );          //função compare compara 2 elemento e retorna -1, 0 ou 1
                                            // que representa respectivamente se o elemento apontado é menor,igual ou maior.
}

int main()
{
    int n;
    printf("Digite o numero de elementos  ");
    scanf(" %d",&n);
    float *pont; //declaracao ponteiro tipo float
    pont = malloc(n*sizeof(float)); // Alocação dinamica na memoria

    for (int i=0;i<n;i++){
        printf("digite o %d elemento",i);
        scanf("%f",&pont[i]); // leitura do elementos do vetor
    }
    qsort(pont,n,sizeof(float),compare);// Temos que o qsort é uma função da biblioteca c que recebe como argumento
    //um array ,quantos elementos serão ordenados, o tamanho de cada elemento, e a função de comparação.
    for(int i =0; i<n;i++){
        printf("%f\n",pont[i]); // impressao do vetor ordenado
    }

    free(pont); // liberacao da memoria
    return 0;
}
