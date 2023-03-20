#include<stdio.h>
#include<locale.h>
 
int main() {

    int num, i;
 
    scanf("%d", &num);
 
    if (primo(num) == 1) printf("%d e um numero primo\n", num);
    else printf("%d nao e um numero primo\n", num);
 
    return 0;
}

int primo(int num) {

    int resultado = 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
            break;
        }
    }
    return 1;
}