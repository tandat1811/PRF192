#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");
	int n;
	scanf("%d",&n);
	float S;
	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(n == 0){
  	printf("Eror: n must be than 0.");
  	return 0;
  }
  for(int i = 1; i <= n; i++){
  	int giaiThua = 1;
  	for( int j = 1; j <= i; j++){
  		giaiThua *=j;
	  }
	  S = S + 1.0/giaiThua;
  }
  printf("%.3f",S);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
