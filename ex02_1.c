#include <stdio.h>
#include <stdlib.h>

float calculadora(float num1,float num2,char ch);

int main(){
    float num1,num2;
    char ch;
    

    printf("digite os valores e a operacao que deseja calcular:\n");
    scanf("%f%c%f",&num1,&ch,&num2);

    calculadora(num1,num2,ch);

    system("PAUSE");
    return 0;
}
float calculadora(float num1,float num2,char ch){
    float num;
   
    if (ch == '+'){
        num = num1 + num2;
        printf("soma: %.2f\n",num);
    }else if (ch == '-'){
        num = num1 - num2;
        printf("subtracao: %.2f\n",num);
    }else if (ch == '*'){
        num = num1 * num2;
        printf("multiplicacao: %.2f\n",num);
    }else if (ch == '/'){
        if (num2 == 0){
            printf("numero nao pode ser divisivel por 0.");
        }else{
            num = num1/num2;
        printf("divicao: %.2f\n",num);
        }
    }
    
    return num;
}