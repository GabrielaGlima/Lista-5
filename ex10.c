#include <stdio.h>
#include <stdlib.h>
void conceitonota(float nota);

int main(){
    float nota;

    printf("escreva qual foi sua nota:\n");
    scanf("%f",&nota);

    conceitonota(nota);
}
void conceitonota(float nota){
    if (nota>=9 && nota<=10){
        printf("nota se encaixa no conceito A");
    }else if (nota>=8 && nota<9){
        printf("nota se encaixa no conceito B");
    }else if (nota>=7 && nota<8){
        printf("nota se encaixa no conceito C");
    }else if (nota>=6&& nota<7){
        printf("nota se encaixa no conceito D");
    }else if (nota<6){
        printf("nota se encaixa no conceito F");
    }
}