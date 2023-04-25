//Program To Compare Two Strings(Case Sensitive)
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[10];
	int n;
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	n=strcmp(str1,str2);
	if(n==0)
		printf("Strings Are Equal!!");
	else
		printf("Strings Are Not Equal!!");
	return 0;
}
