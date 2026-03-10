#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
	float x1, x2, y1, y2, d;
	
	scanf("%f %f",&x1, &y1);
	scanf("%f %f",&x2, &y2);
	d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	
	int found = 0;
	if(d==0){
		found = 1;
	}
	
  // Fixed Do not edit anything here.
  printf("OUTPUT:\n");
  
  printf("%.4f\n",d);
  if(found == 1){
  	printf("Point are coincident\n");
  }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE  
  system ("pause");
  return(0);
}
