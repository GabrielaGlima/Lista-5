/*5. Encontre a área de um triângulo, dados os comprimentos dos três lados. Utiliza 
a fórmula de Hero: √𝑠(𝑠 − 𝑎)(𝑠 − 𝑏) (𝑠 − 𝑐) . Onde s é a metade do perímetro 
(use a função do exemplo anterior).*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float areatriangulo(float num1, float num2, float num3);

int main(){
    float num1,num2,num3;
    printf("escreva os valores dos lados de um triangulo:\n");
    scanf("%f%f%f",&num1,&num2,&num3);

    areatriangulo(num1,num2,num3);

    system("PAUSE");
    return 0;
}
float areatriangulo(float num1, float num2, float num3){
    float a,s;

    s = (num1 + num2 + num3)/2;
    a =  sqrt(s*(s - num1)*(s-num2)*(s-num3));
    printf("o perimentro do triangulo e:%.2f ",a);

    return a;
}