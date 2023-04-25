//Reading And Printing Of Strings Using Scanf() WithOut Spaces
#include<stdio.h>
int main(){
	char str[10];
	printf("Enter your name: ");
	scanf("%s",str);
	printf("You entered: %s",str);
	return 0;
}
