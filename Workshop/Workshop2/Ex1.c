#include <stdio.h>
#include <math.h>

int main (){
	
	float n;
	
	printf ("Nhap vao n:"); 	
	while(scanf("%f", &n) !=1 || n <= 0|| n > 1000){
		printf("Nhap lai n:");	
		fflush(stdin);
	}
	
	float kqua = sqrt(n);
	printf("%.2f",kqua);
	
	return 0;
}
