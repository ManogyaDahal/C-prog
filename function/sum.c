#include <stdio.h>

int sum(int a, int b); 

int main(){
	int a, b; 

	printf("enter any two numbers to find sum of: \n"); 
	scanf("%d %d", &a, &b); 

	 
	printf("Sum is %d \n",sum(a,b));  
	return 0; 
}

int sum(int a , int b){

	return a+b; 
}
