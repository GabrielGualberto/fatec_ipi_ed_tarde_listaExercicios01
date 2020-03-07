
/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 05
Escreva um programa em C que calcula a média de elementos armazenados em um
vetor de 30 posições.
*/
#include<stdio.h>
int main(){
    int media[5],count=0;
    int i;
    for(i=0;i<5;i++){
        printf("Digite um numero: ");
        scanf("%d",&media[i]);
        count += media[i];
    }
    float med = count/5;
    printf("A media é: %.2f\n",med);
}