//receber um inteiro positivo n e imprimir todos os numeros de 0 ate n em ordem decrescente
#include<stdio.h>
int recursiva(int n){
    printf("%d\n",n);
    switch(n){
case 0:
    return 0;
default:
    return(recursiva(n-1));
    }
}

int main(){
int n;
scanf("%d",&n);
printf("\n");
recursiva(n);

}
