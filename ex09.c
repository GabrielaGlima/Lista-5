/*9. O cálculo do consumo de energia elétrica dos aparelhos de sua casa pode te 
ajudar a economizar eletricidade e dinheiro. O consumo de energia elétrica dos 
aparelhos de uma casa é obtido aplicando-se a fórmula:
t: tempo em que o produto permanece ligado (horas mensais)
p: potência do aparelho (em Watts)
a) Faça uma função para calcular o consumo de energia de um aparelho. Leia o 
nome do aparelho, tempo que o produto permanece ligado e potência do 
aparelho.
b) Por fim, deve ser impresso o consumo do aparelho. Conforme, exemplo 
abaixo:*/
#include <stdio.h>
#include <stdlib.h>

float consumoaparelho(float temp, float potencia);

int main(){
    float temp,temp1,potencia,consu;
    char n_aparelho[50];

    printf("escreva o nome do aparelho:\n");
    gets(n_aparelho);

    printf("tempo que o produto permanece ligado:\n");
    scanf("%f",&temp);

    printf("potencia do aparelho:\n");
    scanf("%f",&potencia);

    consu = consumoaparelho(temp,potencia);

    printf("uma %s, com potenica de %.2f watts e ligada %.2f por dia, correspodente a %.2f horas mensais consome:\n",n_aparelho,potencia,temp,temp1=temp*30);
    printf("A %s ira consumir %.2f kw/hora no periodo.",n_aparelho,consu);

}
float consumoaparelho(float temp, float potencia){
    float consumo,temp1;

    temp1 = temp * 30;
    consumo = (temp1 * potencia)/1000;

    return consumo;
}