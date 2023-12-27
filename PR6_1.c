/*
Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
output1:
Enter any string: nayan
The string is pelindrome
output2:
Enter any string: kartik
The string is not pelindrome
*/

#include<stdio.h>

void main(){
	int i;
	char name[100];
	int length=0,sum=1;
	
	printf("Enter any string: ");
	gets(name);
	          
	for(i=0; name[i]!='\0'; i++){
		length++;
	}
	for(i=0; i<length/2; i++){
		if(name[i]!= name[length-1-i]){
		sum=0;
	}
}
	(sum==1)?printf("The string is pelindrome")
			:printf("The string is not pelindrome");
}
