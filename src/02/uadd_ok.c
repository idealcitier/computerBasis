#include<math.h>
#include<stdio.h>
// determine whether arguments can be added without overflow

int uadd_ok(unsigned x, unsigned y){
	unsigned s = x + y;

	return s < x ? 0 : 1;

}



int main(){
	unsigned x,y;	
	// add ok
	x = 1;
	y = 2;

	printf("%u + %u = %u, uadd_ok=%d\n", x, y, x+y, uadd_ok(x,y) );

	// test add overflow
	y = 1;
	/*y = pow(2, size)-1;*/
	x = (unsigned)(pow(2, sizeof(unsigned)*8) - 1);
	printf("%u + %u = %u, uadd_ok=%d\n", x, y, x+y, uadd_ok(x,y) );
	return 0;
}
