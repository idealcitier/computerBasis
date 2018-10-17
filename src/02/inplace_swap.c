#include<stdio.h>

void inplace_swap(int* x, int* y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

int main(){
	int a = 1;
	int b = 2;
	
	printf("swap before: a = %d,b = %d\n", a, b);
	inplace_swap(&a, &b);
	printf("swap after: a = %d,b = %d\n", a, b);

	return 0;



}


