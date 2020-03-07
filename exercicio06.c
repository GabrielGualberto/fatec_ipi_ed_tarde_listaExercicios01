
/*
Aluno: Gabriel Gualberto 
Estrutura de Dados - Fatec Ipiranga

Exercicio 06
Escreva um programa que preenche um vetor de 10 posições com valores digitados
pelo usuário. Declare um outro vetor que deverá conter esses mesmos valores, só que
sem repetições
*/
#include<stdio.h>
int main(){
int v[10], x[10];
int i,j,aux=0;
    for(i = 0;i < 10; i++){
        printf("Digite um numero: ");
        scanf("%d",&v[i]);
    }
    for(i = 0;i<10;i++){
        for(j= 0;j<10;j++){
            if(v[i]==v[j]){
                break;
            }else{
                x[i]=v[i];
                aux++;
            }
        }
    }

    for(i=0;i<(aux-1);i++){
        printf("%d ",x[i]);
    }
}