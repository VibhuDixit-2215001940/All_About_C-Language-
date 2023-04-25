//Add Two No. Using Functions
#include <stdio.h>
int add(){
	int a,b;
	printf("Enter 1st No.: ");
	scanf("%d",&a);
	printf("Enter 2nd No.: ");
	scanf("%d",&b);
	printf("The sum of %d & %d is : %d ",a,b,a+b);
	return 0;
}
int main(){
	add();
	return 0;
}
