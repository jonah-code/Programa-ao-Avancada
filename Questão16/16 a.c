#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );

}

int main()
{
    float tempo;
    clock_t tempoEX;
    int n;
    printf("Digite o numero de elementos  ");
    scanf(" %d",&n);
    float *pont;
    pont = malloc(n*sizeof(float));

    for(int i = 0; i<n;i++){
        pont[i] = rand()%100;
    }
    tempoEX = clock();
    qsort(pont,n,sizeof(float),compare);
    tempoEX = clock()- tempoEX;


    for(int i =0; i<n;i++){
        printf("%f\n",pont[i]);
    }
    printf("tempo: %f\n",((float)tempoEX)/CLOCKS_PER_SEC);
    free(pont);
    return 0;
}
