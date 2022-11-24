/*2. Faça um algoritmo que, dados dois números e um caractere (+, –, *, /), calcule e 
imprima:
a) A soma desses números, caso seja digitado o caractere +
b) A subtração desses números, caso seja digitado o caractere –
c) A multiplicação desses números, caso seja digitado o caractere *
d) A divisão desses números, caso seja digitado o caractere /
As operações devem finalizar quando a operação digitada for diferente de uma 
das anteriores (+, –, *, /). Obs.: Use uma função para cada operação.*/
#include <stdio.h>
#include <stdlib.h>
float soma(float num1,float num2);
float subtracao(float num1,float num2);
float multiplicacao(float num1,float num2);
float divisao(float num1,float num2);

int main(){
    float num1,num2;
    char ch = '+';
    
  
    while (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        printf("Digite a expressao na forma: n1 operacao n2:\n");
        scanf("%f %c %f", &num1, &ch, &num2);
    
        switch( ch ) {
        case '+':
            printf("%.2f\n\n", soma(num1, num2));
            break;

        case '-':
            printf("%.2f\n\n", subtracao(num1, num2));
            break;

        case '*':
            printf("%.2f\n\n", multiplicacao(num1, num2));
            break;

        case '/':
            if(num2 != 0)
                printf("%.2f\n\n", divisao(num1, num2));
            else
                printf("Nao existe divisao por 0\n\n");
            break;
        default:
            printf("Fechando...");
            break;
        }
    }
    return 0;
}
float soma(float num1,float num2){
   float calculo;

   calculo = num1 + num2;

   return calculo;
}
float subtracao(float num1,float num2){
   float calculo;

   calculo = num1 - num2;

   return calculo;
}
float multiplicacao(float num1,float num2){
   float calculo;

   calculo = num1 * num2;

   return calculo;
}
float divisao(float num1,float num2){
   float calculo;

   calculo = num1 / num2;

   return calculo;
}

