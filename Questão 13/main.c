#include <stdio.h>
#include <stdlib.h>

void ordenacao(int n, float *pont){
    for (int i=1;i<n;i++) {
        for (int j=0;j<n-1;j++) {
            if (pont[j]>pont[j+1]) {
                int aux=pont[j];
                pont[j]=pont[j+1];
                pont[j+1]=aux;
            }
        }
    }
}
int main()
{
    int n;
    printf("Digite o numero de elementos  ");
    scanf(" %d",&n);
    float *pont;
    pont = malloc(n*sizeof(float));

    for (int i=0;i<n;i++){
        printf("digite o %d elemento",i);
        scanf("%f",&pont[i]);
    }
    ordenacao(n,pont);
    for(int i =0; i<n;i++){
        printf("%f\n",pont[i]);
    }
    free(pont);
    return 0;
}
