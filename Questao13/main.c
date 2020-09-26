#include <stdio.h>
#include <stdlib.h>

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
    int n;
    scanf("%i",&n);
    leia(n);
    return 0;
}
