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

float calculadora(float num1,float num2,char ch);

int main(){
    float num1,num2;
    char ch;
    
    printf("digite um caractere:\n");
    scanf("%c",&ch);
    printf("digite os dois numeros que deseja calcular:\n");
    scanf("%f%f",&num1,&num2);

    calculadora(num1,num2,ch);

    system("PAUSE");
    return 0;
}
float calculadora(float num1,float num2,char ch){
    float num;
   
    if (ch == '+'){
        num = num1 + num2;
        printf("soma: %.2f",num);
    }else if (ch == '-'){
        num = num1 - num2;
        printf("subtracao: %.2f",num);
    }else if (ch == '*'){
        num = num1 * num2;
        printf("multiplicacao: %.2f",num);
    }else if (ch == '/'){
        if (num2 == 0){
            printf("numero nao pode ser divisivel por 0.");
        }else{
            num = num1/num2;
        printf("divicao: %.2f",num);
        }
    }
    
    return num;
}

