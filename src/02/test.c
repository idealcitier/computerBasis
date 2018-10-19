#include<stdio.h>
int main(){
//	double d = 2+1/2;
//	printf("%f\n", d);

	int x = 0,y = 1;

	if(y)
	x+=y;
	if(!x)
		x+=1;
		x-=y;
	if(x)
		x++;
	printf("%d",x);
	return 0;

}
