#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void leia(n){
    float *valores;
    int i = 0,j=0;
    valores = malloc(n* sizeof(float));
    for(i = 0; i<n;i++){
        valores[i] = rand()%100;
       // printf("%f\n",valores[i]);
    }
    for(i=0;i<n;i++){ // ordenamento
        for(j=0;j<n;j++){
            if(valores[i]<valores[j]){
                int aux = valores[i];
                valores[i]=valores[j];
                valores[j]=aux;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%f\n",valores[i]);
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
    return 0;
}
