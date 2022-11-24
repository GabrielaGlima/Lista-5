/*4. Encontre o perímetro de um triângulo, dados os comprimentos de seus três 
lados. Use uma função para calcular o perímetro. Obs.: P = a + b + c, onde a, b e 
c são os lados do triângulo.*/
#include <stdio.h>
#include <stdlib.h>
float perimetro(float num1, float num2, float num3);

int main(){
    float num1,num2,num3;

    printf("escreva os valores dos lados de um triangulo:\n");
    scanf("%f%f%f",&num1,&num2,&num3);

    perimetro(num1,num2,num3);

    system("PAUSE");
    return 0;
}
float perimetro(float num1, float num2, float num3){
    float p;

    p = num1 + num2 + num3;
    printf("o perimentro do triangulo e:%.2f ",p);

    return p;
}