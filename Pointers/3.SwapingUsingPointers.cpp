//Swap Two No. Using Pointers
#include<stdio.h>
int main(){
	int *p,*q,a,b,temp=0;
	printf("Enter the num1: ");
	scanf("%d",&a);
	printf("Enter the num2: ");
	scanf("%d",&b);
	printf("The value of num1=%d.\nThe value of num2=%d.",a,b);
	p=&a;	//Giving address of variables to pointers
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("\nThe value of num1=%d.\nThe value of num2=%d.",*p,*q);	
	return 0;
}
