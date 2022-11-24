/*7. Faça um programa que lê dois pontos P1 = (x1, y1) e P2 = (x2, y2) e, calcule e 
imprima a distância entre esses dois pontos, cujo valor é dado pela seguinte 
fórmula: dist = √(𝑥2 − 𝑥1) + (𝑦2 − 𝑦1) . A função recebe como parâmetro as 
coordenadas dos dois pontos e retorna a distância.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float distanciaentredoispontos(float num1, float num2, float num3, float num4);

int main(){
    float num1,num2,num3,num4;
    printf("escreva os valores dos lados de um triangulo:\n");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);

    distanciaentredoispontos(num1,num2,num3,num4);

    system("PAUSE");
    return 0;
}
float distanciaentredoispontos(float num1, float num2, float num3, float num4){
    float a;

    a =  sqrt((num1 - num2)+(num3 - num4));
    printf("o perimentro do triangulo e:%.2f ",a);

    return a;
}