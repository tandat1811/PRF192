#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main() {
  system("cls");
  printf("INPUT:\n");

  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	int check = 0;
	if (scanf("%d", &n) != 1 || n < 10 || n >= 100){
		check += 1;
	}
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");

  //@STUDENT: WRITE YOUR OUTPUT HERE:
	
	if(check == 1){
		printf("-1");
		return 0;
	} 
	
	int count = 0;
	for(int i = n; count < 4; i++){
		if(isPrime(i)){
			printf("%d\n", i);
			count++;
		}
	}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
