//Program To Merge A String Without Using F()
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[10];
	int i,c=0;
	printf("Enter first string: ");
	gets(str1);
	printf("Enter second string: ");
	gets(str2);
	for(i=0;str1[i]!='\0';i++){
		c++;
	}
	str1[c]=' ';
	for(i=0;str2[i]!='\0';i++){
		str1[c]=str2[i];
		c++;
	}
	printf("The merged string are: %s",str1);
	return 0;
}
