//Program To Copy A String Into Another String Using F()
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int i,n;
	printf("Enter a string: ");
	gets(str1);
	strcpy(str2,str1);
	printf("Copied string is!!: %s",str2);
	return 0;
}
