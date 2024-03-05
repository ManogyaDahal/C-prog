// WAP a program to calculate sum ofwto distances and te distance is measured in terms of feet and inch

#include <stdio.h>

int main() {

	int feet1, feet2 , inch1 , inch2  ; 
	int sum_feet, sum_inch; 

	printf("Enter the value of feet 1 and feet 2 respectively:\n"); 
	scanf("%d %d", &feet1 , &feet2); 
	printf("Enter the two distances in inch:\n"); 
	scanf("%d  %d", &inch1 , &inch2);


	sum_feet= (feet1 + feet2)+((inch1 + inch2)/12);
	sum_inch= (inch1 + inch2) % 12 ; 


	printf("The sum of distance is %d feet and %d inch \n ", sum_feet , sum_inch); 


	
	
	return 0; 
}
