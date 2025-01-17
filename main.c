#include <stdio.h>
#include "mylib.h"

int main(void){

	int a = 6, b = 12;
	printf("Edit");
	printf("(initial) a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	printf("(swapped) a = %d, b = %d\n", a, b);

	printf("(added) a + b = %d + %d = %d\n", a, b, add(a, b));
	printf("(subtracted) a - b = %d - %d = %d\n", a, b, subtract(a, b));
	
	printf("(multiplied) a x b = %d x %d = %d\n", a, b, mult(a, b));
	printf("(divided) a / b = %d / %d = %d\n", a, b, div(a, b));
	
	return 0;
}
