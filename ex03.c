/*3. Elabore um algoritmo que leia um número r, calcule e imprima o comprimento 
da circunferência, a área do círculo e o volume da esfera de raio r, dados por C = 
2πr, A = πr² e V = (¾)πr³, respectivamente. Use uma função para calcular cada 
valor.*/
#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

float comprimento(float num);
float area(float num);
float volume(float num);

int main(){
    float num,comp,ar,vol;
    printf("escreva um valor:\n");
    scanf("%f",&num);

    comp = comprimento(num);
    ar = area(num);
    vol = volume(num);

    printf("comprimento da circunferencia:%.2f\n",comp);
    printf("a area do circulo:%.2f\n",ar);
    printf("volume da esfera de raio:%.2f\n",vol);

    system ("PAUSE");
    return 0;
}
float comprimento(float num){
    float c;

    c = 2*(pi * num);

    return c;
}
float area(float num){
    float a;
    
    a = pi*pow(num,2);

    return a;
}
float volume(float num){
    float v;

    v = (pi*pow(num,3))*3/4;

    return v;
}