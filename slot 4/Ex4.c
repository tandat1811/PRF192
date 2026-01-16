#include <stdio.h>

int main(){
	int a,b;
	char kytu;
	printf("Nhap 2 so a,b:");
	scanf("%d,%d", &a,&b);
	printf("Nhap phep toan:");
	scanf(" %c", &kytu);
	if (kytu == '/')
		if (b == 0)
			printf ("khong the chia cho so 0");
 	 else 
		printf("Ket qua: %d/%d = %f",a,b,(float)a/b);
 	
	return 0;
}