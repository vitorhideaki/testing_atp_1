//funcao fatorial por recursividade
#include <stdio.h>
int fatorial(int n){
    switch(n){
        case 0:
            return 1;
        case 1:
            break;
        default:
            return n*fatorial(n-1);
        break;
    }
}

int main(){
int n;
scanf("%d",&n);
printf("%d",fatorial(n));
return 0;

}
