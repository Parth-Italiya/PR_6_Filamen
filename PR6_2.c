/*Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Output:
enter string: department

The frequency of string is :
'a'=1
'd'=1
'e'=2
'm'=1
'n'=1
'p'=1
'r'=1
't'=2
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len;
    int frequency[26];

    printf("enter string: ");
    gets(str);

    len = strlen(str);
 
    for(i=0;i<26;i++)
   { frequency[i] = 0;
   }
    for(i=0; i<len; i++)
    { if(str[i]>='a'&&str[i]<='z')
       { frequency[str[i] - 97]++;
    }
        else if(str[i]>='A'&&str[i]<='Z')
         {
           frequency[str[i]-65]++; }
}
    printf("\nThe frequency of string is : \n");
    for(i=0; i<26; i++)
  { 
       if(frequency[i] != 0)
       {
           printf("'%c'=%d\n", (i + 97),frequency[i]);
     }
    } 
}
