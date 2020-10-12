#include <stdio.h>
#include <stdlib.h>
void soma(int v1[],int v2[],int v3[],int n){
    for(int i = 0;i<n;i++){
        v3[i]=v1[i]+v2[i];
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int v1[n],v2[n],v3[n];
    for(int i=0;i<n;i++){
        printf("digite o %i elemento do v1",i);
        scanf("%d",&v1[n]);

    }
     for(int i=0;i<n;i++){
        printf("digite o %i elemento do v2",i);
        scanf("%d",&v1[n]);
    }
    soma(v1,v2,v3,n);

    for(int i=0;i<n;i++){
        printf("%d\n",v3[i]);
    }

}
