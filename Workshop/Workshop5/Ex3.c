#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  printf("\nINPUT:\n");

  	char str[100];
    int start, end, len;

    
    scanf("%s", str);

    len = strlen(str);
    end = len - 1;
    start = 0;
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  while (start < end) {
        if (str[start] != str[end]) {
            printf("No\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("Yes\n");
  
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
