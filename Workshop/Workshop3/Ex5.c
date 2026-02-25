#include <stdio.h>

int main(){
    int n, sum = 0;

    for( ; ; ){   
        printf("Nhap so (0 de dung): ");
        scanf("%d", &n);

        if(n == 0)
            break;   

        sum += n;    
    }

    printf("Tong = %d", sum);

    return 0;
}