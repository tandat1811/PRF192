#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

typedef struct{
	int x,y;
} Point ;

int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  	Point p1;
    p1.x = 3;
    p1.y = 5;
    printf("Diem 1: (%d, %d)\n", p1.x, p1.y);

  
    Point p2;
    printf("Nhap x: ");
    	scanf("%d", &p2.x);
    printf("Nhap y: ");
    	scanf("%d", &p2.y);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 		printf("Diem 2: (%d, %d)\n", p2.x, p2.y);
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}



