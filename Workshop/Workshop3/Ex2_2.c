#include <stdio.h>
#include <math.h>

int main(){
    float n;
    int count = 0;

    for(;;){   

        if(count == 5)
            break;

        printf("Nhap n thu %d: ", count+1);

        scanf("%f",&n);

        if(n>0 && n<=1000){
            printf("Can bac 2 la: %.2f\n", sqrt(n));
            count++;
        }
        else{
            printf("Nhap sai! Nhap lai.\n");
        }
    }

    return 0;
}