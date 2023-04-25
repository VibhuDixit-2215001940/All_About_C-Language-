//Program To Find Out Length Of A String Functinon Without Using F()
#include<stdio.h>
int main(){
	char str[20];
	int i,c=0;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		c++;
	}
	printf("Length of a given string is: %d",c);
	return 0;
}
