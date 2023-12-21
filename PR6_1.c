/*Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
Output1:
Enter a string : nayan
The string is palindrome

Oputput2:
Enter a string : harris
The string is not palindrome

*/

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[700];  
    
	int n,i,c=0;
 
    printf("Enter a string : ");
    gets(s);
   
    n=strlen(s);
    for(i=0; i<n/2; i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("The string is palindrome");
    else
        printf("The string is not palindrome");
     
}

