//Wap to check whether the number input is palindrome or not

#include <stdio.h>

void main(){

	int number,d,sum=0,p; 
	
	printf("Enter a number to check for palindrome:"); 
	scanf("%d",&number); 
	
	p = number;  //p is original number value input by user 
	while(number!=0){
		
		d = number %10;
		sum = sum*10 + d; 
		number = number /10; 
	}
	if(sum == p){
		printf("%d is palindrome",p); 
	}
	else{
		printf("%d is not a palindrome",p); 
	}
}
