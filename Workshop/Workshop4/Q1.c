#include <stdio.h>
#include <stdlib.h>1
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	float a,b;
	int invalid = 0;
	float result;
	
	if(scanf("%f %f", &a, &b)!= 2){
		invalid = 1;
	} else{
			result = cbrt(a*a + b*b);
	}
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  if(invalid == 1){
  	printf("Invalid Input");
  } else{
  		printf("%.2f", result);
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
