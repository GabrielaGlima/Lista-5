/*1. Faça um programa que leia um número inteiro positivo n e imprima os n 
primeiros números pares. A impressão será feita por uma função, que recebe 
como parâmetro o valor n.*/
#include <stdio.h>
#include <stdlib.h>

int imprimirpar(int num);

int main(){
    int num;
    printf("escreva um numero:\n");
    scanf("%d",&num);

    imprimirpar(num);

    system("PAUSE");
    return 0;
}
int imprimirpar(int num){
    int i;

    for ( i = 0; i < num; i++){
        if (i%2==0){
            printf("%d\n",i);
        }
    }
    return i;
}