//WAP a program to convert celsius into fahrenheit scale


#include <stdio.h>
#define ratio 1.8 		//formula is (((celsius/100)*180)+32)

int main() {
	
	float Celsius , Fahrenheit ;
	printf("Enter the Celsius scale to be converted into Fahrenheit: "); 
	scanf("%f",& Celsius); 

	Fahrenheit=((Celsius*ratio)+32); 

	printf("%.3f Celsius in Fahrenheit is %.3f  \n",Celsius, Fahrenheit); 

	return 0;

}
