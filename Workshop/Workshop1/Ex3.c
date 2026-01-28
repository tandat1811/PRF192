#include <stdio.h>

int main (){
	float a,b,c;
	printf("Nhap 3 so: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a>b && a>c){
		printf("So lon nhat la: %.2f",a);
		
	} else {
		if( b>a && b>c){
			printf("So lon nhat la; %.2f",b);
		} else {
			printf("So lon nhat la: %.2f",c);
		}
	}
	return 0;
}