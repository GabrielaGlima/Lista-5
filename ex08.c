#include <stdio.h>
#include <stdlib.h>
int numeroprimos(int n);

int main(){
    int n;
    printf("digite um numero:\n");
    scanf("%d",&n);

    numeroprimos(n);

    system("PAUSE");
    return 0;
}
int numeroprimos(int n){
    int aux,primo=1;

   for (aux = 2; aux <= n/2; aux++){
        if((n % aux) == 0){
            primo = 0;
        }
   }
        
        if (primo){
            printf("Numero primo\n");
        }else{
            printf("Numero não primo\n");
        }
        
    return aux;
}

    
