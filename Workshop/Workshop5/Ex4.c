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
    int i = 0;
    int wordCount = 0;
    
     scanf("%[^\n]%*c", str);
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  

    while(str[i] != '\0') {
    if (str[i] != ' ' && (i == 0 || str[i-1] == ' ')) {
        wordCount++;
    }
    i++;
}

    printf("%d", wordCount);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}


