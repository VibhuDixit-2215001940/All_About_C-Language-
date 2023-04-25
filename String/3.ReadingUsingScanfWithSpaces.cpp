//Reading And Printing Of Strings Using Scanf() With Spaces Readings
#include<stdio.h>
int main(){
	char str[10];
	printf("Enter your name: ");
	scanf("%[^\n]",str);
	printf("You entered: %s",str);
	return 0;
}
