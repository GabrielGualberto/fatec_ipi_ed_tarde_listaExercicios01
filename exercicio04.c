
/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga
Exercicio 04
Escreva um programa em C que ordena um vetor de 40 elementos digitados pelo
usuário
*/



#include<stdio.h>

int main(){
    int vetor[10];//1 2 3 4 5 9 8 7;
    int i,j,menor=0;
    for(int i=0;i<10;i++){
        printf("digite um numero: ");
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<10;i++){
        menor=vetor[i];
        printf("%d",menor);
        for(j=i;j<10;j++){
            if(vetor[j]<=menor){
                menor=vetor[j];    
            }
        }
        vetor[i]=menor;
    }
    for(i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }
}