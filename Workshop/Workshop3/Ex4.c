#include <stdio.h>

int main(){
    int n, dao = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    
    for( ; n != 0; n /= 10 ){
        dao = dao * 10 + n % 10;
    }

    printf("So dao nguoc = %d", dao);

    return 0;
}