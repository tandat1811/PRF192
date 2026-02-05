#include <stdio.h>
#include <math.h>

int main (){
	float n;
	int count = 1;
	while (count <= 5){
		printf("Nhap vao so thu %d:", count);
		
		while(scanf("%f", &n) !=1 || n <= 0){
			printf("Nhap lai:");	
		fflush(stdin);
	}
		float kqua = sqrt(n);
			printf (" Can bac 2 la: %.2f\n",kqua);
		count++;
	}
	
	printf("Da lam xong, qua gioi");
	return 0;
}
