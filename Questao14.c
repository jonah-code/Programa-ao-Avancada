#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)// fornecemos para a fun�ao dois ponteiros const void
{
   return ( *(int*)a - *(int*)b );          //fun��o compare compara 2 elemento e retorna -1, 0 ou 1
                                            // que representa respectivamente o primeiro elemento apontado se menor,igual ou maior.



}
void leia(n){
    int *valores;
    int i = 0,j=0;
    valores = malloc(n* sizeof(int));// Aloca��o dinamica na memoria
    for(i = 0; i<n;i++){
        valores[i] = rand()%100; // Gera n�meros aleatorios
    }
    qsort(valores, n, sizeof(int), compare);// Temos que o qsort � uma fun��o da biblioteca c que recebe como argumento
    //um array ,quantos elementos ser�o ordenados, o tamanho de cada elemento, e a fun��o de compara��o.
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
