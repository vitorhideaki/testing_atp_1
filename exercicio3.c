#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void contar(char string[1001],int *num_quantidade, int *letras_quantidade);

int main(){

    char string[1001];

    int num_quantidade = 0, letras_quantidade = 0;

    scanf("%s", &string);

    contar(string, &num_quantidade, &letras_quantidade);

    printf("A string contem %d numeros e %d letras\n", 
        num_quantidade, 
        letras_quantidade
    );

    return 0;
}

void contar(char string[50],int *num_quantidade, int *letras_quantidade) {

    int tamanho_string = strlen(string);

    for(int i = 0; i < tamanho_string; i++){

        if (string[i] >= 48 && string[i] <= 57){

            *num_quantidade=* num_quantidade + 1;
        }else{

            if (string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122){
                *letras_quantidade=*letras_quantidade + 1;
            } else printf("Por favor, insira apenas letras ou numeros");
        }
    }
}
