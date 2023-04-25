//Reading And Printing Of Strings Using Gets() & Puts()
#include<stdio.h>
int main(){
	char str[10];
	printf("Enter your name: ");
	gets(str);
	printf("You entered: ");
	puts(str);
	return 0;
}
