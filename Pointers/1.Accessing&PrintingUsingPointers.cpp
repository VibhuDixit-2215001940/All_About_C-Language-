//Creating and Accessing pointers
#include<stdio.h>
int main(){
	int n=100;
	int *x;
	x=&n;
	printf("The value of num is %d",n);
	printf("\nThe value of num is %d",*x);
	printf("\nThe address of num is %d",&n);	
	printf("\nThe address of num is %d",x);
	return 0;
}
