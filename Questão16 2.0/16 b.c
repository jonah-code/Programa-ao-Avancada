#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparacao (float* a, float * b)
{
   if ( *a - *b <1 ) {
   return 0;
   }
   if ( *a - *b > 1){
    return 1;
   }

}
void ordene (int n, float *pont, int(*p)( float*,  float*)){
     for (int i=1;i<n;i++) {
        for (int j=0;j<n-1;j++) {
            float *a = &pont[j];
            float *b = &pont[j+1];

            if((*p)(a,b)==1)
            {
                float aux;
                aux=pont[j];
                pont[j]=pont[j+1];
                pont[j+1]=aux;
            }

        }
    }
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


    for (int i=0;i<n;i++){
        printf("digite o %d elemento",i);
        scanf("%f",&pont[i]);
    }
    tempoEX = clock();
    int(*p)( float*,  float*) = comparacao;
    ordene(n, pont, p);
    tempoEX = clock()- tempoEX;
    printf("tempo: %f\n",((float)tempoEX)/CLOCKS_PER_SEC);
    for(int i =0; i<n;i++){
        printf("%f\n",pont[i]);
    }

    free(pont);
    return 0;
}
