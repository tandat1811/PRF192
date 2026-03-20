#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int findDifference(int arr[], int n){
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i = 0; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
	}
		if(arr[i]< min){
			min = arr[i];
	}
		
	}
		
	return max-min;
}

int main() {
  system("cls");
  printf("INPUT:\n");

  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
	int arr[100];
	for(int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");

  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d",findDifference(arr,n));

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
