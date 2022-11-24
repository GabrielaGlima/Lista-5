/*6. Faça um programa que calcule (use funções):
a) O perímetro de um retângulo, sendo dados os comprimentos de seus lados, 
a e b. Obs.: P = 2a + 2b.
b) A área de um quadrado, dados os comprimentos dos lados. Obs.: A = s².*/
#include <stdio.h>
#include <stdlib.h>
float perimetro(float num1, float num2);
float areaquadrado(float num1, float num2);

int main(){
    float num1,num2;

    printf("escreva os valores dos lados de um triangulo:\n");
    scanf("%f%f",&num1,&num2);

    perimetro(num1,num2);
    areaquadrado(num1,num2);

    system("PAUSE");
    return 0;
}
float perimetro(float num1, float num2){
    float p;

    p = 2*num1 + 2*num2;
    printf("o perimentro do triangulo e:%.2f \n",p);

    return p;
}
float areaquadrado(float num1, float num2){
    float a;

    a = pow((((2*num1) + (2*num2))/2),2);
    printf("o perimentro do triangulo e:%.2f \n",a);

    return a;
}