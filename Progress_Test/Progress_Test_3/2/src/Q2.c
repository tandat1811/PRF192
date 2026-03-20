#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int a;
  int invalid = 0;
  if(scanf("%d",&a) != 1 || a<0){
  	invalid +=1;
	}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	 
	 if(invalid ==1){
	 	printf("-1");
	 } else{
	 	float kq = sqrt(a);
	 	printf("%.3f",kq);
	 }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
