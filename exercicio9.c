#include <stdio.h>

int naturais(N, count);

int main() {
    int N, count = 0;

    printf("Digite o valor de N: ");

    scanf("%d", &N);

    naturais(N, count);

    return 0;
}

int naturais(N, count) {

    if (count <= N) {
        printf("%d\n", count);
        count++;
        naturais(N, count);
    }
}