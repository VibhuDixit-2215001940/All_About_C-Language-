//Program To Find Out Length Of A String Functinon By Using F()
#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int i,n;
	printf("Enter a string: ");
	gets(str);
	n=strlen(str);
	printf("Length of a given string is: %d",n);
	return 0;
}
