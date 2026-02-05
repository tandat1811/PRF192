#include <stdio.h>

int main (){
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	
	int i = 0;
	int soChinhphuong = 0;
	while (i * i <= n){
		if(i * i == n){
			soChinhphuong = 1;
			break;
		}
		i++;
	}
	if (soChinhphuong == 1) {
        printf("%d la so chinh phuong\n", n);
    } else {
        printf("%d khong phai la so chinh phuong\n", n);
    }
	return 0;
}


