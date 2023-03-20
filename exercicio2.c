//2) Faca uma funcao para receber uma string e um caractere. A funcao devera retornar a quantidade
//de vezes que o caractere recebido por parametro aparece na string.
#include <stdio.h>
#include <string.h>
int main (){
int i, tot = 0;
char palavra[100], letra;
fgets(palavra,100,stdin);
fflush(stdin);
scanf("%c",&letra);

for (i=0;i<strlen(palavra);i++){
    if (palavra[i]== letra){
        tot += 1;
    }
}
printf("Total: %d",tot);
return 0;

}
