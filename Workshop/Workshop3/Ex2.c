#include <stdio.h>
#include <math.h>

int main(){
    float n;

    for(int count = 0; count < 5; count++){

        printf("Nhap n thu %d: ", count+1);

        for( ; scanf("%f",&n)!=1 || n<=0 || n>1000 ; ){
            printf("Nhap sai! Nhap lai: ");
            fflush(stdin);
        }

        printf("Can bac 2 la: %.2f\n", sqrt(n));
    }

    return 0;
}