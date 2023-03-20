//multiplicacao por somas sucessivas
#include<stdio.h>
int Multip_Rec(int n1, int n2){
    switch (n1){
    case 0:
        break;
    default:
        return n2+Multip_Rec(n1-1,n2);
    }
}

int main(){
int n1,n2;
scanf("%d",&n1);
scanf("%d",&n2);
printf("%d",Multip_Rec(n1,n2));
return 0;
}
