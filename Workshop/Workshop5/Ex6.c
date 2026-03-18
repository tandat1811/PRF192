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
    scanf("%d", &n);

    char *names[n];
    for(int i = 0; i < n; ++i) {
        names[i] = malloc(sizeof(char) * 50); 
        scanf("%s", names[i]);
    }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
    char *temp;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            if(strcmp(names[i], names[j]) > 0) { 
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%s\n", names[i]);
    }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

