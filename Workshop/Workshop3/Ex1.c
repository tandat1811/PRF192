#include <stdio.h>
#include <math.h>

int main(){
    float n;

    printf("Nhap n:");

    for( ; scanf("%f",&n)!=1 || n<=0 || n>1000 ; ){
        printf("Nhap sai! Nhap lai n: ");
        fflush(stdin);
    }

    float kqua = sqrt(n);
	printf("Can bac 2 la: %.2f",kqua);

    return 0;
}