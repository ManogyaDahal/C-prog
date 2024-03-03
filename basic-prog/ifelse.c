// WAP to give rewards to student on passing on each subject 
// and student passing on both subjects


#include <stdio.h>

void main() {

int science,maths; 
printf("Enter 1 if passed in each subject aand 0 in ones you failed:\n"); 
printf("Enter for science and maths respectively:\n"); 
scanf("%d \n %d",&science ,&maths); 


if(science<=1 && maths<=1) 
	{

	if(maths ==1 && science ==1 ) 
		{
		printf("You are given a gift of 45"); 
		}

	else if (maths ==1 || science==1)
		{
		printf(" You are given a gift of 15"); 
		}
	else   
		{	
		printf("you are not recieving any gift"); 
		}
	}
else
	{
		printf(" invalid input"); 
	}
printf("\n"); 
}


