//Program To Copy A String Into Another String Without Using F()
#include<stdio.h>
#include<string.h>
int main(){
	char str1[20],str2[20];
	int i,n;
	printf("Enter a string: ");
	gets(str1);
	for(i=0;str1[i]!='\0';i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("Copied string is!!: %s",str2);
	return 0;
}
