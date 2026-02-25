#include <stdio.h>

int main(){
    int n;

   
    for( ; ; ){
        printf("Nhap n (1..10): ");
        scanf("%d", &n);

        if(n >= 1 && n <= 10)
            break;

        printf("Nhap sai! Nhap lai.\n");
    }

    
    printf("Cac so tu 1 den %d: ", n);
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }

    printf("\nBang cuu chuong %d:\n", n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}   