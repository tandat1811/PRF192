#include <stdio.h>

int main(){
    int n;
    printf("Nhap n:");
    scanf("%d", &n);

    int soChinhphuong = 0;

    for(int i = 0; i * i <= n; i++){
        if(i * i == n){
            soChinhphuong = 1;
            break;
        }
    }

    if(soChinhphuong == 1){
        printf("%d la so chinh phuong\n", n);
    }else{
        printf("%d khong phai la so chinh phuong\n", n);
    }

    return 0;
}