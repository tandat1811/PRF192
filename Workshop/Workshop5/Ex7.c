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
    int num_digits = 0;
    int num_letters = 0;
    int num_others = 0;
    
    while((c=getchar())!='\n'){  
        if(isdigit(c)) {         
            num_digits++;
        } else if(isalpha(c)) {  
            num_letters++;
        } else {                  
            num_others++;
        }
    }
    
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
    printf("%d\n%d\n%d", num_digits, num_letters, num_others);
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
