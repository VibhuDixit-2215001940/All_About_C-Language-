//Program To Reverse A String Using F()
#include<stdio.h>
#include<string.h>
int main(){
	char str[20],c;
	printf("Enter a string: ");
	gets(str);
	strrev(str);
	printf("Reverse string!!....\n%s",str);
	return 0;
}
