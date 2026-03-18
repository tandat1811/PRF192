#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");

		char c;
    int digit = 0, letter = 0, other = 0;

    while((c = getchar()) != '\n') {
        if (isdigit(c)) {
            digit++;
        }
        else if (isalpha(c)) {
            letter++;
        }
        else {
            other++;
        }
    }
    
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  	printf("%d\n", digit);
    printf("%d\n", letter);
    printf("%d\n", other);
	
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


