//To write a program to do print multiplication of number input by the user.

#include <stdio.h>

int main(){
    int i, number; 
    printf("Enter any number to find multiplication of:");
    scanf("%d",&number); 
    
    printf("The multiplication table of %d : \n",number);
    
    for(i=1; i<=10; i++){
    	printf("%d X %d = %d \n",number, i , i*number); 
    }
	printf("\n");
	return 0;
}

