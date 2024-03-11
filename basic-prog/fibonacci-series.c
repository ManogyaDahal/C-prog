//Write a probram to print fibonacci series.

#include <stdio.h> 
 
int main(){
	
	int n, a=0, b=1, c=1 , i=1; 

	printf("Enter the nth term to display fibonacci series upto:\n"); 
	scanf("%d",&n); 
	
	printf("Enter fibonacci series:\n"); 
	while(i<=n)
	{
		printf("%d \t",c);
		c=a+b; 
		a=b; 
		b=c; 
		i++; 
	}
	printf("\n"); 

	return 0;
}
