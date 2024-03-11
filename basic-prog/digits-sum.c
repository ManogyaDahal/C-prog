//Write a program to input a number and find sum of indivisual digits.


#include <stdio.h>

void main(){

	int number,sum=0,remainder; 
	
	printf("Enter a number to find the sum of indivisual digits:"); 
	scanf("%d",&number); 

	do{
		remainder = number % 10;
		sum = remainder + sum; 
		number = number/10; 

		 

	}while(number!=0);
	
	printf("The sum of the digits is %d\n", sum); 
	
}
