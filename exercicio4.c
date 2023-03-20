#include<stdio.h>
#include <string.h>
void concatena(char a0[], char a1[],char a2[]){
strcat(a0,a1);
strcat(a0," ");
strcat(a0,a2);
}



int main (){
char a0[200] = "",a1[100],a2[100];
fgets(a1,100,stdin);
a1[strlen(a1)-1] = '\0';
fflush(stdin);
fgets(a2,100,stdin);
a2[strlen(a2)-1] = '\0';
fflush(stdin);
concatena(a0,a1,a2);
printf("%s",a0);

}
