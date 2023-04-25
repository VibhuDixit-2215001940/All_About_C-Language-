//Checking A String Is Palindrom Or Not Using String Functions
#include<stdio.h>
#include<string.h>
int main(){
	char str1[10],str2[10];
	printf("\nEnter the string to check palindrome or not: ");
	gets(str1);
	strcpy(str2,str1);			//Copy Str1 To Str2
	strrev(str2);				//Reversing Str2
	if(strcmp(str1,str2)==0)		//Comparing Str1 & Str2 Equal or not
		printf("PALINDROME STRING!!");
	else
		printf("NOT A PALINDROME STRING!!");
}
