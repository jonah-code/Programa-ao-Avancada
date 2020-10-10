#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)// fornecemos para a funçao dois ponteiros const void
{
   return ( *(int*)a - *(int*)b );          //função compare compara 2 elemento e retorna -1, 0 ou 1
                                            // que representa respectivamente o primeiro elemento apontado se menor,igual ou maior.



}
void leia(n){
    int *valores;
    int i = 0,j=0;
    valores = malloc(n* sizeof(int));// Alocação dinamica na memoria
    for(i = 0; i<n;i++){
        valores[i] = rand()%100; // Gera números aleatorios
    }
    qsort(valores, n, sizeof(int), compare);// Temos que o qsort é uma função da biblioteca c que recebe como argumento
    //um array ,quantos elementos serão ordenados, o tamanho de cada elemento, e a função de comparação.
    for(i = 0; i<n;i++){
        printf("%i\n",valores[i]);
    }
}
int main()
{
    int n;
    scanf("%i",&n);
    leia(n);
    return 0;
}
