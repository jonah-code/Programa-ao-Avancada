#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );

}
void leia(n){
    int *valores;
    int i = 0,j=0;
    valores = malloc(n* sizeof(int));
    for(i = 0; i<n;i++){
        valores[i] = rand()%100;
    }
    qsort(valores, n, sizeof(int), compare);
    for(i = 0; i<n;i++){
        printf("%i\n",valores[i]);
    }
}
int main()
{
    float tempo;
    clock_t tempoEX;
    int n;
    scanf("%i",&n);
    tempoEX = clock();
    leia(n);
    tempoEX = clock()- tempoEX;
    printf("tempo: %f\n",((float)tempoEX)/CLOCKS_PER_SEC);
}
