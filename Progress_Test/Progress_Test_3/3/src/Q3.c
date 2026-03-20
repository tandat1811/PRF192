#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int sumDigits(int n){
	int sum = 0;
	
	while(n>0){
		sum += n%10;
		n = n/10;
	}
	return sum;
}

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	int n;
 	scanf("%d",&n);
	n = abs(n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");

  //@STUDENT: WRITE YOUR OUTPUT HERE:

	printf("%d",sumDigits(n));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
