//Count Length Of String Using Pointers
#include<stdio.h>
#include<string.h>
int main(){
	int i,c=0;
	char str[10],*p;
	printf("Enter a string: ");
	gets(str);
	p=&str[0];
	while(*p!='\0'){
		c++;
		p++;
	}
	printf("\nLength of string are: %d",c);
}
