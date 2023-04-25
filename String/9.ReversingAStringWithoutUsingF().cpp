//Program To Reverse A String Without Using F()
#include<stdio.h>
#include<string.h>
int main(){
	char str[20];
	int i,c=0;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		c++;
	}
	printf("String Reversed is!!.....\n");
	for(i=c-1;i>=0;i--){
		printf("%c",str[i]);
	}
	return 0;
}
