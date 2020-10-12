#include <stdio.h>
#include <stdlib.h>

int main()
{
    char charx[4];
    short int intx[4]; // shot usado para o int usar apenas 2byte
    float floatx[4];
    double doublex[4];
    char *pc  = charx;
    short int *pi = intx;
    float *pf  = floatx;
    double *pd = doublex;
    int c = 0;
    printf("para o tipo char localizado em %d\n",pc+c);
    for(int i=0;i<4;i++){
        printf("%d\n",pc+c);
        c++;
    }
    printf("para o tipo int localizado em %d\n",pi+c);
    for(int i=0;i<4;i++){
        printf("%d\n",pi+c);
        c++;
}
    printf("para o tipo float localizado em %d\n",pf+c);
    for(int i=0;i<4;i++){
        printf("%d\n",pf+c);
        c++;
}
    printf("para o tipo double localizado em %d\n",pd+c);
    for(int i=0;i<4;i++){
        printf("%d\n",pd+c);
        c++;
}
    return 0;
}
