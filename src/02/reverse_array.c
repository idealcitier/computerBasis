#include<stdio.h>

void inplace_swap(int* x, int* y){
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
	int first, last;
	for(first = 0, last = cnt - 1;first < last; first++,last--){
		inplace_swap(&a[first], &a[last]);
	
	}


}
int main(){
	int a = 1;
	int b = 2;
	
	printf("swap before: a = %d,b = %d\n", a, b);
	inplace_swap(&a, &b);
	printf("swap after: a = %d,b = %d\n", a, b);

	printf("-----------------------------------------\n");
	int array[] = {1,2,3,4};


	printf("swap before:%d \n", *array);
	int	cnt = 4;

	for(int i = 0;i < cnt;i++){
		printf("%d, ", *(array+i));
	}
	printf("\n");
	reverse_array(array,cnt);
		
	for(int i = 0;i < cnt;i++){
		printf("%d, ", *(array+i));
	}
	printf("\n");



	return 0;



}


