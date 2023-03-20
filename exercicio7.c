#include<stdio.h>
#include<string.h>

int fibonacci(int n);

int main(){

    int n;

    scanf("%d",&n);

    printf("vale %d\n",fibonacci(n));

    return 0;
}

int fibonacci(int n) {

    if(n <= 2) {
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}
