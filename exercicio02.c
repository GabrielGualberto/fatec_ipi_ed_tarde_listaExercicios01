#include<stdio.h>

int main(){
    int vetor[10];
    int i,maior=0;
    for(int i=0;i<10;i++){
        printf("digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<10;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    printf("Maior: %d\n",maior);
}