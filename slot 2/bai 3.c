#include <stdio.h>

int main (){
	float a,b,sum;
	a = 5; b = 10.216;
	sum = a + b;
	printf ("a=%.0f\n", a);
	printf ("b=%.3f\n", b);
	printf("Ket qua: %.0f + %.3f = %.3f", a, b, sum);
	return 0;
}