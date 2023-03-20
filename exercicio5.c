#include<stdio.h>

void timer(int segundos, int *horas, int *minutos, int *seg);

int main(){

    int segundos, horas = 0, minutos = 0, seg = 0;

    scanf ("%d", &segundos);

    timer(segundos, &horas, &minutos, &seg);

    printf("%d horas, %d minutos, %d segundos\n", horas, minutos, seg);

    return 0;
}

void timer(int segundos, int *horas, int *minutos, int *s){

    *horas = segundos / 3600;
    *minutos = (segundos - (*horas* 3600)) / 60;
    *s = segundos - (*horas* 3600) - (*minutos* 60);
}