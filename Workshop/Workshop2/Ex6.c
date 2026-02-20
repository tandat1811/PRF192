
#include <stdio.h>

int main() {
	int n;
	long long kq = 0;
	printf("Nhap vao so thap phan:");
	while(scanf("%d",&n) != 1){
		printf("Nhap sai roi, hay nhap lai:");
		while(getchar() != '\n');
	}
	
	long long bac = 1;
	while(n > 0) {
		int soDu = n % 2;
		kq = kq + (soDu * bac);
		n = n / 2;
		bac = bac * 10;
	}
	
	printf("He nhi phan: %lld", kq);
	return 0;
}

